#include <tree_sitter/parser.h>
#include <vector>
#include <cwctype>
#include <cstring>
#include <cassert>
#include <stdio.h>

namespace
{

  using std::iswspace;
  using std::memcpy;
  using std::vector;

  enum TokenType
  {
    NEWLINE,
    INDENT,
    DEDENT,
    STRING_START,
    STRING_CONTENT,
    STRING_END,
    COMMENT
  };

  struct Delimiter
  {
    enum
    {
      SingleQuote = 1 << 0,
      DoubleQuote = 1 << 1
    };

    Delimiter() : flags(0) {}

    int32_t end_character() const
    {
      if (flags & SingleQuote)
        return '\'';
      if (flags & DoubleQuote)
        return '"';
      return 0;
    }

    void set_end_character(int32_t character)
    {
      switch (character)
      {
      case '\'':
        flags |= SingleQuote;
        break;
      case '"':
        flags |= DoubleQuote;
        break;
      default:
        assert(false);
      }
    }

    char flags;
  };

  struct Scanner
  {
    Scanner()
    {
      assert(sizeof(Delimiter) == sizeof(char));
      deserialize(NULL, 0);
    }

    unsigned serialize(char *buffer)
    {
      size_t i = 0;

      // serialize the delimiter_stack
      size_t delimiter_count = delimiter_stack.size();
      if (delimiter_count > UINT8_MAX)
        delimiter_count = UINT8_MAX;
      buffer[i++] = delimiter_count;

      if (delimiter_count > 0)
      {
        memcpy(&buffer[i], delimiter_stack.data(), delimiter_count);
      }
      i += delimiter_count;

      // serialize the previous_indent_length
      buffer[i++] = previous_indent_length;

      return i;
    }

    void deserialize(const char *buffer, unsigned length)
    {
      delimiter_stack.clear();
      previous_indent_length = 0;

      if (length > 0)
      {
        size_t i = 0;

        // deserialize (delimiter_count, *delimiter_stack)
        size_t delimiter_count = (uint8_t)buffer[i++];
        delimiter_stack.resize(delimiter_count);
        if (delimiter_count > 0)
        {
          memcpy(delimiter_stack.data(), &buffer[i], delimiter_count);
        }
        i += delimiter_count;

        // deserialize previous_indent_length
        previous_indent_length = buffer[i++];
      }
    }

    void advance(TSLexer *lexer)
    {
      lexer->advance(lexer, false);
    }

    void skip(TSLexer *lexer)
    {
      lexer->advance(lexer, true);
    }

    bool scan(TSLexer *lexer, const bool *valid_symbols)
    {
      bool error_recovery_mode = valid_symbols[STRING_CONTENT] && valid_symbols[INDENT];

      if (valid_symbols[STRING_CONTENT] && !delimiter_stack.empty() && !error_recovery_mode)
      {
        Delimiter delimiter = delimiter_stack.back();
        int32_t end_character = delimiter.end_character();
        bool has_content = false;
        while (lexer->lookahead)
        {
          if (lexer->lookahead == '{' || lexer->lookahead == '}')
          {
            lexer->mark_end(lexer);
            lexer->result_symbol = STRING_CONTENT;
            return has_content;
          }
          else if (lexer->lookahead == '\\')
          {
            lexer->mark_end(lexer);
            lexer->result_symbol = STRING_CONTENT;
            return has_content;
          }
          else if (lexer->lookahead == end_character)
          {
            if (has_content)
            {
              lexer->result_symbol = STRING_CONTENT;
            }
            else
            {
              lexer->advance(lexer, false);
              delimiter_stack.pop_back();
              lexer->result_symbol = STRING_END;
            }
            lexer->mark_end(lexer);
            return true;
          }
          else if (lexer->lookahead == '\n' && has_content)
          {
            return false;
          }
          advance(lexer);
          has_content = true;
        }
      }

      lexer->mark_end(lexer);

      bool found_end_of_line = false;
      uint32_t indent_length = 0;
      int32_t first_comment_indent_length = -1;
      for (;;)
      {
        if (lexer->lookahead == '\n')
        {
          found_end_of_line = true;
          indent_length = 0;
          skip(lexer);
        }
        else if (lexer->lookahead == ' ')
        {
          indent_length++;
          skip(lexer);
        }
        else if (lexer->lookahead == '\r')
        {
          indent_length = 0;
          skip(lexer);
        }
        else if (lexer->lookahead == '\t')
        {
          indent_length += 8;
          skip(lexer);
        }
        else if (lexer->lookahead == '#')
        {
          if (first_comment_indent_length == -1)
          {
            first_comment_indent_length = (int32_t)indent_length;
          }
          while (lexer->lookahead && lexer->lookahead != '\n')
          {
            skip(lexer);
          }
          skip(lexer);
          indent_length = 0;
        }
        else if (lexer->lookahead == '\\')
        {
          skip(lexer);
          if (lexer->lookahead == '\r')
          {
            skip(lexer);
          }
          if (lexer->lookahead == '\n')
          {
            skip(lexer);
          }
          else
          {
            return false;
          }
        }
        else if (lexer->lookahead == '\f')
        {
          indent_length = 0;
          skip(lexer);
        }
        else if (lexer->lookahead == 0)
        {
          indent_length = 0;
          found_end_of_line = true;
          break;
        }
        else
        {
          break;
        }
      }

      if (found_end_of_line)
      {
        if (
            valid_symbols[INDENT] &&
            previous_indent_length == 0 &&
            indent_length > 0)
        {
          previous_indent_length = indent_length;
          lexer->result_symbol = INDENT;
          return true;
        }

        if (
            valid_symbols[DEDENT] &&
            previous_indent_length > 0 &&
            indent_length == 0 &&

            // Wait to create a dedent token until we've consumed any comments
            // whose indentation matches the current block.
            first_comment_indent_length < (int32_t)previous_indent_length)
        {
          previous_indent_length = indent_length;
          lexer->result_symbol = DEDENT;
          return true;
        }

        if (valid_symbols[NEWLINE] && !error_recovery_mode)
        {
          lexer->result_symbol = NEWLINE;
          return true;
        }
      }

      if (first_comment_indent_length == -1 && valid_symbols[STRING_START])
      {
        Delimiter delimiter;

        if (lexer->lookahead == '\'')
        {
          delimiter.set_end_character('\'');
          advance(lexer);
          lexer->mark_end(lexer);
        }
        else if (lexer->lookahead == '"')
        {
          delimiter.set_end_character('"');
          advance(lexer);
          lexer->mark_end(lexer);
        }

        if (delimiter.end_character())
        {
          delimiter_stack.push_back(delimiter);
          lexer->result_symbol = STRING_START;
          return true;
        }
      }

      return false;
    }

    uint16_t previous_indent_length;
    vector<Delimiter> delimiter_stack;
  };

}

extern "C"
{

  void *tree_sitter_talon_external_scanner_create()
  {
    return new Scanner();
  }

  bool tree_sitter_talon_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *valid_symbols)
  {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->scan(lexer, valid_symbols);
  }

  unsigned tree_sitter_talon_external_scanner_serialize(void *payload, char *buffer)
  {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->serialize(buffer);
  }

  void tree_sitter_talon_external_scanner_deserialize(void *payload, const char *buffer, unsigned length)
  {
    Scanner *scanner = static_cast<Scanner *>(payload);
    scanner->deserialize(buffer, length);
  }

  void tree_sitter_talon_external_scanner_destroy(void *payload)
  {
    Scanner *scanner = static_cast<Scanner *>(payload);
    delete scanner;
  }
}