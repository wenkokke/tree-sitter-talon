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

  enum MatchState
  {
    LINE_START,
    LINE_CONTENT,
    DASHES,
    AFTER_DASHES,
  };

  enum TokenType
  {
    MATCHES_START,
    MATCHES_END,
    MATCHES_EMPTY,
    NEWLINE,
    INDENT,
    DEDENT,
    STRING_START,
    STRING_CONTENT,
    STRING_END,
    COMMENT,
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

    inline bool is_whitespace(int32_t lookahead)
    {
      return lookahead == ' ' || lookahead == '\t' || lookahead == '\r' || lookahead == '\f';
    }

    inline int skip_whitespace(TSLexer *lexer)
    {
      int indent_length = 0;
      for (;;)
      {
        if (lexer->lookahead == ' ')
        { // space
          indent_length++;
          skip(lexer);
        }
        else if (lexer->lookahead == '\t')
        { // tab - treat as 8 spaces
          indent_length += 8;
          skip(lexer);
        }
        else if (lexer->lookahead == '\r')
        { // carriage return - reset indent
          indent_length = 0;
          skip(lexer);
        }
        else if (lexer->lookahead == '\f')
        { // form feed - reset indent
          indent_length = 0;
          skip(lexer);
        }
        else
        {
          return indent_length;
        }
      }
    }

    void advance_line(TSLexer *lexer, bool skip)
    {
      while (lexer->lookahead && lexer->lookahead != '\n')
      {
        lexer->advance(lexer, skip);
      }
      lexer->advance(lexer, true);
    }

    void advance(TSLexer *lexer)
    {
      lexer->advance(lexer, false);
    }

    void skip(TSLexer *lexer)
    {
      lexer->advance(lexer, true);
    }

    inline bool find_match_end(TSLexer *lexer, bool skip_any)
    {

      // Search for "-\n" at the start of the file or line.
      MatchState match_state = LINE_START;
      while (lexer->lookahead)
      {
        // Found a dash at the start of a file or line.
        if (lexer->lookahead == '-')
        {
          if (match_state == LINE_START || match_state == DASHES)
          {
            match_state = DASHES;
            advance(lexer);
          }
          else
          { // If AFTER_DASHES, set match_state to LINE_CONTENT,
            // e.g., "-- -- --" is not a valid separator.
            match_state = LINE_CONTENT;
            skip(lexer);
          }
        }
        // Found the end of the line.
        else if (lexer->lookahead == '\n')
        {
          if (match_state == DASHES || match_state == AFTER_DASHES)
          { // ... *after* dashes
            return true;
          }
          else
          { // ... *not after* dashes.
            match_state = LINE_START;
            skip(lexer);
          }
        }
        // Found the end of the file.
        else if (lexer->lookahead == 0)
        {
          if (match_state == DASHES || match_state == AFTER_DASHES)
          { // ... *after* dashes
            return true;
          }
          else
          { // ... *not after* dashes.
            return false;
          }
        }
        // Found some whitespace after the '-'.
        else if (is_whitespace(lexer->lookahead) && (match_state == DASHES || match_state == AFTER_DASHES))
        { // If DASHES, set match_state to AFTER_DASHES, to distinguish between,
          // e.g., "--   " (valid) and "-- -- --" (not valid).
          match_state = AFTER_DASHES;
          skip(lexer);
        }
        // Found any other character.
        else if (skip_any)
        {
          match_state = LINE_CONTENT;
          skip(lexer);
        }
        else
        {
          return false;
        }
      }
      return false;
    }

    bool scan(TSLexer *lexer, const bool *valid_symbols)
    {
      // Check for match context.
      if (valid_symbols[MATCHES_START] && valid_symbols[MATCHES_EMPTY])
      {
        // Don't consume input.
        lexer->mark_end(lexer);

        // Search for MATCHES_END.
        if (find_match_end(lexer, true))
        { // If MATCHES_END was found, return MATCHES_START.
          lexer->result_symbol = MATCHES_START;
          return true;
        }
        else
        { // Otherwise, return MATCHES_EMPTY.
          lexer->result_symbol = MATCHES_EMPTY;
          return true;
        }
      }
      else if (valid_symbols[MATCHES_END])
      {
        if (find_match_end(lexer, false))
        {
          lexer->mark_end(lexer);
          lexer->result_symbol = MATCHES_END;
          return true;
        }
      }
      // Check for string content.
      else if (valid_symbols[STRING_CONTENT] && !delimiter_stack.empty())
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
              advance(lexer);
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

      // loop until we find the next content character
      for (;;)
      {
        if (lexer->lookahead == '\n')
        { // newline
          found_end_of_line = true;
          indent_length = 0;
          skip(lexer);
        }
        else if (lexer->lookahead == ' ')
        { // space
          indent_length++;
          skip(lexer);
        }
        else if (lexer->lookahead == '\t')
        { // tab - treat as 8 spaces
          indent_length += 8;
          skip(lexer);
        }
        else if (lexer->lookahead == '\r')
        { // carriage return - reset indent
          indent_length = 0;
          skip(lexer);
        }
        else if (lexer->lookahead == '\f')
        { // form feed - reset indent
          indent_length = 0;
          skip(lexer);
        }
        else if (lexer->lookahead == 0)
        { // end of file
          indent_length = 0;
          found_end_of_line = true;
          break;
        }
        else if (lexer->lookahead == '#')
        { // comment
          if (first_comment_indent_length == -1)
          {
            first_comment_indent_length = (int32_t)indent_length;
          }
          advance_line(lexer, true);
          indent_length = 0;
        }
        else
        { // any content character
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

        if (valid_symbols[NEWLINE])
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