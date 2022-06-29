#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 258
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 13
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 8

enum {
  sym_comment = 1,
  anon_sym_DASH = 2,
  anon_sym_and = 3,
  anon_sym_not = 4,
  anon_sym_COLON = 5,
  anon_sym_os = 6,
  anon_sym_tag = 7,
  anon_sym_mode = 8,
  anon_sym_app = 9,
  anon_sym_app_DOTname = 10,
  anon_sym_app_DOTexe = 11,
  anon_sym_app_DOTbundle = 12,
  anon_sym_title = 13,
  anon_sym_code_DOTlanguage = 14,
  anon_sym_language = 15,
  anon_sym_COLON2 = 16,
  anon_sym_tag_LPAREN_RPAREN = 17,
  anon_sym_settings_LPAREN_RPAREN = 18,
  anon_sym_PIPE = 19,
  sym_start_anchor = 20,
  sym_end_anchor = 21,
  sym_word = 22,
  anon_sym_LBRACE = 23,
  anon_sym_RBRACE = 24,
  anon_sym_LT = 25,
  anon_sym_GT = 26,
  anon_sym_LBRACK = 27,
  anon_sym_RBRACK = 28,
  anon_sym_STAR = 29,
  anon_sym_PLUS = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_SEMI = 33,
  anon_sym_EQ = 34,
  anon_sym_SLASH = 35,
  anon_sym_PERCENT = 36,
  anon_sym_or = 37,
  anon_sym_key = 38,
  aux_sym_key_action_token1 = 39,
  anon_sym_sleep = 40,
  anon_sym_COMMA = 41,
  sym_identifier = 42,
  sym_integer = 43,
  sym_float = 44,
  aux_sym_regex_escape_sequence_token1 = 45,
  sym_implicit_string = 46,
  anon_sym_LBRACE_LBRACE = 47,
  anon_sym_RBRACE_RBRACE = 48,
  sym_string_escape_sequence = 49,
  sym__not_escapesequence = 50,
  sym__newline = 51,
  sym__indent = 52,
  sym__dedent = 53,
  sym__string_start = 54,
  sym__string_content = 55,
  sym__string_end = 56,
  sym__regex_start = 57,
  sym__regex_content = 58,
  sym__regex_end = 59,
  sym_source_file = 60,
  sym_context = 61,
  sym__optional_or = 62,
  sym_or = 63,
  sym__optional_and = 64,
  sym_and = 65,
  sym__optional_not = 66,
  sym_not = 67,
  sym_match = 68,
  sym_match_key = 69,
  sym_match_pattern = 70,
  sym__prioritized_key = 71,
  sym_include_tag = 72,
  sym_settings = 73,
  sym_command = 74,
  sym__suite = 75,
  sym_block = 76,
  sym_rule = 77,
  sym__optional_choice = 78,
  sym_choice = 79,
  sym__optional_anchor = 80,
  sym__optional_seq = 81,
  sym_seq = 82,
  sym__primary_rule = 83,
  sym_list = 84,
  sym_capture = 85,
  sym_optional = 86,
  sym_repeat = 87,
  sym_repeat1 = 88,
  sym_parenthesized_rule = 89,
  sym__simple_statements = 90,
  sym__simple_statement = 91,
  sym_assignment = 92,
  sym_expression = 93,
  sym__expression = 94,
  sym_parenthesized_expression = 95,
  sym_binary_operator = 96,
  sym_key_action = 97,
  sym_sleep_action = 98,
  sym_action = 99,
  sym_argument_list = 100,
  sym_string = 101,
  sym_interpolation = 102,
  sym__escape_interpolation = 103,
  sym__not_interpolation = 104,
  aux_sym_source_file_repeat1 = 105,
  aux_sym_or_repeat1 = 106,
  aux_sym_block_repeat1 = 107,
  aux_sym_choice_repeat1 = 108,
  aux_sym_seq_repeat1 = 109,
  aux_sym__simple_statements_repeat1 = 110,
  aux_sym_argument_list_repeat1 = 111,
  aux_sym_string_repeat1 = 112,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_DASH] = "-",
  [anon_sym_and] = "and",
  [anon_sym_not] = "not",
  [anon_sym_COLON] = ":",
  [anon_sym_os] = "identifier",
  [anon_sym_tag] = "identifier",
  [anon_sym_mode] = "identifier",
  [anon_sym_app] = "identifier",
  [anon_sym_app_DOTname] = "identifier",
  [anon_sym_app_DOTexe] = "identifier",
  [anon_sym_app_DOTbundle] = "identifier",
  [anon_sym_title] = "identifier",
  [anon_sym_code_DOTlanguage] = "identifier",
  [anon_sym_language] = "identifier",
  [anon_sym_COLON2] = ":",
  [anon_sym_tag_LPAREN_RPAREN] = "tag()",
  [anon_sym_settings_LPAREN_RPAREN] = "settings()",
  [anon_sym_PIPE] = "|",
  [sym_start_anchor] = "start_anchor",
  [sym_end_anchor] = "end_anchor",
  [sym_word] = "word",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_or] = "or",
  [anon_sym_key] = "key",
  [aux_sym_key_action_token1] = "implicit_string",
  [anon_sym_sleep] = "sleep",
  [anon_sym_COMMA] = ",",
  [sym_identifier] = "identifier",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [aux_sym_regex_escape_sequence_token1] = "regex_escape_sequence_token1",
  [sym_implicit_string] = "implicit_string",
  [anon_sym_LBRACE_LBRACE] = "{",
  [anon_sym_RBRACE_RBRACE] = "}",
  [sym_string_escape_sequence] = "string_escape_sequence",
  [sym__not_escapesequence] = "_not_escapesequence",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__string_start] = "\"",
  [sym__string_content] = "_string_content",
  [sym__string_end] = "\"",
  [sym__regex_start] = "/",
  [sym__regex_content] = "_regex_content",
  [sym__regex_end] = "/",
  [sym_source_file] = "source_file",
  [sym_context] = "context",
  [sym__optional_or] = "_optional_or",
  [sym_or] = "or",
  [sym__optional_and] = "_optional_and",
  [sym_and] = "and",
  [sym__optional_not] = "_optional_not",
  [sym_not] = "not",
  [sym_match] = "match",
  [sym_match_key] = "match_key",
  [sym_match_pattern] = "match_pattern",
  [sym__prioritized_key] = "_prioritized_key",
  [sym_include_tag] = "include_tag",
  [sym_settings] = "settings",
  [sym_command] = "command",
  [sym__suite] = "_suite",
  [sym_block] = "block",
  [sym_rule] = "rule",
  [sym__optional_choice] = "_optional_choice",
  [sym_choice] = "choice",
  [sym__optional_anchor] = "_optional_anchor",
  [sym__optional_seq] = "_optional_seq",
  [sym_seq] = "seq",
  [sym__primary_rule] = "_primary_rule",
  [sym_list] = "list",
  [sym_capture] = "capture",
  [sym_optional] = "optional",
  [sym_repeat] = "repeat",
  [sym_repeat1] = "repeat1",
  [sym_parenthesized_rule] = "parenthesized_rule",
  [sym__simple_statements] = "_simple_statements",
  [sym__simple_statement] = "_simple_statement",
  [sym_assignment] = "assignment",
  [sym_expression] = "expression",
  [sym__expression] = "_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_binary_operator] = "binary_operator",
  [sym_key_action] = "key_action",
  [sym_sleep_action] = "sleep_action",
  [sym_action] = "action",
  [sym_argument_list] = "argument_list",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [sym__escape_interpolation] = "_escape_interpolation",
  [sym__not_interpolation] = "_not_interpolation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_or_repeat1] = "or_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_choice_repeat1] = "choice_repeat1",
  [aux_sym_seq_repeat1] = "seq_repeat1",
  [aux_sym__simple_statements_repeat1] = "_simple_statements_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_os] = sym_identifier,
  [anon_sym_tag] = sym_identifier,
  [anon_sym_mode] = sym_identifier,
  [anon_sym_app] = sym_identifier,
  [anon_sym_app_DOTname] = sym_identifier,
  [anon_sym_app_DOTexe] = sym_identifier,
  [anon_sym_app_DOTbundle] = sym_identifier,
  [anon_sym_title] = sym_identifier,
  [anon_sym_code_DOTlanguage] = sym_identifier,
  [anon_sym_language] = sym_identifier,
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_tag_LPAREN_RPAREN] = anon_sym_tag_LPAREN_RPAREN,
  [anon_sym_settings_LPAREN_RPAREN] = anon_sym_settings_LPAREN_RPAREN,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_start_anchor] = sym_start_anchor,
  [sym_end_anchor] = sym_end_anchor,
  [sym_word] = sym_word,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_key] = anon_sym_key,
  [aux_sym_key_action_token1] = sym_implicit_string,
  [anon_sym_sleep] = anon_sym_sleep,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_identifier] = sym_identifier,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [aux_sym_regex_escape_sequence_token1] = aux_sym_regex_escape_sequence_token1,
  [sym_implicit_string] = sym_implicit_string,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE,
  [sym_string_escape_sequence] = sym_string_escape_sequence,
  [sym__not_escapesequence] = sym__not_escapesequence,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__string_start] = sym__string_start,
  [sym__string_content] = sym__string_content,
  [sym__string_end] = sym__string_start,
  [sym__regex_start] = anon_sym_SLASH,
  [sym__regex_content] = sym__regex_content,
  [sym__regex_end] = anon_sym_SLASH,
  [sym_source_file] = sym_source_file,
  [sym_context] = sym_context,
  [sym__optional_or] = sym__optional_or,
  [sym_or] = sym_or,
  [sym__optional_and] = sym__optional_and,
  [sym_and] = sym_and,
  [sym__optional_not] = sym__optional_not,
  [sym_not] = sym_not,
  [sym_match] = sym_match,
  [sym_match_key] = sym_match_key,
  [sym_match_pattern] = sym_match_pattern,
  [sym__prioritized_key] = sym__prioritized_key,
  [sym_include_tag] = sym_include_tag,
  [sym_settings] = sym_settings,
  [sym_command] = sym_command,
  [sym__suite] = sym__suite,
  [sym_block] = sym_block,
  [sym_rule] = sym_rule,
  [sym__optional_choice] = sym__optional_choice,
  [sym_choice] = sym_choice,
  [sym__optional_anchor] = sym__optional_anchor,
  [sym__optional_seq] = sym__optional_seq,
  [sym_seq] = sym_seq,
  [sym__primary_rule] = sym__primary_rule,
  [sym_list] = sym_list,
  [sym_capture] = sym_capture,
  [sym_optional] = sym_optional,
  [sym_repeat] = sym_repeat,
  [sym_repeat1] = sym_repeat1,
  [sym_parenthesized_rule] = sym_parenthesized_rule,
  [sym__simple_statements] = sym__simple_statements,
  [sym__simple_statement] = sym__simple_statement,
  [sym_assignment] = sym_assignment,
  [sym_expression] = sym_expression,
  [sym__expression] = sym__expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_binary_operator] = sym_binary_operator,
  [sym_key_action] = sym_key_action,
  [sym_sleep_action] = sym_sleep_action,
  [sym_action] = sym_action,
  [sym_argument_list] = sym_argument_list,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [sym__escape_interpolation] = sym__escape_interpolation,
  [sym__not_interpolation] = sym__not_interpolation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_or_repeat1] = aux_sym_or_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_choice_repeat1] = aux_sym_choice_repeat1,
  [aux_sym_seq_repeat1] = aux_sym_seq_repeat1,
  [aux_sym__simple_statements_repeat1] = aux_sym__simple_statements_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_os] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_app] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_app_DOTname] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_app_DOTexe] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_app_DOTbundle] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_code_DOTlanguage] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_language] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_settings_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_start_anchor] = {
    .visible = true,
    .named = true,
  },
  [sym_end_anchor] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_action_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sleep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_regex_escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_implicit_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__not_escapesequence] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__string_start] = {
    .visible = true,
    .named = false,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__string_end] = {
    .visible = true,
    .named = false,
  },
  [sym__regex_start] = {
    .visible = true,
    .named = false,
  },
  [sym__regex_content] = {
    .visible = false,
    .named = true,
  },
  [sym__regex_end] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym__optional_or] = {
    .visible = false,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym__optional_and] = {
    .visible = false,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym__optional_not] = {
    .visible = false,
    .named = true,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_match] = {
    .visible = true,
    .named = true,
  },
  [sym_match_key] = {
    .visible = true,
    .named = true,
  },
  [sym_match_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__prioritized_key] = {
    .visible = false,
    .named = true,
  },
  [sym_include_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_settings] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__suite] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym__optional_choice] = {
    .visible = false,
    .named = true,
  },
  [sym_choice] = {
    .visible = true,
    .named = true,
  },
  [sym__optional_anchor] = {
    .visible = false,
    .named = true,
  },
  [sym__optional_seq] = {
    .visible = false,
    .named = true,
  },
  [sym_seq] = {
    .visible = true,
    .named = true,
  },
  [sym__primary_rule] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_capture] = {
    .visible = true,
    .named = true,
  },
  [sym_optional] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat1] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_rule] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_statements] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_key_action] = {
    .visible = true,
    .named = true,
  },
  [sym_sleep_action] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_interpolation] = {
    .visible = false,
    .named = true,
  },
  [sym__not_interpolation] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_or_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_choice_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_seq_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__simple_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_action = 1,
  field_arguments = 2,
  field_key = 3,
  field_left = 4,
  field_operator = 5,
  field_pattern = 6,
  field_right = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action] = "action",
  [field_arguments] = "arguments",
  [field_key] = "key",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_pattern] = "pattern",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0, .inherited = true},
  [1] =
    {field_key, 0},
  [2] =
    {field_pattern, 0},
  [3] =
    {field_action, 0},
    {field_arguments, 1},
  [5] =
    {field_left, 0},
    {field_right, 2},
  [7] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = sym_block,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__simple_statements, 2,
    sym__simple_statements,
    sym_block,
  0,
};

static inline bool sym_string_escape_sequence_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < '\\'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '\\' || (c >= 'a' && c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(117);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '%') ADVANCE(220);
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '+') ADVANCE(214);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == '0') ADVANCE(283);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(209);
      if (lookahead == '=') ADVANCE(218);
      if (lookahead == '>') ADVANCE(210);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '^') ADVANCE(158);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'k') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == '{') ADVANCE(206);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(113)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '$' ||
          ('(' <= lookahead && lookahead <= '+') ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '?' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(293);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(300);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(8)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(16)
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '%') ADVANCE(220);
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '+') ADVANCE(214);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == '0') ADVANCE(283);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(209);
      if (lookahead == '=') ADVANCE(218);
      if (lookahead == '>') ADVANCE(210);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '^') ADVANCE(158);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'k') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == '{') ADVANCE(206);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '+') ADVANCE(214);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '<') ADVANCE(209);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '^') ADVANCE(158);
      if (lookahead == '{') ADVANCE(205);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(220);
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '+') ADVANCE(214);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == '}') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '0') ADVANCE(283);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == 'k') ADVANCE(245);
      if (lookahead == 's') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '0') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(301);
      if (lookahead == 'k') ADVANCE(245);
      if (lookahead == 's') ADVANCE(258);
      if (lookahead == '{') ADVANCE(206);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == 'm') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == 'c') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == 'm') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == 'm') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(155);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(156);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(68);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(285);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(286);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 'n') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(131);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 90:
      if (lookahead == 'x') ADVANCE(50);
      END_STATE();
    case 91:
      if (lookahead == 'y') ADVANCE(222);
      END_STATE();
    case 92:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 93:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(285);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(286);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 108:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 109:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') SKIP(114)
      END_STATE();
    case 110:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') SKIP(114)
      if (lookahead == '\r') SKIP(109)
      END_STATE();
    case 111:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') SKIP(116)
      END_STATE();
    case 112:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') SKIP(116)
      if (lookahead == '\r') SKIP(111)
      END_STATE();
    case 113:
      if (eof) ADVANCE(117);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '%') ADVANCE(220);
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '+') ADVANCE(214);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == '0') ADVANCE(283);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(217);
      if (lookahead == '<') ADVANCE(209);
      if (lookahead == '=') ADVANCE(218);
      if (lookahead == '>') ADVANCE(210);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '^') ADVANCE(158);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'k') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == '{') ADVANCE(206);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(113)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 114:
      if (eof) ADVANCE(117);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '<') ADVANCE(209);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') SKIP(110)
      if (lookahead == '^') ADVANCE(158);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '{') ADVANCE(205);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '}') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(114)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 115:
      if (eof) ADVANCE(117);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '<') ADVANCE(209);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') SKIP(112)
      if (lookahead == '^') ADVANCE(158);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == '{') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(116)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 116:
      if (eof) ADVANCE(117);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == '<') ADVANCE(209);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') SKIP(112)
      if (lookahead == '^') ADVANCE(158);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == '{') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(116)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == ')') ADVANCE(119);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_os);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '(') ADVANCE(28);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_app);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_app);
      if (lookahead == '.') ADVANCE(41);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_app);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_app_DOTname);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_app_DOTname);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_app_DOTexe);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_app_DOTexe);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_app_DOTbundle);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_app_DOTbundle);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_code_DOTlanguage);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_code_DOTlanguage);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_language);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_language);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_language);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_tag_LPAREN_RPAREN);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_settings_LPAREN_RPAREN);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_start_anchor);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_end_anchor);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 's') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 't') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 't') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(160);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(201);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(297);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(298);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(227);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_sleep);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_sleep);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == 'p') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 't') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 't') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'y') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(32);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(33);
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(281);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(94);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(291);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(292);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_regex_escape_sequence_token1);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\r') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      if (lookahead == '\\') ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__not_escapesequence);
      if (lookahead == '\n') ADVANCE(300);
      if (lookahead == '\r') ADVANCE(3);
      if (sym_string_escape_sequence_character_set_1(lookahead)) ADVANCE(299);
      if (lookahead == 'U') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead == 'x') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 114, .external_lex_state = 2},
  [2] = {.lex_state = 115, .external_lex_state = 2},
  [3] = {.lex_state = 115, .external_lex_state = 2},
  [4] = {.lex_state = 115, .external_lex_state = 2},
  [5] = {.lex_state = 115, .external_lex_state = 2},
  [6] = {.lex_state = 22, .external_lex_state = 3},
  [7] = {.lex_state = 21, .external_lex_state = 4},
  [8] = {.lex_state = 23, .external_lex_state = 2},
  [9] = {.lex_state = 21, .external_lex_state = 5},
  [10] = {.lex_state = 23, .external_lex_state = 2},
  [11] = {.lex_state = 23, .external_lex_state = 2},
  [12] = {.lex_state = 21, .external_lex_state = 5},
  [13] = {.lex_state = 21, .external_lex_state = 4},
  [14] = {.lex_state = 21, .external_lex_state = 4},
  [15] = {.lex_state = 23, .external_lex_state = 2},
  [16] = {.lex_state = 19, .external_lex_state = 6},
  [17] = {.lex_state = 19, .external_lex_state = 2},
  [18] = {.lex_state = 19, .external_lex_state = 7},
  [19] = {.lex_state = 19, .external_lex_state = 2},
  [20] = {.lex_state = 19, .external_lex_state = 2},
  [21] = {.lex_state = 19, .external_lex_state = 2},
  [22] = {.lex_state = 21, .external_lex_state = 8},
  [23] = {.lex_state = 19, .external_lex_state = 2},
  [24] = {.lex_state = 19, .external_lex_state = 2},
  [25] = {.lex_state = 21, .external_lex_state = 8},
  [26] = {.lex_state = 21, .external_lex_state = 8},
  [27] = {.lex_state = 21, .external_lex_state = 8},
  [28] = {.lex_state = 19, .external_lex_state = 2},
  [29] = {.lex_state = 21, .external_lex_state = 9},
  [30] = {.lex_state = 19, .external_lex_state = 7},
  [31] = {.lex_state = 21, .external_lex_state = 10},
  [32] = {.lex_state = 19, .external_lex_state = 2},
  [33] = {.lex_state = 21, .external_lex_state = 10},
  [34] = {.lex_state = 21, .external_lex_state = 10},
  [35] = {.lex_state = 19, .external_lex_state = 7},
  [36] = {.lex_state = 19, .external_lex_state = 2},
  [37] = {.lex_state = 19, .external_lex_state = 2},
  [38] = {.lex_state = 19, .external_lex_state = 2},
  [39] = {.lex_state = 19, .external_lex_state = 6},
  [40] = {.lex_state = 19, .external_lex_state = 6},
  [41] = {.lex_state = 19, .external_lex_state = 2},
  [42] = {.lex_state = 21, .external_lex_state = 10},
  [43] = {.lex_state = 21, .external_lex_state = 10},
  [44] = {.lex_state = 21, .external_lex_state = 10},
  [45] = {.lex_state = 21, .external_lex_state = 10},
  [46] = {.lex_state = 21, .external_lex_state = 10},
  [47] = {.lex_state = 21, .external_lex_state = 10},
  [48] = {.lex_state = 21, .external_lex_state = 9},
  [49] = {.lex_state = 21, .external_lex_state = 9},
  [50] = {.lex_state = 21, .external_lex_state = 9},
  [51] = {.lex_state = 21, .external_lex_state = 9},
  [52] = {.lex_state = 21, .external_lex_state = 9},
  [53] = {.lex_state = 21, .external_lex_state = 9},
  [54] = {.lex_state = 21, .external_lex_state = 9},
  [55] = {.lex_state = 25, .external_lex_state = 2},
  [56] = {.lex_state = 21, .external_lex_state = 9},
  [57] = {.lex_state = 21, .external_lex_state = 9},
  [58] = {.lex_state = 21, .external_lex_state = 9},
  [59] = {.lex_state = 21, .external_lex_state = 9},
  [60] = {.lex_state = 21, .external_lex_state = 9},
  [61] = {.lex_state = 19, .external_lex_state = 2},
  [62] = {.lex_state = 19, .external_lex_state = 2},
  [63] = {.lex_state = 21, .external_lex_state = 9},
  [64] = {.lex_state = 24, .external_lex_state = 2},
  [65] = {.lex_state = 21, .external_lex_state = 9},
  [66] = {.lex_state = 24, .external_lex_state = 2},
  [67] = {.lex_state = 19, .external_lex_state = 2},
  [68] = {.lex_state = 24, .external_lex_state = 2},
  [69] = {.lex_state = 23, .external_lex_state = 2},
  [70] = {.lex_state = 22, .external_lex_state = 11},
  [71] = {.lex_state = 22, .external_lex_state = 11},
  [72] = {.lex_state = 22, .external_lex_state = 11},
  [73] = {.lex_state = 22, .external_lex_state = 11},
  [74] = {.lex_state = 22, .external_lex_state = 11},
  [75] = {.lex_state = 22, .external_lex_state = 11},
  [76] = {.lex_state = 22, .external_lex_state = 11},
  [77] = {.lex_state = 0, .external_lex_state = 12},
  [78] = {.lex_state = 19, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 12},
  [80] = {.lex_state = 19, .external_lex_state = 6},
  [81] = {.lex_state = 19, .external_lex_state = 2},
  [82] = {.lex_state = 19, .external_lex_state = 2},
  [83] = {.lex_state = 19, .external_lex_state = 6},
  [84] = {.lex_state = 19, .external_lex_state = 2},
  [85] = {.lex_state = 19, .external_lex_state = 2},
  [86] = {.lex_state = 19, .external_lex_state = 2},
  [87] = {.lex_state = 19, .external_lex_state = 6},
  [88] = {.lex_state = 19, .external_lex_state = 6},
  [89] = {.lex_state = 19, .external_lex_state = 6},
  [90] = {.lex_state = 19, .external_lex_state = 7},
  [91] = {.lex_state = 19, .external_lex_state = 6},
  [92] = {.lex_state = 19, .external_lex_state = 2},
  [93] = {.lex_state = 19, .external_lex_state = 6},
  [94] = {.lex_state = 19, .external_lex_state = 7},
  [95] = {.lex_state = 0, .external_lex_state = 7},
  [96] = {.lex_state = 19, .external_lex_state = 7},
  [97] = {.lex_state = 19, .external_lex_state = 7},
  [98] = {.lex_state = 19, .external_lex_state = 7},
  [99] = {.lex_state = 19, .external_lex_state = 7},
  [100] = {.lex_state = 19, .external_lex_state = 7},
  [101] = {.lex_state = 115, .external_lex_state = 2},
  [102] = {.lex_state = 115, .external_lex_state = 2},
  [103] = {.lex_state = 115, .external_lex_state = 2},
  [104] = {.lex_state = 115, .external_lex_state = 2},
  [105] = {.lex_state = 115, .external_lex_state = 2},
  [106] = {.lex_state = 20, .external_lex_state = 13},
  [107] = {.lex_state = 115, .external_lex_state = 2},
  [108] = {.lex_state = 115, .external_lex_state = 2},
  [109] = {.lex_state = 115, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 7},
  [111] = {.lex_state = 115, .external_lex_state = 2},
  [112] = {.lex_state = 115, .external_lex_state = 2},
  [113] = {.lex_state = 115, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 7},
  [115] = {.lex_state = 115, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 7},
  [117] = {.lex_state = 0, .external_lex_state = 7},
  [118] = {.lex_state = 0, .external_lex_state = 7},
  [119] = {.lex_state = 0, .external_lex_state = 12},
  [120] = {.lex_state = 0, .external_lex_state = 12},
  [121] = {.lex_state = 0, .external_lex_state = 12},
  [122] = {.lex_state = 0, .external_lex_state = 12},
  [123] = {.lex_state = 0, .external_lex_state = 12},
  [124] = {.lex_state = 0, .external_lex_state = 7},
  [125] = {.lex_state = 0, .external_lex_state = 12},
  [126] = {.lex_state = 0, .external_lex_state = 7},
  [127] = {.lex_state = 21, .external_lex_state = 4},
  [128] = {.lex_state = 0, .external_lex_state = 12},
  [129] = {.lex_state = 0, .external_lex_state = 12},
  [130] = {.lex_state = 0, .external_lex_state = 12},
  [131] = {.lex_state = 22, .external_lex_state = 11},
  [132] = {.lex_state = 0, .external_lex_state = 12},
  [133] = {.lex_state = 0, .external_lex_state = 12},
  [134] = {.lex_state = 0, .external_lex_state = 12},
  [135] = {.lex_state = 0, .external_lex_state = 12},
  [136] = {.lex_state = 0, .external_lex_state = 12},
  [137] = {.lex_state = 0, .external_lex_state = 7},
  [138] = {.lex_state = 0, .external_lex_state = 7},
  [139] = {.lex_state = 0, .external_lex_state = 12},
  [140] = {.lex_state = 0, .external_lex_state = 7},
  [141] = {.lex_state = 0, .external_lex_state = 7},
  [142] = {.lex_state = 21, .external_lex_state = 4},
  [143] = {.lex_state = 0, .external_lex_state = 7},
  [144] = {.lex_state = 0, .external_lex_state = 7},
  [145] = {.lex_state = 0, .external_lex_state = 7},
  [146] = {.lex_state = 0, .external_lex_state = 7},
  [147] = {.lex_state = 0, .external_lex_state = 7},
  [148] = {.lex_state = 0, .external_lex_state = 7},
  [149] = {.lex_state = 21, .external_lex_state = 4},
  [150] = {.lex_state = 20, .external_lex_state = 13},
  [151] = {.lex_state = 0, .external_lex_state = 7},
  [152] = {.lex_state = 0, .external_lex_state = 7},
  [153] = {.lex_state = 0, .external_lex_state = 7},
  [154] = {.lex_state = 20, .external_lex_state = 13},
  [155] = {.lex_state = 20, .external_lex_state = 13},
  [156] = {.lex_state = 20, .external_lex_state = 13},
  [157] = {.lex_state = 20, .external_lex_state = 13},
  [158] = {.lex_state = 20, .external_lex_state = 13},
  [159] = {.lex_state = 20, .external_lex_state = 13},
  [160] = {.lex_state = 20, .external_lex_state = 13},
  [161] = {.lex_state = 20, .external_lex_state = 13},
  [162] = {.lex_state = 20, .external_lex_state = 13},
  [163] = {.lex_state = 20, .external_lex_state = 13},
  [164] = {.lex_state = 20, .external_lex_state = 13},
  [165] = {.lex_state = 20, .external_lex_state = 13},
  [166] = {.lex_state = 20, .external_lex_state = 13},
  [167] = {.lex_state = 0, .external_lex_state = 12},
  [168] = {.lex_state = 0, .external_lex_state = 7},
  [169] = {.lex_state = 0, .external_lex_state = 6},
  [170] = {.lex_state = 0, .external_lex_state = 6},
  [171] = {.lex_state = 0, .external_lex_state = 7},
  [172] = {.lex_state = 0, .external_lex_state = 7},
  [173] = {.lex_state = 0, .external_lex_state = 7},
  [174] = {.lex_state = 114, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 7},
  [176] = {.lex_state = 0, .external_lex_state = 6},
  [177] = {.lex_state = 0, .external_lex_state = 7},
  [178] = {.lex_state = 0, .external_lex_state = 12},
  [179] = {.lex_state = 0, .external_lex_state = 12},
  [180] = {.lex_state = 0, .external_lex_state = 12},
  [181] = {.lex_state = 114, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 6},
  [183] = {.lex_state = 0, .external_lex_state = 7},
  [184] = {.lex_state = 114, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 6},
  [186] = {.lex_state = 114, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 7},
  [188] = {.lex_state = 0, .external_lex_state = 7},
  [189] = {.lex_state = 114, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 12},
  [191] = {.lex_state = 0, .external_lex_state = 6},
  [192] = {.lex_state = 114, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 12},
  [194] = {.lex_state = 0, .external_lex_state = 6},
  [195] = {.lex_state = 0, .external_lex_state = 7},
  [196] = {.lex_state = 0, .external_lex_state = 6},
  [197] = {.lex_state = 114, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 7},
  [199] = {.lex_state = 0, .external_lex_state = 7},
  [200] = {.lex_state = 295, .external_lex_state = 2},
  [201] = {.lex_state = 114, .external_lex_state = 2},
  [202] = {.lex_state = 295, .external_lex_state = 2},
  [203] = {.lex_state = 114, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 114, .external_lex_state = 13},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 6},
  [208] = {.lex_state = 0, .external_lex_state = 7},
  [209] = {.lex_state = 114, .external_lex_state = 13},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 12},
  [213] = {.lex_state = 26, .external_lex_state = 2},
  [214] = {.lex_state = 295, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 6},
  [216] = {.lex_state = 0, .external_lex_state = 7},
  [217] = {.lex_state = 0, .external_lex_state = 7},
  [218] = {.lex_state = 0, .external_lex_state = 7},
  [219] = {.lex_state = 0, .external_lex_state = 7},
  [220] = {.lex_state = 0, .external_lex_state = 12},
  [221] = {.lex_state = 0, .external_lex_state = 7},
  [222] = {.lex_state = 226, .external_lex_state = 2},
  [223] = {.lex_state = 226, .external_lex_state = 2},
  [224] = {.lex_state = 114, .external_lex_state = 2},
  [225] = {.lex_state = 114, .external_lex_state = 13},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 6},
  [228] = {.lex_state = 0, .external_lex_state = 7},
  [229] = {.lex_state = 0, .external_lex_state = 12},
  [230] = {.lex_state = 295, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 12},
  [232] = {.lex_state = 0, .external_lex_state = 7},
  [233] = {.lex_state = 0, .external_lex_state = 7},
  [234] = {.lex_state = 0, .external_lex_state = 7},
  [235] = {.lex_state = 0, .external_lex_state = 7},
  [236] = {.lex_state = 0, .external_lex_state = 7},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 12},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 26, .external_lex_state = 2},
  [241] = {.lex_state = 26, .external_lex_state = 2},
  [242] = {.lex_state = 114, .external_lex_state = 2},
  [243] = {.lex_state = 26, .external_lex_state = 2},
  [244] = {.lex_state = 26, .external_lex_state = 2},
  [245] = {.lex_state = 226, .external_lex_state = 2},
  [246] = {.lex_state = 226, .external_lex_state = 2},
  [247] = {.lex_state = 26, .external_lex_state = 2},
  [248] = {.lex_state = 26, .external_lex_state = 2},
  [249] = {.lex_state = 114, .external_lex_state = 2},
  [250] = {.lex_state = 114, .external_lex_state = 2},
  [251] = {.lex_state = 115, .external_lex_state = 2},
  [252] = {.lex_state = 226, .external_lex_state = 2},
  [253] = {.lex_state = 226, .external_lex_state = 2},
  [254] = {.lex_state = 0, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token__string_start = 3,
  ts_external_token__string_content = 4,
  ts_external_token__string_end = 5,
  ts_external_token__regex_start = 6,
  ts_external_token__regex_content = 7,
  ts_external_token__regex_end = 8,
  ts_external_token_comment = 9,
  ts_external_token_RBRACK = 10,
  ts_external_token_RPAREN = 11,
  ts_external_token_RBRACE = 12,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__string_start] = sym__string_start,
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token__string_end] = sym__string_end,
  [ts_external_token__regex_start] = sym__regex_start,
  [ts_external_token__regex_content] = sym__regex_content,
  [ts_external_token__regex_end] = sym__regex_end,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_RBRACK] = anon_sym_RBRACK,
  [ts_external_token_RPAREN] = anon_sym_RPAREN,
  [ts_external_token_RBRACE] = anon_sym_RBRACE,
};

static const bool ts_external_scanner_states[14][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token__regex_start] = true,
    [ts_external_token__regex_content] = true,
    [ts_external_token__regex_end] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACK] = true,
    [ts_external_token_RPAREN] = true,
    [ts_external_token_RBRACE] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__string_start] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACE] = true,
  },
  [4] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACK] = true,
  },
  [7] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
  },
  [8] = {
    [ts_external_token__newline] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [10] = {
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
  },
  [11] = {
    [ts_external_token__string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACE] = true,
  },
  [12] = {
    [ts_external_token__newline] = true,
    [ts_external_token_comment] = true,
  },
  [13] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACE] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_os] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_app] = ACTIONS(1),
    [anon_sym_app_DOTname] = ACTIONS(1),
    [anon_sym_app_DOTexe] = ACTIONS(1),
    [anon_sym_app_DOTbundle] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_code_DOTlanguage] = ACTIONS(1),
    [anon_sym_language] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_tag_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_settings_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_start_anchor] = ACTIONS(1),
    [sym_end_anchor] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_key] = ACTIONS(1),
    [anon_sym_sleep] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [aux_sym_regex_escape_sequence_token1] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__string_start] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym__string_end] = ACTIONS(1),
    [sym__regex_start] = ACTIONS(1),
    [sym__regex_content] = ACTIONS(1),
    [sym__regex_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(239),
    [sym_context] = STATE(5),
    [sym__optional_or] = STATE(237),
    [sym_or] = STATE(237),
    [sym__optional_and] = STATE(8),
    [sym_and] = STATE(8),
    [sym__optional_not] = STATE(64),
    [sym_not] = STATE(64),
    [sym_match] = STATE(64),
    [sym_match_key] = STATE(200),
    [sym__prioritized_key] = STATE(230),
    [sym_include_tag] = STATE(3),
    [sym_settings] = STATE(3),
    [sym_command] = STATE(3),
    [sym_rule] = STATE(203),
    [sym__optional_choice] = STATE(224),
    [sym_choice] = STATE(224),
    [sym__optional_anchor] = STATE(181),
    [sym__optional_seq] = STATE(184),
    [sym_seq] = STATE(184),
    [sym__primary_rule] = STATE(23),
    [sym_list] = STATE(23),
    [sym_capture] = STATE(23),
    [sym_optional] = STATE(23),
    [sym_repeat] = STATE(23),
    [sym_repeat1] = STATE(23),
    [sym_parenthesized_rule] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(9),
    [anon_sym_os] = ACTIONS(11),
    [anon_sym_tag] = ACTIONS(11),
    [anon_sym_mode] = ACTIONS(11),
    [anon_sym_app] = ACTIONS(11),
    [anon_sym_app_DOTname] = ACTIONS(11),
    [anon_sym_app_DOTexe] = ACTIONS(11),
    [anon_sym_app_DOTbundle] = ACTIONS(11),
    [anon_sym_title] = ACTIONS(11),
    [anon_sym_code_DOTlanguage] = ACTIONS(11),
    [anon_sym_language] = ACTIONS(11),
    [anon_sym_tag_LPAREN_RPAREN] = ACTIONS(13),
    [anon_sym_settings_LPAREN_RPAREN] = ACTIONS(15),
    [sym_start_anchor] = ACTIONS(17),
    [sym_word] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_tag_LPAREN_RPAREN,
    ACTIONS(15), 1,
      anon_sym_settings_LPAREN_RPAREN,
    ACTIONS(17), 1,
      sym_start_anchor,
    ACTIONS(19), 1,
      sym_word,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(181), 1,
      sym__optional_anchor,
    STATE(203), 1,
      sym_rule,
    STATE(184), 2,
      sym__optional_seq,
      sym_seq,
    STATE(224), 2,
      sym__optional_choice,
      sym_choice,
    STATE(4), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(23), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [60] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_tag_LPAREN_RPAREN,
    ACTIONS(15), 1,
      anon_sym_settings_LPAREN_RPAREN,
    ACTIONS(17), 1,
      sym_start_anchor,
    ACTIONS(19), 1,
      sym_word,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(181), 1,
      sym__optional_anchor,
    STATE(203), 1,
      sym_rule,
    STATE(184), 2,
      sym__optional_seq,
      sym_seq,
    STATE(224), 2,
      sym__optional_choice,
      sym_choice,
    STATE(4), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(23), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [120] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_tag_LPAREN_RPAREN,
    ACTIONS(40), 1,
      anon_sym_settings_LPAREN_RPAREN,
    ACTIONS(43), 1,
      sym_start_anchor,
    ACTIONS(46), 1,
      sym_word,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    STATE(181), 1,
      sym__optional_anchor,
    STATE(203), 1,
      sym_rule,
    STATE(184), 2,
      sym__optional_seq,
      sym_seq,
    STATE(224), 2,
      sym__optional_choice,
      sym_choice,
    STATE(4), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(23), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [180] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_tag_LPAREN_RPAREN,
    ACTIONS(15), 1,
      anon_sym_settings_LPAREN_RPAREN,
    ACTIONS(17), 1,
      sym_start_anchor,
    ACTIONS(19), 1,
      sym_word,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(181), 1,
      sym__optional_anchor,
    STATE(203), 1,
      sym_rule,
    STATE(184), 2,
      sym__optional_seq,
      sym_seq,
    STATE(224), 2,
      sym__optional_choice,
      sym_choice,
    STATE(2), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(23), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [240] = 10,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_key,
    ACTIONS(69), 1,
      anon_sym_sleep,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(75), 1,
      sym__string_start,
    ACTIONS(73), 2,
      sym_integer,
      sym_float,
    ACTIONS(77), 2,
      sym__string_content,
      sym__string_end,
    ACTIONS(63), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(166), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [284] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_key,
    ACTIONS(83), 1,
      anon_sym_sleep,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      sym_integer,
    ACTIONS(89), 1,
      sym_float,
    ACTIONS(91), 1,
      sym__dedent,
    ACTIONS(93), 1,
      sym__string_start,
    STATE(107), 1,
      sym_block,
    STATE(13), 2,
      sym__simple_statements,
      aux_sym_block_repeat1,
    STATE(178), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(121), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [333] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_DASH,
    STATE(200), 1,
      sym_match_key,
    STATE(230), 1,
      sym__prioritized_key,
    STATE(11), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(64), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(11), 10,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
  [374] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_key,
    ACTIONS(83), 1,
      anon_sym_sleep,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      sym_integer,
    ACTIONS(89), 1,
      sym_float,
    ACTIONS(93), 1,
      sym__string_start,
    ACTIONS(97), 1,
      sym__newline,
    ACTIONS(99), 1,
      sym__indent,
    STATE(104), 1,
      sym__suite,
    STATE(105), 1,
      sym__simple_statements,
    STATE(179), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(121), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [425] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_not,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(200), 1,
      sym_match_key,
    STATE(230), 1,
      sym__prioritized_key,
    STATE(10), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(64), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(106), 10,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
  [466] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_DASH,
    STATE(200), 1,
      sym_match_key,
    STATE(230), 1,
      sym__prioritized_key,
    STATE(10), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(64), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(11), 10,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
  [507] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_key,
    ACTIONS(83), 1,
      anon_sym_sleep,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      sym_integer,
    ACTIONS(89), 1,
      sym_float,
    ACTIONS(93), 1,
      sym__string_start,
    ACTIONS(97), 1,
      sym__newline,
    ACTIONS(99), 1,
      sym__indent,
    STATE(101), 1,
      sym__suite,
    STATE(105), 1,
      sym__simple_statements,
    STATE(179), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(121), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [558] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_key,
    ACTIONS(83), 1,
      anon_sym_sleep,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      sym_integer,
    ACTIONS(89), 1,
      sym_float,
    ACTIONS(93), 1,
      sym__string_start,
    ACTIONS(114), 1,
      sym__dedent,
    STATE(14), 2,
      sym__simple_statements,
      aux_sym_block_repeat1,
    STATE(178), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(121), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [604] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_key,
    ACTIONS(122), 1,
      anon_sym_sleep,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(128), 1,
      sym_integer,
    ACTIONS(131), 1,
      sym_float,
    ACTIONS(134), 1,
      sym__dedent,
    ACTIONS(136), 1,
      sym__string_start,
    STATE(14), 2,
      sym__simple_statements,
      aux_sym_block_repeat1,
    STATE(178), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(121), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [650] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(200), 1,
      sym_match_key,
    STATE(230), 1,
      sym__prioritized_key,
    STATE(69), 2,
      sym__optional_and,
      sym_and,
    STATE(64), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(11), 10,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
  [687] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_word,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_PLUS,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      aux_sym_seq_repeat1,
    ACTIONS(139), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(83), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [729] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_start_anchor,
    ACTIONS(157), 1,
      sym_word,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      anon_sym_LT,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym__optional_anchor,
    STATE(173), 2,
      sym__optional_seq,
      sym_seq,
    STATE(219), 2,
      sym__optional_choice,
      sym_choice,
    STATE(18), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [771] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      anon_sym_LT,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_word,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(171), 1,
      anon_sym_PLUS,
    STATE(35), 1,
      aux_sym_seq_repeat1,
    ACTIONS(139), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(98), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [813] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_start_anchor,
    ACTIONS(157), 1,
      sym_word,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      anon_sym_LT,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym__optional_anchor,
    STATE(173), 2,
      sym__optional_seq,
      sym_seq,
    STATE(208), 2,
      sym__optional_choice,
      sym_choice,
    STATE(18), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [855] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      sym_start_anchor,
    ACTIONS(175), 1,
      sym_word,
    STATE(170), 1,
      sym__optional_anchor,
    STATE(176), 2,
      sym__optional_seq,
      sym_seq,
    STATE(227), 2,
      sym__optional_choice,
      sym_choice,
    STATE(16), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [897] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      sym_start_anchor,
    ACTIONS(175), 1,
      sym_word,
    STATE(170), 1,
      sym__optional_anchor,
    STATE(176), 2,
      sym__optional_seq,
      sym_seq,
    STATE(215), 2,
      sym__optional_choice,
      sym_choice,
    STATE(16), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [939] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_key,
    ACTIONS(83), 1,
      anon_sym_sleep,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      sym_integer,
    ACTIONS(89), 1,
      sym_float,
    ACTIONS(93), 1,
      sym__string_start,
    ACTIONS(177), 1,
      sym__newline,
    STATE(193), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(121), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [981] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      sym_word,
    ACTIONS(181), 1,
      anon_sym_STAR,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    STATE(41), 1,
      aux_sym_seq_repeat1,
    ACTIONS(139), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(82), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1023] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_start_anchor,
    ACTIONS(157), 1,
      sym_word,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      anon_sym_LT,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym__optional_anchor,
    STATE(173), 2,
      sym__optional_seq,
      sym_seq,
    STATE(228), 2,
      sym__optional_choice,
      sym_choice,
    STATE(18), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1065] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_key,
    ACTIONS(83), 1,
      anon_sym_sleep,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      sym_integer,
    ACTIONS(89), 1,
      sym_float,
    ACTIONS(93), 1,
      sym__string_start,
    ACTIONS(185), 1,
      sym__newline,
    STATE(193), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(121), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1107] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_key,
    ACTIONS(83), 1,
      anon_sym_sleep,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      sym_integer,
    ACTIONS(89), 1,
      sym_float,
    ACTIONS(93), 1,
      sym__string_start,
    ACTIONS(187), 1,
      sym__newline,
    STATE(193), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(121), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1149] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_key,
    ACTIONS(83), 1,
      anon_sym_sleep,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      sym_integer,
    ACTIONS(89), 1,
      sym_float,
    ACTIONS(93), 1,
      sym__string_start,
    ACTIONS(189), 1,
      sym__newline,
    STATE(193), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(121), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1191] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      sym_start_anchor,
    ACTIONS(175), 1,
      sym_word,
    STATE(170), 1,
      sym__optional_anchor,
    STATE(176), 2,
      sym__optional_seq,
      sym_seq,
    STATE(207), 2,
      sym__optional_choice,
      sym_choice,
    STATE(16), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1233] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_key,
    ACTIONS(83), 1,
      anon_sym_sleep,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      sym_integer,
    ACTIONS(89), 1,
      sym_float,
    ACTIONS(93), 1,
      sym__string_start,
    STATE(193), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(121), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1272] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_word,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      anon_sym_LT,
    ACTIONS(202), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      aux_sym_seq_repeat1,
    ACTIONS(191), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(98), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1308] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    ACTIONS(212), 1,
      anon_sym_key,
    ACTIONS(214), 1,
      anon_sym_sleep,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      sym_integer,
    ACTIONS(222), 1,
      sym_float,
    ACTIONS(224), 1,
      sym__string_start,
    STATE(114), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1348] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      sym_start_anchor,
    ACTIONS(175), 1,
      sym_word,
    STATE(191), 1,
      sym__optional_anchor,
    STATE(176), 2,
      sym__optional_seq,
      sym_seq,
    STATE(16), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1386] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_key,
    ACTIONS(214), 1,
      anon_sym_sleep,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym__string_start,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      sym_integer,
    ACTIONS(232), 1,
      sym_float,
    STATE(110), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1426] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_key,
    ACTIONS(214), 1,
      anon_sym_sleep,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym__string_start,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      sym_integer,
    ACTIONS(240), 1,
      sym_float,
    STATE(116), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1466] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      anon_sym_LT,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_word,
    STATE(30), 1,
      aux_sym_seq_repeat1,
    ACTIONS(242), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(98), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1502] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_start_anchor,
    ACTIONS(157), 1,
      sym_word,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      anon_sym_LT,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(195), 1,
      sym__optional_anchor,
    STATE(173), 2,
      sym__optional_seq,
      sym_seq,
    STATE(18), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1540] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_word,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      anon_sym_LT,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      aux_sym_seq_repeat1,
    ACTIONS(191), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(82), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1576] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_start_anchor,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_word,
    STATE(192), 1,
      sym__optional_anchor,
    STATE(184), 2,
      sym__optional_seq,
      sym_seq,
    STATE(23), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1614] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_word,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      anon_sym_LT,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      aux_sym_seq_repeat1,
    ACTIONS(191), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(83), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1650] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_word,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      aux_sym_seq_repeat1,
    ACTIONS(242), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(83), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1686] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      sym_word,
    STATE(37), 1,
      aux_sym_seq_repeat1,
    ACTIONS(242), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(82), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1722] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_key,
    ACTIONS(214), 1,
      anon_sym_sleep,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym__string_start,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    ACTIONS(278), 1,
      sym_integer,
    ACTIONS(280), 1,
      sym_float,
    STATE(137), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1759] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_key,
    ACTIONS(214), 1,
      anon_sym_sleep,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym__string_start,
    ACTIONS(278), 1,
      sym_integer,
    ACTIONS(280), 1,
      sym_float,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(137), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1796] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_key,
    ACTIONS(214), 1,
      anon_sym_sleep,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym__string_start,
    ACTIONS(278), 1,
      sym_integer,
    ACTIONS(280), 1,
      sym_float,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(137), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1833] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_key,
    ACTIONS(214), 1,
      anon_sym_sleep,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym__string_start,
    ACTIONS(278), 1,
      sym_integer,
    ACTIONS(280), 1,
      sym_float,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(137), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1870] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_key,
    ACTIONS(214), 1,
      anon_sym_sleep,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym__string_start,
    ACTIONS(278), 1,
      sym_integer,
    ACTIONS(280), 1,
      sym_float,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    STATE(137), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1907] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_key,
    ACTIONS(214), 1,
      anon_sym_sleep,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym__string_start,
    ACTIONS(278), 1,
      sym_integer,
    ACTIONS(280), 1,
      sym_float,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    STATE(137), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1944] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_key,
    ACTIONS(214), 1,
      anon_sym_sleep,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym__string_start,
    ACTIONS(292), 1,
      sym_integer,
    ACTIONS(294), 1,
      sym_float,
    STATE(151), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1978] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_key,
    ACTIONS(83), 1,
      anon_sym_sleep,
    ACTIONS(93), 1,
      sym__string_start,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(298), 1,
      sym_integer,
    ACTIONS(300), 1,
      sym_float,
    STATE(130), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2012] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_key,
    ACTIONS(214), 1,
      anon_sym_sleep,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym__string_start,
    ACTIONS(302), 1,
      sym_integer,
    ACTIONS(304), 1,
      sym_float,
    STATE(143), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2046] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_key,
    ACTIONS(214), 1,
      anon_sym_sleep,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym__string_start,
    ACTIONS(306), 1,
      sym_integer,
    ACTIONS(308), 1,
      sym_float,
    STATE(145), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2080] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_key,
    ACTIONS(214), 1,
      anon_sym_sleep,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym__string_start,
    ACTIONS(310), 1,
      sym_integer,
    ACTIONS(312), 1,
      sym_float,
    STATE(152), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2114] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_key,
    ACTIONS(69), 1,
      anon_sym_sleep,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(75), 1,
      sym__string_start,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      sym_integer,
    ACTIONS(318), 1,
      sym_float,
    STATE(161), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2148] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_key,
    ACTIONS(69), 1,
      anon_sym_sleep,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(75), 1,
      sym__string_start,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      sym_integer,
    ACTIONS(322), 1,
      sym_float,
    STATE(160), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2182] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(66), 1,
      sym_match,
    STATE(200), 1,
      sym_match_key,
    STATE(230), 1,
      sym__prioritized_key,
    ACTIONS(11), 10,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
  [2210] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_key,
    ACTIONS(83), 1,
      anon_sym_sleep,
    ACTIONS(93), 1,
      sym__string_start,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(324), 1,
      sym_integer,
    ACTIONS(326), 1,
      sym_float,
    STATE(128), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2244] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_key,
    ACTIONS(214), 1,
      anon_sym_sleep,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym__string_start,
    ACTIONS(278), 1,
      sym_integer,
    ACTIONS(280), 1,
      sym_float,
    STATE(137), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2278] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_key,
    ACTIONS(69), 1,
      anon_sym_sleep,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(75), 1,
      sym__string_start,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 1,
      sym_integer,
    ACTIONS(330), 1,
      sym_float,
    STATE(159), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2312] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_key,
    ACTIONS(214), 1,
      anon_sym_sleep,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym__string_start,
    ACTIONS(332), 1,
      sym_integer,
    ACTIONS(334), 1,
      sym_float,
    STATE(153), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2346] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_key,
    ACTIONS(83), 1,
      anon_sym_sleep,
    ACTIONS(93), 1,
      sym__string_start,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(336), 1,
      sym_integer,
    ACTIONS(338), 1,
      sym_float,
    STATE(129), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2380] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      sym_word,
    STATE(182), 2,
      sym__optional_seq,
      sym_seq,
    STATE(16), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2412] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_word,
    STATE(186), 2,
      sym__optional_seq,
      sym_seq,
    STATE(23), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2444] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 1,
      anon_sym_key,
    ACTIONS(214), 1,
      anon_sym_sleep,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym__string_start,
    ACTIONS(340), 1,
      sym_integer,
    ACTIONS(342), 1,
      sym_float,
    STATE(144), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_DASH,
    ACTIONS(346), 1,
      anon_sym_and,
    ACTIONS(348), 12,
      anon_sym_not,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      sym_identifier,
  [2502] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_key,
    ACTIONS(83), 1,
      anon_sym_sleep,
    ACTIONS(93), 1,
      sym__string_start,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(350), 1,
      sym_integer,
    ACTIONS(352), 1,
      sym_float,
    STATE(125), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_DASH,
    ACTIONS(356), 13,
      anon_sym_and,
      anon_sym_not,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      sym_identifier,
  [2558] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_word,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      anon_sym_LT,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(175), 2,
      sym__optional_seq,
      sym_seq,
    STATE(18), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_DASH,
    ACTIONS(360), 13,
      anon_sym_and,
      anon_sym_not,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      sym_identifier,
  [2612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_DASH,
    ACTIONS(364), 12,
      anon_sym_not,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      sym_identifier,
  [2633] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    ACTIONS(370), 1,
      sym__string_content,
    ACTIONS(372), 1,
      sym__string_end,
    STATE(74), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(368), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2659] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    ACTIONS(376), 1,
      sym__string_content,
    ACTIONS(378), 1,
      sym__string_end,
    STATE(70), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(374), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2685] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    ACTIONS(370), 1,
      sym__string_content,
    ACTIONS(380), 1,
      sym__string_end,
    STATE(74), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(368), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2711] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    ACTIONS(384), 1,
      sym__string_content,
    ACTIONS(386), 1,
      sym__string_end,
    STATE(72), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(382), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2737] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LBRACE,
    ACTIONS(394), 1,
      sym__string_content,
    ACTIONS(397), 1,
      sym__string_end,
    STATE(74), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(391), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2763] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    ACTIONS(370), 1,
      sym__string_content,
    ACTIONS(399), 1,
      sym__string_end,
    STATE(74), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(368), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2789] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    ACTIONS(403), 1,
      sym__string_content,
    ACTIONS(405), 1,
      sym__string_end,
    STATE(75), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(401), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2815] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      anon_sym_EQ,
    STATE(135), 1,
      sym_argument_list,
    ACTIONS(407), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 10,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [2854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    STATE(135), 1,
      sym_argument_list,
    ACTIONS(407), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 10,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [2890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 10,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [2906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_STAR,
    ACTIONS(183), 1,
      anon_sym_PLUS,
    ACTIONS(419), 8,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [2926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_PLUS,
    ACTIONS(419), 8,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [2946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 10,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [2962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 10,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [2978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 10,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [2994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 10,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 10,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 10,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 10,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 10,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 10,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 10,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 10,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      sym_argument_list,
    ACTIONS(407), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 10,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 10,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(171), 1,
      anon_sym_PLUS,
    ACTIONS(419), 8,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 10,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 10,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_word,
    ACTIONS(429), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_word,
    ACTIONS(433), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_word,
    ACTIONS(437), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_word,
    ACTIONS(441), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_word,
    ACTIONS(445), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym_argument_list,
    ACTIONS(407), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_word,
    ACTIONS(451), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_word,
    ACTIONS(455), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym_word,
    ACTIONS(459), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3381] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    ACTIONS(469), 1,
      anon_sym_or,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(463), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym_word,
    ACTIONS(473), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_word,
    ACTIONS(477), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_word,
    ACTIONS(481), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3457] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_or,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(463), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_word,
    ACTIONS(489), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3499] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_or,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(463), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3580] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_or,
    ACTIONS(505), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(509), 2,
      sym__newline,
      anon_sym_SEMI,
    ACTIONS(507), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3642] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_or,
    ACTIONS(505), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(517), 2,
      sym__newline,
      anon_sym_SEMI,
    ACTIONS(507), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 4,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(439), 4,
      anon_sym_key,
      anon_sym_sleep,
      sym_identifier,
      sym_integer,
  [3692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 5,
      sym__newline,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_or,
  [3708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(507), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 3,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_or,
  [3740] = 3,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(525), 2,
      sym__string_content,
      sym__string_end,
    ACTIONS(523), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3826] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_or,
    ACTIONS(463), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(533), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 4,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(479), 4,
      anon_sym_key,
      anon_sym_sleep,
      sym_identifier,
      sym_integer,
  [3918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 5,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [3934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [3966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 4,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(457), 4,
      anon_sym_key,
      anon_sym_sleep,
      sym_identifier,
      sym_integer,
  [4024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4037] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_or,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    ACTIONS(463), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4056] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_or,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
    ACTIONS(463), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4075] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_or,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    ACTIONS(463), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 2,
      anon_sym_RBRACE,
      anon_sym_or,
    ACTIONS(541), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(543), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_or,
  [4204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4256] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
    ACTIONS(547), 1,
      anon_sym_or,
    ACTIONS(541), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(543), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym__newline,
    ACTIONS(549), 1,
      anon_sym_SEMI,
    STATE(180), 1,
      aux_sym__simple_statements_repeat1,
  [4288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_argument_list_repeat1,
  [4301] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_PIPE,
    ACTIONS(556), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      aux_sym_choice_repeat1,
  [4314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_PIPE,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
    STATE(185), 1,
      aux_sym_choice_repeat1,
  [4327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_argument_list_repeat1,
  [4340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    ACTIONS(564), 1,
      anon_sym_PIPE,
    STATE(177), 1,
      aux_sym_choice_repeat1,
  [4353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym_end_anchor,
    ACTIONS(566), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_COLON,
    ACTIONS(572), 1,
      anon_sym_PIPE,
    STATE(189), 1,
      aux_sym_choice_repeat1,
  [4377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_end_anchor,
    ACTIONS(574), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      sym_end_anchor,
    ACTIONS(566), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      aux_sym_choice_repeat1,
  [4412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_SEMI,
    ACTIONS(582), 1,
      sym__newline,
    STATE(190), 1,
      aux_sym__simple_statements_repeat1,
  [4425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_SEMI,
    ACTIONS(586), 1,
      sym__newline,
    STATE(167), 1,
      aux_sym__simple_statements_repeat1,
  [4438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    ACTIONS(591), 1,
      sym__newline,
    STATE(180), 1,
      aux_sym__simple_statements_repeat1,
  [4451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COLON,
    ACTIONS(572), 1,
      anon_sym_PIPE,
    STATE(174), 1,
      aux_sym_choice_repeat1,
  [4464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym_end_anchor,
    ACTIONS(574), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_argument_list_repeat1,
  [4488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym_end_anchor,
    ACTIONS(566), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      aux_sym_choice_repeat1,
  [4512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym_end_anchor,
    ACTIONS(574), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(601), 1,
      anon_sym_PIPE,
    STATE(187), 1,
      aux_sym_choice_repeat1,
  [4536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_argument_list_repeat1,
  [4549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_COLON,
    ACTIONS(607), 1,
      anon_sym_PIPE,
    STATE(189), 1,
      aux_sym_choice_repeat1,
  [4562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym__newline,
    ACTIONS(610), 1,
      anon_sym_SEMI,
    STATE(180), 1,
      aux_sym__simple_statements_repeat1,
  [4575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 2,
      sym__newline,
      anon_sym_SEMI,
  [4599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4647] = 3,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym_implicit_string,
    STATE(238), 1,
      sym_match_pattern,
  [4657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4665] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(616), 1,
      sym_implicit_string,
  [4672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_COLON,
  [4679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_GT,
  [4686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
  [4693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_GT,
  [4700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_RBRACK,
  [4707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
  [4714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_RBRACE,
  [4721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_LPAREN,
  [4728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_LPAREN,
  [4735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym__newline,
  [4742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym_identifier,
  [4749] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym_implicit_string,
  [4756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_RBRACK,
  [4763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
  [4770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
  [4777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
  [4784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
  [4791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__newline,
  [4798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
  [4805] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(654), 1,
      aux_sym_key_action_token1,
  [4812] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(656), 1,
      aux_sym_key_action_token1,
  [4819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_COLON,
  [4826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_RBRACE,
  [4833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_GT,
  [4840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_RBRACK,
  [4847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
  [4854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym__newline,
  [4861] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym_implicit_string,
  [4868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym__newline,
  [4875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
  [4882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
  [4889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
  [4896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
  [4903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
  [4910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_DASH,
  [4917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym__newline,
  [4924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      ts_builtin_sym_end,
  [4931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym_identifier,
  [4938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym_identifier,
  [4945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_COLON,
  [4952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym_identifier,
  [4959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_identifier,
  [4966] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(696), 1,
      aux_sym_key_action_token1,
  [4973] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(698), 1,
      aux_sym_key_action_token1,
  [4980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym_identifier,
  [4987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_identifier,
  [4994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_COLON,
  [5001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_COLON,
  [5008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_COLON2,
  [5015] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(710), 1,
      aux_sym_key_action_token1,
  [5022] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(712), 1,
      aux_sym_key_action_token1,
  [5029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
  [5036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_LPAREN,
  [5043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_LPAREN,
  [5050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 240,
  [SMALL_STATE(7)] = 284,
  [SMALL_STATE(8)] = 333,
  [SMALL_STATE(9)] = 374,
  [SMALL_STATE(10)] = 425,
  [SMALL_STATE(11)] = 466,
  [SMALL_STATE(12)] = 507,
  [SMALL_STATE(13)] = 558,
  [SMALL_STATE(14)] = 604,
  [SMALL_STATE(15)] = 650,
  [SMALL_STATE(16)] = 687,
  [SMALL_STATE(17)] = 729,
  [SMALL_STATE(18)] = 771,
  [SMALL_STATE(19)] = 813,
  [SMALL_STATE(20)] = 855,
  [SMALL_STATE(21)] = 897,
  [SMALL_STATE(22)] = 939,
  [SMALL_STATE(23)] = 981,
  [SMALL_STATE(24)] = 1023,
  [SMALL_STATE(25)] = 1065,
  [SMALL_STATE(26)] = 1107,
  [SMALL_STATE(27)] = 1149,
  [SMALL_STATE(28)] = 1191,
  [SMALL_STATE(29)] = 1233,
  [SMALL_STATE(30)] = 1272,
  [SMALL_STATE(31)] = 1308,
  [SMALL_STATE(32)] = 1348,
  [SMALL_STATE(33)] = 1386,
  [SMALL_STATE(34)] = 1426,
  [SMALL_STATE(35)] = 1466,
  [SMALL_STATE(36)] = 1502,
  [SMALL_STATE(37)] = 1540,
  [SMALL_STATE(38)] = 1576,
  [SMALL_STATE(39)] = 1614,
  [SMALL_STATE(40)] = 1650,
  [SMALL_STATE(41)] = 1686,
  [SMALL_STATE(42)] = 1722,
  [SMALL_STATE(43)] = 1759,
  [SMALL_STATE(44)] = 1796,
  [SMALL_STATE(45)] = 1833,
  [SMALL_STATE(46)] = 1870,
  [SMALL_STATE(47)] = 1907,
  [SMALL_STATE(48)] = 1944,
  [SMALL_STATE(49)] = 1978,
  [SMALL_STATE(50)] = 2012,
  [SMALL_STATE(51)] = 2046,
  [SMALL_STATE(52)] = 2080,
  [SMALL_STATE(53)] = 2114,
  [SMALL_STATE(54)] = 2148,
  [SMALL_STATE(55)] = 2182,
  [SMALL_STATE(56)] = 2210,
  [SMALL_STATE(57)] = 2244,
  [SMALL_STATE(58)] = 2278,
  [SMALL_STATE(59)] = 2312,
  [SMALL_STATE(60)] = 2346,
  [SMALL_STATE(61)] = 2380,
  [SMALL_STATE(62)] = 2412,
  [SMALL_STATE(63)] = 2444,
  [SMALL_STATE(64)] = 2478,
  [SMALL_STATE(65)] = 2502,
  [SMALL_STATE(66)] = 2536,
  [SMALL_STATE(67)] = 2558,
  [SMALL_STATE(68)] = 2590,
  [SMALL_STATE(69)] = 2612,
  [SMALL_STATE(70)] = 2633,
  [SMALL_STATE(71)] = 2659,
  [SMALL_STATE(72)] = 2685,
  [SMALL_STATE(73)] = 2711,
  [SMALL_STATE(74)] = 2737,
  [SMALL_STATE(75)] = 2763,
  [SMALL_STATE(76)] = 2789,
  [SMALL_STATE(77)] = 2815,
  [SMALL_STATE(78)] = 2838,
  [SMALL_STATE(79)] = 2854,
  [SMALL_STATE(80)] = 2874,
  [SMALL_STATE(81)] = 2890,
  [SMALL_STATE(82)] = 2906,
  [SMALL_STATE(83)] = 2926,
  [SMALL_STATE(84)] = 2946,
  [SMALL_STATE(85)] = 2962,
  [SMALL_STATE(86)] = 2978,
  [SMALL_STATE(87)] = 2994,
  [SMALL_STATE(88)] = 3010,
  [SMALL_STATE(89)] = 3026,
  [SMALL_STATE(90)] = 3042,
  [SMALL_STATE(91)] = 3058,
  [SMALL_STATE(92)] = 3074,
  [SMALL_STATE(93)] = 3090,
  [SMALL_STATE(94)] = 3106,
  [SMALL_STATE(95)] = 3122,
  [SMALL_STATE(96)] = 3142,
  [SMALL_STATE(97)] = 3158,
  [SMALL_STATE(98)] = 3174,
  [SMALL_STATE(99)] = 3194,
  [SMALL_STATE(100)] = 3210,
  [SMALL_STATE(101)] = 3226,
  [SMALL_STATE(102)] = 3243,
  [SMALL_STATE(103)] = 3260,
  [SMALL_STATE(104)] = 3277,
  [SMALL_STATE(105)] = 3294,
  [SMALL_STATE(106)] = 3311,
  [SMALL_STATE(107)] = 3330,
  [SMALL_STATE(108)] = 3347,
  [SMALL_STATE(109)] = 3364,
  [SMALL_STATE(110)] = 3381,
  [SMALL_STATE(111)] = 3406,
  [SMALL_STATE(112)] = 3423,
  [SMALL_STATE(113)] = 3440,
  [SMALL_STATE(114)] = 3457,
  [SMALL_STATE(115)] = 3482,
  [SMALL_STATE(116)] = 3499,
  [SMALL_STATE(117)] = 3524,
  [SMALL_STATE(118)] = 3538,
  [SMALL_STATE(119)] = 3552,
  [SMALL_STATE(120)] = 3566,
  [SMALL_STATE(121)] = 3580,
  [SMALL_STATE(122)] = 3600,
  [SMALL_STATE(123)] = 3614,
  [SMALL_STATE(124)] = 3628,
  [SMALL_STATE(125)] = 3642,
  [SMALL_STATE(126)] = 3662,
  [SMALL_STATE(127)] = 3676,
  [SMALL_STATE(128)] = 3692,
  [SMALL_STATE(129)] = 3708,
  [SMALL_STATE(130)] = 3722,
  [SMALL_STATE(131)] = 3740,
  [SMALL_STATE(132)] = 3756,
  [SMALL_STATE(133)] = 3770,
  [SMALL_STATE(134)] = 3784,
  [SMALL_STATE(135)] = 3798,
  [SMALL_STATE(136)] = 3812,
  [SMALL_STATE(137)] = 3826,
  [SMALL_STATE(138)] = 3846,
  [SMALL_STATE(139)] = 3860,
  [SMALL_STATE(140)] = 3874,
  [SMALL_STATE(141)] = 3888,
  [SMALL_STATE(142)] = 3902,
  [SMALL_STATE(143)] = 3918,
  [SMALL_STATE(144)] = 3934,
  [SMALL_STATE(145)] = 3948,
  [SMALL_STATE(146)] = 3966,
  [SMALL_STATE(147)] = 3980,
  [SMALL_STATE(148)] = 3994,
  [SMALL_STATE(149)] = 4008,
  [SMALL_STATE(150)] = 4024,
  [SMALL_STATE(151)] = 4037,
  [SMALL_STATE(152)] = 4056,
  [SMALL_STATE(153)] = 4075,
  [SMALL_STATE(154)] = 4094,
  [SMALL_STATE(155)] = 4107,
  [SMALL_STATE(156)] = 4120,
  [SMALL_STATE(157)] = 4133,
  [SMALL_STATE(158)] = 4146,
  [SMALL_STATE(159)] = 4159,
  [SMALL_STATE(160)] = 4176,
  [SMALL_STATE(161)] = 4189,
  [SMALL_STATE(162)] = 4204,
  [SMALL_STATE(163)] = 4217,
  [SMALL_STATE(164)] = 4230,
  [SMALL_STATE(165)] = 4243,
  [SMALL_STATE(166)] = 4256,
  [SMALL_STATE(167)] = 4275,
  [SMALL_STATE(168)] = 4288,
  [SMALL_STATE(169)] = 4301,
  [SMALL_STATE(170)] = 4314,
  [SMALL_STATE(171)] = 4327,
  [SMALL_STATE(172)] = 4340,
  [SMALL_STATE(173)] = 4353,
  [SMALL_STATE(174)] = 4364,
  [SMALL_STATE(175)] = 4377,
  [SMALL_STATE(176)] = 4388,
  [SMALL_STATE(177)] = 4399,
  [SMALL_STATE(178)] = 4412,
  [SMALL_STATE(179)] = 4425,
  [SMALL_STATE(180)] = 4438,
  [SMALL_STATE(181)] = 4451,
  [SMALL_STATE(182)] = 4464,
  [SMALL_STATE(183)] = 4475,
  [SMALL_STATE(184)] = 4488,
  [SMALL_STATE(185)] = 4499,
  [SMALL_STATE(186)] = 4512,
  [SMALL_STATE(187)] = 4523,
  [SMALL_STATE(188)] = 4536,
  [SMALL_STATE(189)] = 4549,
  [SMALL_STATE(190)] = 4562,
  [SMALL_STATE(191)] = 4575,
  [SMALL_STATE(192)] = 4583,
  [SMALL_STATE(193)] = 4591,
  [SMALL_STATE(194)] = 4599,
  [SMALL_STATE(195)] = 4607,
  [SMALL_STATE(196)] = 4615,
  [SMALL_STATE(197)] = 4623,
  [SMALL_STATE(198)] = 4631,
  [SMALL_STATE(199)] = 4639,
  [SMALL_STATE(200)] = 4647,
  [SMALL_STATE(201)] = 4657,
  [SMALL_STATE(202)] = 4665,
  [SMALL_STATE(203)] = 4672,
  [SMALL_STATE(204)] = 4679,
  [SMALL_STATE(205)] = 4686,
  [SMALL_STATE(206)] = 4693,
  [SMALL_STATE(207)] = 4700,
  [SMALL_STATE(208)] = 4707,
  [SMALL_STATE(209)] = 4714,
  [SMALL_STATE(210)] = 4721,
  [SMALL_STATE(211)] = 4728,
  [SMALL_STATE(212)] = 4735,
  [SMALL_STATE(213)] = 4742,
  [SMALL_STATE(214)] = 4749,
  [SMALL_STATE(215)] = 4756,
  [SMALL_STATE(216)] = 4763,
  [SMALL_STATE(217)] = 4770,
  [SMALL_STATE(218)] = 4777,
  [SMALL_STATE(219)] = 4784,
  [SMALL_STATE(220)] = 4791,
  [SMALL_STATE(221)] = 4798,
  [SMALL_STATE(222)] = 4805,
  [SMALL_STATE(223)] = 4812,
  [SMALL_STATE(224)] = 4819,
  [SMALL_STATE(225)] = 4826,
  [SMALL_STATE(226)] = 4833,
  [SMALL_STATE(227)] = 4840,
  [SMALL_STATE(228)] = 4847,
  [SMALL_STATE(229)] = 4854,
  [SMALL_STATE(230)] = 4861,
  [SMALL_STATE(231)] = 4868,
  [SMALL_STATE(232)] = 4875,
  [SMALL_STATE(233)] = 4882,
  [SMALL_STATE(234)] = 4889,
  [SMALL_STATE(235)] = 4896,
  [SMALL_STATE(236)] = 4903,
  [SMALL_STATE(237)] = 4910,
  [SMALL_STATE(238)] = 4917,
  [SMALL_STATE(239)] = 4924,
  [SMALL_STATE(240)] = 4931,
  [SMALL_STATE(241)] = 4938,
  [SMALL_STATE(242)] = 4945,
  [SMALL_STATE(243)] = 4952,
  [SMALL_STATE(244)] = 4959,
  [SMALL_STATE(245)] = 4966,
  [SMALL_STATE(246)] = 4973,
  [SMALL_STATE(247)] = 4980,
  [SMALL_STATE(248)] = 4987,
  [SMALL_STATE(249)] = 4994,
  [SMALL_STATE(250)] = 5001,
  [SMALL_STATE(251)] = 5008,
  [SMALL_STATE(252)] = 5015,
  [SMALL_STATE(253)] = 5022,
  [SMALL_STATE(254)] = 5029,
  [SMALL_STATE(255)] = 5036,
  [SMALL_STATE(256)] = 5043,
  [SMALL_STATE(257)] = 5050,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(250),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(249),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(244),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(243),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__not_interpolation, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_interpolation, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_or, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(55),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(251),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(242),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(48),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(211),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(210),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(77),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(121),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(121),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(76),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_seq, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(98),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(247),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(248),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(20),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(24),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 2),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(82),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(244),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(243),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(21),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(17),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(83),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(240),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(241),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(28),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(19),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_and, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__optional_and, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(6),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(74),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(74),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_rule, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat1, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statements, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statements, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__suite, 1, .production_id = 4),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__suite, 1, .production_id = 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__suite, 2),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__suite, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statements, 4),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statements, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_tag, 4),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_tag, 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statements, 3),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statements, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 6),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, .production_id = 5),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 7),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_action, 4),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep_action, 4),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(32),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_choice, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__simple_statements_repeat1, 2), SHIFT_REPEAT(29),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__simple_statements_repeat1, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(36),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(57),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(38),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 3),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_key, 2, .production_id = 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prioritized_key, 2, .production_id = 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_key, 1, .production_id = 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_pattern, 1, .production_id = 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [684] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_talon_external_scanner_create(void);
void tree_sitter_talon_external_scanner_destroy(void *);
bool tree_sitter_talon_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_talon_external_scanner_serialize(void *, char *);
void tree_sitter_talon_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_talon(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_talon_external_scanner_create,
      tree_sitter_talon_external_scanner_destroy,
      tree_sitter_talon_external_scanner_scan,
      tree_sitter_talon_external_scanner_serialize,
      tree_sitter_talon_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
