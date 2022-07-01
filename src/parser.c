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
#define STATE_COUNT 259
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 112
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 13
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

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
  sym__generic_match = 69,
  sym__prioritized_match = 70,
  sym_include_tag = 71,
  sym_settings = 72,
  sym_command = 73,
  sym__suite = 74,
  sym_block = 75,
  sym_rule = 76,
  sym__optional_choice = 77,
  sym_choice = 78,
  sym__optional_anchor = 79,
  sym__optional_seq = 80,
  sym_seq = 81,
  sym__primary_rule = 82,
  sym_list = 83,
  sym_capture = 84,
  sym_optional = 85,
  sym_repeat = 86,
  sym_repeat1 = 87,
  sym_parenthesized_rule = 88,
  sym__simple_statements = 89,
  sym__simple_statement = 90,
  sym_assignment = 91,
  sym_expression = 92,
  sym__expression = 93,
  sym_parenthesized_expression = 94,
  sym_binary_operator = 95,
  sym_key_action = 96,
  sym_sleep_action = 97,
  sym_action = 98,
  sym_argument_list = 99,
  sym_string = 100,
  sym_interpolation = 101,
  sym__escape_interpolation = 102,
  sym__not_interpolation = 103,
  aux_sym_source_file_repeat1 = 104,
  aux_sym_or_repeat1 = 105,
  aux_sym_block_repeat1 = 106,
  aux_sym_choice_repeat1 = 107,
  aux_sym_seq_repeat1 = 108,
  aux_sym__simple_statements_repeat1 = 109,
  aux_sym_argument_list_repeat1 = 110,
  aux_sym_string_repeat1 = 111,
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
  [sym__generic_match] = "_generic_match",
  [sym__prioritized_match] = "_prioritized_match",
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
  [sym__generic_match] = sym__generic_match,
  [sym__prioritized_match] = sym__prioritized_match,
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
  [sym__generic_match] = {
    .visible = false,
    .named = true,
  },
  [sym__prioritized_match] = {
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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0, .inherited = true},
    {field_pattern, 0, .inherited = true},
  [2] =
    {field_key, 0},
    {field_pattern, 2},
  [4] =
    {field_action, 0},
    {field_arguments, 1},
  [6] =
    {field_left, 0},
    {field_right, 2},
  [8] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
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
  [8] = {.lex_state = 21, .external_lex_state = 5},
  [9] = {.lex_state = 23, .external_lex_state = 2},
  [10] = {.lex_state = 23, .external_lex_state = 2},
  [11] = {.lex_state = 23, .external_lex_state = 2},
  [12] = {.lex_state = 21, .external_lex_state = 5},
  [13] = {.lex_state = 21, .external_lex_state = 4},
  [14] = {.lex_state = 21, .external_lex_state = 4},
  [15] = {.lex_state = 23, .external_lex_state = 2},
  [16] = {.lex_state = 19, .external_lex_state = 2},
  [17] = {.lex_state = 19, .external_lex_state = 2},
  [18] = {.lex_state = 21, .external_lex_state = 6},
  [19] = {.lex_state = 19, .external_lex_state = 2},
  [20] = {.lex_state = 19, .external_lex_state = 2},
  [21] = {.lex_state = 19, .external_lex_state = 2},
  [22] = {.lex_state = 21, .external_lex_state = 6},
  [23] = {.lex_state = 19, .external_lex_state = 7},
  [24] = {.lex_state = 19, .external_lex_state = 2},
  [25] = {.lex_state = 21, .external_lex_state = 6},
  [26] = {.lex_state = 21, .external_lex_state = 6},
  [27] = {.lex_state = 19, .external_lex_state = 8},
  [28] = {.lex_state = 19, .external_lex_state = 2},
  [29] = {.lex_state = 21, .external_lex_state = 9},
  [30] = {.lex_state = 19, .external_lex_state = 2},
  [31] = {.lex_state = 21, .external_lex_state = 10},
  [32] = {.lex_state = 21, .external_lex_state = 10},
  [33] = {.lex_state = 19, .external_lex_state = 2},
  [34] = {.lex_state = 19, .external_lex_state = 8},
  [35] = {.lex_state = 19, .external_lex_state = 7},
  [36] = {.lex_state = 19, .external_lex_state = 7},
  [37] = {.lex_state = 21, .external_lex_state = 10},
  [38] = {.lex_state = 19, .external_lex_state = 8},
  [39] = {.lex_state = 19, .external_lex_state = 2},
  [40] = {.lex_state = 19, .external_lex_state = 2},
  [41] = {.lex_state = 19, .external_lex_state = 2},
  [42] = {.lex_state = 21, .external_lex_state = 10},
  [43] = {.lex_state = 21, .external_lex_state = 10},
  [44] = {.lex_state = 21, .external_lex_state = 10},
  [45] = {.lex_state = 21, .external_lex_state = 10},
  [46] = {.lex_state = 21, .external_lex_state = 10},
  [47] = {.lex_state = 21, .external_lex_state = 10},
  [48] = {.lex_state = 21, .external_lex_state = 9},
  [49] = {.lex_state = 21, .external_lex_state = 9},
  [50] = {.lex_state = 25, .external_lex_state = 2},
  [51] = {.lex_state = 21, .external_lex_state = 9},
  [52] = {.lex_state = 19, .external_lex_state = 2},
  [53] = {.lex_state = 21, .external_lex_state = 9},
  [54] = {.lex_state = 24, .external_lex_state = 2},
  [55] = {.lex_state = 21, .external_lex_state = 9},
  [56] = {.lex_state = 19, .external_lex_state = 2},
  [57] = {.lex_state = 21, .external_lex_state = 9},
  [58] = {.lex_state = 21, .external_lex_state = 9},
  [59] = {.lex_state = 24, .external_lex_state = 2},
  [60] = {.lex_state = 21, .external_lex_state = 9},
  [61] = {.lex_state = 24, .external_lex_state = 2},
  [62] = {.lex_state = 21, .external_lex_state = 9},
  [63] = {.lex_state = 21, .external_lex_state = 9},
  [64] = {.lex_state = 24, .external_lex_state = 2},
  [65] = {.lex_state = 21, .external_lex_state = 9},
  [66] = {.lex_state = 21, .external_lex_state = 9},
  [67] = {.lex_state = 21, .external_lex_state = 9},
  [68] = {.lex_state = 21, .external_lex_state = 9},
  [69] = {.lex_state = 19, .external_lex_state = 2},
  [70] = {.lex_state = 23, .external_lex_state = 2},
  [71] = {.lex_state = 22, .external_lex_state = 11},
  [72] = {.lex_state = 22, .external_lex_state = 11},
  [73] = {.lex_state = 22, .external_lex_state = 11},
  [74] = {.lex_state = 22, .external_lex_state = 11},
  [75] = {.lex_state = 22, .external_lex_state = 11},
  [76] = {.lex_state = 22, .external_lex_state = 11},
  [77] = {.lex_state = 22, .external_lex_state = 11},
  [78] = {.lex_state = 0, .external_lex_state = 12},
  [79] = {.lex_state = 19, .external_lex_state = 2},
  [80] = {.lex_state = 19, .external_lex_state = 8},
  [81] = {.lex_state = 19, .external_lex_state = 2},
  [82] = {.lex_state = 19, .external_lex_state = 8},
  [83] = {.lex_state = 19, .external_lex_state = 8},
  [84] = {.lex_state = 0, .external_lex_state = 8},
  [85] = {.lex_state = 19, .external_lex_state = 2},
  [86] = {.lex_state = 19, .external_lex_state = 7},
  [87] = {.lex_state = 0, .external_lex_state = 12},
  [88] = {.lex_state = 19, .external_lex_state = 8},
  [89] = {.lex_state = 19, .external_lex_state = 7},
  [90] = {.lex_state = 19, .external_lex_state = 7},
  [91] = {.lex_state = 19, .external_lex_state = 2},
  [92] = {.lex_state = 19, .external_lex_state = 8},
  [93] = {.lex_state = 19, .external_lex_state = 7},
  [94] = {.lex_state = 19, .external_lex_state = 2},
  [95] = {.lex_state = 19, .external_lex_state = 2},
  [96] = {.lex_state = 19, .external_lex_state = 7},
  [97] = {.lex_state = 19, .external_lex_state = 7},
  [98] = {.lex_state = 19, .external_lex_state = 8},
  [99] = {.lex_state = 19, .external_lex_state = 7},
  [100] = {.lex_state = 19, .external_lex_state = 8},
  [101] = {.lex_state = 19, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 8},
  [103] = {.lex_state = 115, .external_lex_state = 2},
  [104] = {.lex_state = 115, .external_lex_state = 2},
  [105] = {.lex_state = 115, .external_lex_state = 2},
  [106] = {.lex_state = 115, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 8},
  [108] = {.lex_state = 20, .external_lex_state = 13},
  [109] = {.lex_state = 115, .external_lex_state = 2},
  [110] = {.lex_state = 115, .external_lex_state = 2},
  [111] = {.lex_state = 115, .external_lex_state = 2},
  [112] = {.lex_state = 115, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 8},
  [114] = {.lex_state = 115, .external_lex_state = 2},
  [115] = {.lex_state = 115, .external_lex_state = 2},
  [116] = {.lex_state = 115, .external_lex_state = 2},
  [117] = {.lex_state = 115, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 12},
  [119] = {.lex_state = 0, .external_lex_state = 8},
  [120] = {.lex_state = 22, .external_lex_state = 11},
  [121] = {.lex_state = 0, .external_lex_state = 12},
  [122] = {.lex_state = 0, .external_lex_state = 12},
  [123] = {.lex_state = 0, .external_lex_state = 12},
  [124] = {.lex_state = 0, .external_lex_state = 8},
  [125] = {.lex_state = 0, .external_lex_state = 12},
  [126] = {.lex_state = 0, .external_lex_state = 8},
  [127] = {.lex_state = 21, .external_lex_state = 4},
  [128] = {.lex_state = 0, .external_lex_state = 12},
  [129] = {.lex_state = 0, .external_lex_state = 8},
  [130] = {.lex_state = 0, .external_lex_state = 8},
  [131] = {.lex_state = 0, .external_lex_state = 8},
  [132] = {.lex_state = 0, .external_lex_state = 12},
  [133] = {.lex_state = 0, .external_lex_state = 8},
  [134] = {.lex_state = 0, .external_lex_state = 12},
  [135] = {.lex_state = 0, .external_lex_state = 12},
  [136] = {.lex_state = 0, .external_lex_state = 8},
  [137] = {.lex_state = 0, .external_lex_state = 8},
  [138] = {.lex_state = 21, .external_lex_state = 4},
  [139] = {.lex_state = 0, .external_lex_state = 12},
  [140] = {.lex_state = 0, .external_lex_state = 8},
  [141] = {.lex_state = 0, .external_lex_state = 8},
  [142] = {.lex_state = 0, .external_lex_state = 12},
  [143] = {.lex_state = 0, .external_lex_state = 8},
  [144] = {.lex_state = 0, .external_lex_state = 12},
  [145] = {.lex_state = 0, .external_lex_state = 12},
  [146] = {.lex_state = 0, .external_lex_state = 12},
  [147] = {.lex_state = 0, .external_lex_state = 8},
  [148] = {.lex_state = 0, .external_lex_state = 8},
  [149] = {.lex_state = 21, .external_lex_state = 4},
  [150] = {.lex_state = 0, .external_lex_state = 12},
  [151] = {.lex_state = 20, .external_lex_state = 13},
  [152] = {.lex_state = 0, .external_lex_state = 8},
  [153] = {.lex_state = 20, .external_lex_state = 13},
  [154] = {.lex_state = 20, .external_lex_state = 13},
  [155] = {.lex_state = 0, .external_lex_state = 8},
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
  [167] = {.lex_state = 0, .external_lex_state = 8},
  [168] = {.lex_state = 0, .external_lex_state = 12},
  [169] = {.lex_state = 0, .external_lex_state = 7},
  [170] = {.lex_state = 0, .external_lex_state = 8},
  [171] = {.lex_state = 0, .external_lex_state = 8},
  [172] = {.lex_state = 0, .external_lex_state = 8},
  [173] = {.lex_state = 0, .external_lex_state = 8},
  [174] = {.lex_state = 0, .external_lex_state = 8},
  [175] = {.lex_state = 0, .external_lex_state = 8},
  [176] = {.lex_state = 0, .external_lex_state = 7},
  [177] = {.lex_state = 114, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 12},
  [179] = {.lex_state = 114, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 7},
  [181] = {.lex_state = 0, .external_lex_state = 7},
  [182] = {.lex_state = 0, .external_lex_state = 12},
  [183] = {.lex_state = 114, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 8},
  [185] = {.lex_state = 0, .external_lex_state = 12},
  [186] = {.lex_state = 0, .external_lex_state = 8},
  [187] = {.lex_state = 114, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 8},
  [189] = {.lex_state = 0, .external_lex_state = 12},
  [190] = {.lex_state = 0, .external_lex_state = 7},
  [191] = {.lex_state = 114, .external_lex_state = 2},
  [192] = {.lex_state = 114, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 7},
  [194] = {.lex_state = 0, .external_lex_state = 8},
  [195] = {.lex_state = 114, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 7},
  [197] = {.lex_state = 0, .external_lex_state = 8},
  [198] = {.lex_state = 0, .external_lex_state = 12},
  [199] = {.lex_state = 114, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 7},
  [201] = {.lex_state = 0, .external_lex_state = 8},
  [202] = {.lex_state = 0, .external_lex_state = 12},
  [203] = {.lex_state = 114, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 8},
  [205] = {.lex_state = 295, .external_lex_state = 2},
  [206] = {.lex_state = 114, .external_lex_state = 13},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 7},
  [209] = {.lex_state = 0, .external_lex_state = 8},
  [210] = {.lex_state = 0, .external_lex_state = 8},
  [211] = {.lex_state = 226, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 7},
  [213] = {.lex_state = 0, .external_lex_state = 8},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 114, .external_lex_state = 13},
  [216] = {.lex_state = 0, .external_lex_state = 12},
  [217] = {.lex_state = 0, .external_lex_state = 8},
  [218] = {.lex_state = 0, .external_lex_state = 8},
  [219] = {.lex_state = 0, .external_lex_state = 8},
  [220] = {.lex_state = 0, .external_lex_state = 12},
  [221] = {.lex_state = 26, .external_lex_state = 2},
  [222] = {.lex_state = 295, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 12},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 114, .external_lex_state = 13},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 7},
  [229] = {.lex_state = 0, .external_lex_state = 8},
  [230] = {.lex_state = 114, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 8},
  [232] = {.lex_state = 0, .external_lex_state = 12},
  [233] = {.lex_state = 0, .external_lex_state = 12},
  [234] = {.lex_state = 0, .external_lex_state = 8},
  [235] = {.lex_state = 0, .external_lex_state = 8},
  [236] = {.lex_state = 0, .external_lex_state = 8},
  [237] = {.lex_state = 0, .external_lex_state = 12},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 226, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 26, .external_lex_state = 2},
  [242] = {.lex_state = 26, .external_lex_state = 2},
  [243] = {.lex_state = 114, .external_lex_state = 2},
  [244] = {.lex_state = 26, .external_lex_state = 2},
  [245] = {.lex_state = 26, .external_lex_state = 2},
  [246] = {.lex_state = 226, .external_lex_state = 2},
  [247] = {.lex_state = 226, .external_lex_state = 2},
  [248] = {.lex_state = 26, .external_lex_state = 2},
  [249] = {.lex_state = 26, .external_lex_state = 2},
  [250] = {.lex_state = 114, .external_lex_state = 2},
  [251] = {.lex_state = 114, .external_lex_state = 2},
  [252] = {.lex_state = 115, .external_lex_state = 2},
  [253] = {.lex_state = 226, .external_lex_state = 2},
  [254] = {.lex_state = 226, .external_lex_state = 2},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 2},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 0, .external_lex_state = 2},
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
    [ts_external_token__newline] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACK] = true,
  },
  [8] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
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
    [sym_source_file] = STATE(240),
    [sym_context] = STATE(5),
    [sym__optional_or] = STATE(238),
    [sym_or] = STATE(238),
    [sym__optional_and] = STATE(11),
    [sym_and] = STATE(11),
    [sym__optional_not] = STATE(54),
    [sym_not] = STATE(54),
    [sym_match] = STATE(54),
    [sym__generic_match] = STATE(237),
    [sym__prioritized_match] = STATE(233),
    [sym_include_tag] = STATE(3),
    [sym_settings] = STATE(3),
    [sym_command] = STATE(3),
    [sym_rule] = STATE(203),
    [sym__optional_choice] = STATE(230),
    [sym_choice] = STATE(230),
    [sym__optional_anchor] = STATE(179),
    [sym__optional_seq] = STATE(183),
    [sym_seq] = STATE(183),
    [sym__primary_rule] = STATE(24),
    [sym_list] = STATE(24),
    [sym_capture] = STATE(24),
    [sym_optional] = STATE(24),
    [sym_repeat] = STATE(24),
    [sym_repeat1] = STATE(24),
    [sym_parenthesized_rule] = STATE(24),
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
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_tag_LPAREN_RPAREN,
    ACTIONS(36), 1,
      anon_sym_settings_LPAREN_RPAREN,
    ACTIONS(39), 1,
      sym_start_anchor,
    ACTIONS(42), 1,
      sym_word,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      anon_sym_LT,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym__optional_anchor,
    STATE(203), 1,
      sym_rule,
    STATE(183), 2,
      sym__optional_seq,
      sym_seq,
    STATE(230), 2,
      sym__optional_choice,
      sym_choice,
    STATE(2), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(24), 7,
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
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(179), 1,
      sym__optional_anchor,
    STATE(203), 1,
      sym_rule,
    STATE(183), 2,
      sym__optional_seq,
      sym_seq,
    STATE(230), 2,
      sym__optional_choice,
      sym_choice,
    STATE(2), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(24), 7,
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
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(179), 1,
      sym__optional_anchor,
    STATE(203), 1,
      sym_rule,
    STATE(183), 2,
      sym__optional_seq,
      sym_seq,
    STATE(230), 2,
      sym__optional_choice,
      sym_choice,
    STATE(2), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(24), 7,
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
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(179), 1,
      sym__optional_anchor,
    STATE(203), 1,
      sym_rule,
    STATE(183), 2,
      sym__optional_seq,
      sym_seq,
    STATE(230), 2,
      sym__optional_choice,
      sym_choice,
    STATE(4), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(24), 7,
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
    STATE(153), 7,
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
    STATE(116), 1,
      sym_block,
    STATE(14), 2,
      sym__simple_statements,
      aux_sym_block_repeat1,
    STATE(185), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(118), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [333] = 14,
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
    ACTIONS(95), 1,
      sym__newline,
    ACTIONS(97), 1,
      sym__indent,
    STATE(106), 1,
      sym__suite,
    STATE(112), 1,
      sym__simple_statements,
    STATE(182), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(118), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [384] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_not,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(233), 1,
      sym__prioritized_match,
    STATE(237), 1,
      sym__generic_match,
    STATE(9), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(54), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(104), 10,
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
  [425] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_DASH,
    STATE(233), 1,
      sym__prioritized_match,
    STATE(237), 1,
      sym__generic_match,
    STATE(9), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(54), 3,
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
  [466] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_DASH,
    STATE(233), 1,
      sym__prioritized_match,
    STATE(237), 1,
      sym__generic_match,
    STATE(10), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(54), 3,
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
    ACTIONS(95), 1,
      sym__newline,
    ACTIONS(97), 1,
      sym__indent,
    STATE(112), 1,
      sym__simple_statements,
    STATE(115), 1,
      sym__suite,
    STATE(182), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(118), 7,
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
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_key,
    ACTIONS(120), 1,
      anon_sym_sleep,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(126), 1,
      sym_integer,
    ACTIONS(129), 1,
      sym_float,
    ACTIONS(132), 1,
      sym__dedent,
    ACTIONS(134), 1,
      sym__string_start,
    STATE(13), 2,
      sym__simple_statements,
      aux_sym_block_repeat1,
    STATE(185), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(118), 7,
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
    ACTIONS(137), 1,
      sym__dedent,
    STATE(13), 2,
      sym__simple_statements,
      aux_sym_block_repeat1,
    STATE(185), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(118), 7,
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
    STATE(233), 1,
      sym__prioritized_match,
    STATE(237), 1,
      sym__generic_match,
    STATE(70), 2,
      sym__optional_and,
      sym_and,
    STATE(54), 3,
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
    ACTIONS(139), 1,
      sym_start_anchor,
    ACTIONS(141), 1,
      sym_word,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym__optional_anchor,
    STATE(181), 2,
      sym__optional_seq,
      sym_seq,
    STATE(212), 2,
      sym__optional_choice,
      sym_choice,
    STATE(23), 7,
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
    ACTIONS(151), 1,
      sym_start_anchor,
    ACTIONS(153), 1,
      sym_word,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym__optional_anchor,
    STATE(172), 2,
      sym__optional_seq,
      sym_seq,
    STATE(210), 2,
      sym__optional_choice,
      sym_choice,
    STATE(27), 7,
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
    ACTIONS(163), 1,
      sym__newline,
    STATE(198), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(118), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [813] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_start_anchor,
    ACTIONS(153), 1,
      sym_word,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym__optional_anchor,
    STATE(172), 2,
      sym__optional_seq,
      sym_seq,
    STATE(229), 2,
      sym__optional_choice,
      sym_choice,
    STATE(27), 7,
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
    ACTIONS(139), 1,
      sym_start_anchor,
    ACTIONS(141), 1,
      sym_word,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym__optional_anchor,
    STATE(181), 2,
      sym__optional_seq,
      sym_seq,
    STATE(208), 2,
      sym__optional_choice,
      sym_choice,
    STATE(23), 7,
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
    ACTIONS(151), 1,
      sym_start_anchor,
    ACTIONS(153), 1,
      sym_word,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym__optional_anchor,
    STATE(172), 2,
      sym__optional_seq,
      sym_seq,
    STATE(209), 2,
      sym__optional_choice,
      sym_choice,
    STATE(27), 7,
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
    ACTIONS(165), 1,
      sym__newline,
    STATE(198), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(118), 7,
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
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      sym_word,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      anon_sym_PLUS,
    STATE(36), 1,
      aux_sym_seq_repeat1,
    ACTIONS(167), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(93), 7,
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
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      sym_word,
    ACTIONS(177), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_PLUS,
    STATE(41), 1,
      aux_sym_seq_repeat1,
    ACTIONS(167), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(81), 7,
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
    ACTIONS(181), 1,
      sym__newline,
    STATE(198), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(118), 7,
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
    ACTIONS(183), 1,
      sym__newline,
    STATE(198), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(118), 7,
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
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    STATE(38), 1,
      aux_sym_seq_repeat1,
    ACTIONS(167), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(100), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1191] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_start_anchor,
    ACTIONS(141), 1,
      sym_word,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym__optional_anchor,
    STATE(181), 2,
      sym__optional_seq,
      sym_seq,
    STATE(228), 2,
      sym__optional_choice,
      sym_choice,
    STATE(23), 7,
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
    STATE(198), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(118), 7,
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
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(81), 7,
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
    STATE(107), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1348] = 11,
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
    STATE(102), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1388] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_start_anchor,
    ACTIONS(153), 1,
      sym_word,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__optional_anchor,
    STATE(172), 2,
      sym__optional_seq,
      sym_seq,
    STATE(27), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1426] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_word,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      anon_sym_LT,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      aux_sym_seq_repeat1,
    ACTIONS(191), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(100), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1462] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym_word,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_LT,
    ACTIONS(258), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      aux_sym_seq_repeat1,
    ACTIONS(191), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(93), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1498] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      sym_word,
    STATE(35), 1,
      aux_sym_seq_repeat1,
    ACTIONS(264), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(93), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1534] = 11,
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
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      sym_integer,
    ACTIONS(272), 1,
      sym_float,
    STATE(113), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1574] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      sym_word,
    STATE(34), 1,
      aux_sym_seq_repeat1,
    ACTIONS(264), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(100), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1610] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_start_anchor,
    ACTIONS(141), 1,
      sym_word,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_LT,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(193), 1,
      sym__optional_anchor,
    STATE(181), 2,
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
  [1648] = 10,
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
    ACTIONS(274), 1,
      sym_word,
    STATE(199), 1,
      sym__optional_anchor,
    STATE(183), 2,
      sym__optional_seq,
      sym_seq,
    STATE(24), 7,
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
    ACTIONS(175), 1,
      sym_word,
    STATE(30), 1,
      aux_sym_seq_repeat1,
    ACTIONS(264), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(81), 7,
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
    STATE(126), 7,
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
    STATE(126), 7,
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
    STATE(126), 7,
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
    STATE(126), 7,
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
    STATE(126), 7,
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
    STATE(126), 7,
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
    STATE(119), 7,
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
    STATE(132), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2012] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(61), 1,
      sym_match,
    STATE(233), 1,
      sym__prioritized_match,
    STATE(237), 1,
      sym__generic_match,
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
  [2040] = 9,
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
    STATE(167), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2074] = 8,
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
    ACTIONS(274), 1,
      sym_word,
    STATE(187), 2,
      sym__optional_seq,
      sym_seq,
    STATE(24), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2106] = 9,
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
    STATE(126), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_and,
    ACTIONS(310), 12,
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
  [2164] = 9,
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
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      sym_integer,
    ACTIONS(316), 1,
      sym_float,
    STATE(160), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2198] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_word,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(174), 2,
      sym__optional_seq,
      sym_seq,
    STATE(27), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2230] = 9,
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
    ACTIONS(318), 1,
      sym_integer,
    ACTIONS(320), 1,
      sym_float,
    STATE(152), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2264] = 9,
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
    ACTIONS(322), 1,
      sym_integer,
    ACTIONS(324), 1,
      sym_float,
    STATE(150), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_DASH,
    ACTIONS(328), 13,
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
  [2320] = 9,
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
    ACTIONS(330), 1,
      sym_integer,
    ACTIONS(332), 1,
      sym_float,
    STATE(134), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 13,
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
  [2376] = 9,
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
    ACTIONS(338), 1,
      sym_integer,
    ACTIONS(340), 1,
      sym_float,
    STATE(137), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2410] = 9,
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
    ACTIONS(342), 1,
      sym_integer,
    ACTIONS(344), 1,
      sym_float,
    STATE(155), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_DASH,
    ACTIONS(328), 13,
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
  [2466] = 9,
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
    ACTIONS(346), 1,
      sym_integer,
    ACTIONS(348), 1,
      sym_float,
    STATE(139), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2500] = 9,
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
    ACTIONS(350), 1,
      sym_integer,
    ACTIONS(352), 1,
      sym_float,
    STATE(136), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2534] = 9,
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
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      sym_integer,
    ACTIONS(356), 1,
      sym_float,
    STATE(162), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2568] = 9,
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
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym_integer,
    ACTIONS(360), 1,
      sym_float,
    STATE(161), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2602] = 8,
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
      anon_sym_LPAREN,
    STATE(190), 2,
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
  [2634] = 3,
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
  [2655] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      sym__string_content,
    ACTIONS(375), 1,
      sym__string_end,
    STATE(71), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(369), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2681] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    ACTIONS(381), 1,
      sym__string_content,
    ACTIONS(383), 1,
      sym__string_end,
    STATE(73), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(379), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2707] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    ACTIONS(387), 1,
      sym__string_content,
    ACTIONS(389), 1,
      sym__string_end,
    STATE(71), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(385), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2733] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    ACTIONS(393), 1,
      sym__string_content,
    ACTIONS(395), 1,
      sym__string_end,
    STATE(76), 4,
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
  [2759] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    ACTIONS(387), 1,
      sym__string_content,
    ACTIONS(397), 1,
      sym__string_end,
    STATE(71), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(385), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2785] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    ACTIONS(387), 1,
      sym__string_content,
    ACTIONS(399), 1,
      sym__string_end,
    STATE(71), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(385), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2811] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(377), 1,
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
  [2837] = 5,
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
  [2860] = 2,
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
  [2876] = 2,
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
  [2892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_PLUS,
    ACTIONS(417), 8,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [2912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 10,
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
  [2928] = 2,
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
  [2944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
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
  [2964] = 2,
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
  [2980] = 2,
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
  [2996] = 4,
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
  [3016] = 2,
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
  [3032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 10,
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
  [3048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 10,
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
  [3064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 10,
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
  [3080] = 2,
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
  [3096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      anon_sym_PLUS,
    ACTIONS(417), 8,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 10,
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
  [3132] = 2,
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
  [3148] = 2,
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
  [3164] = 2,
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
  [3180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 10,
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
  [3196] = 2,
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
  [3212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    ACTIONS(417), 8,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3232] = 2,
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
  [3248] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    ACTIONS(435), 1,
      anon_sym_or,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(429), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(431), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_word,
    ACTIONS(439), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_word,
    ACTIONS(443), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_word,
    ACTIONS(447), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3324] = 3,
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
  [3341] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_or,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(429), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(431), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      sym_argument_list,
    ACTIONS(407), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_word,
    ACTIONS(461), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_word,
    ACTIONS(465), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym_word,
    ACTIONS(469), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3436] = 3,
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
  [3453] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_or,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(429), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(431), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3478] = 3,
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
  [3495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym_word,
    ACTIONS(485), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3512] = 3,
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
  [3529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym_word,
    ACTIONS(493), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3546] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_or,
    ACTIONS(497), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(501), 2,
      sym__newline,
      anon_sym_SEMI,
    ACTIONS(499), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(431), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(505), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [3584] = 3,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(509), 2,
      sym__string_content,
      sym__string_end,
    ACTIONS(507), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 8,
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
    ACTIONS(513), 8,
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
    ACTIONS(515), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3670] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_or,
    ACTIONS(429), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(519), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(431), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 4,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(471), 4,
      anon_sym_key,
      anon_sym_sleep,
      sym_identifier,
      sym_integer,
  [3706] = 2,
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
  [3720] = 2,
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
  [3734] = 2,
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
  [3748] = 2,
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
  [3762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(505), 5,
      sym__newline,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_or,
  [3806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(505), 5,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [3850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 4,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(463), 4,
      anon_sym_key,
      anon_sym_sleep,
      sym_identifier,
      sym_integer,
  [3866] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_or,
    ACTIONS(497), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(525), 2,
      sym__newline,
      anon_sym_SEMI,
    ACTIONS(499), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3886] = 2,
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
  [3900] = 2,
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
  [3914] = 2,
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
  [3928] = 2,
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
  [3942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3956] = 2,
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
  [3970] = 2,
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
  [3984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 4,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(467), 4,
      anon_sym_key,
      anon_sym_sleep,
      sym_identifier,
      sym_integer,
  [4028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(499), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(505), 3,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_or,
  [4046] = 2,
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
  [4059] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_or,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    ACTIONS(429), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(431), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4078] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
    ACTIONS(543), 1,
      anon_sym_or,
    ACTIONS(537), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(541), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4110] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_or,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    ACTIONS(429), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(431), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4142] = 2,
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
  [4155] = 2,
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
  [4168] = 2,
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
  [4181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(505), 4,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_or,
  [4196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_RBRACE,
      anon_sym_or,
    ACTIONS(537), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(541), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4239] = 2,
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
  [4252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4265] = 2,
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
  [4278] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_or,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    ACTIONS(429), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(431), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym__newline,
    ACTIONS(549), 1,
      anon_sym_SEMI,
    STATE(178), 1,
      aux_sym__simple_statements_repeat1,
  [4310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_PIPE,
    ACTIONS(554), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      aux_sym_choice_repeat1,
  [4323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_argument_list_repeat1,
  [4336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_PIPE,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_choice_repeat1,
  [4349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym_end_anchor,
    ACTIONS(562), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_argument_list_repeat1,
  [4373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym_end_anchor,
    ACTIONS(569), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_PIPE,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      aux_sym_choice_repeat1,
  [4397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_RBRACK,
    ACTIONS(575), 1,
      anon_sym_PIPE,
    STATE(169), 1,
      aux_sym_choice_repeat1,
  [4410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COLON,
    ACTIONS(577), 1,
      anon_sym_PIPE,
    STATE(177), 1,
      aux_sym_choice_repeat1,
  [4423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_SEMI,
    ACTIONS(583), 1,
      sym__newline,
    STATE(178), 1,
      aux_sym__simple_statements_repeat1,
  [4436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COLON,
    ACTIONS(585), 1,
      anon_sym_PIPE,
    STATE(191), 1,
      aux_sym_choice_repeat1,
  [4449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
    ACTIONS(575), 1,
      anon_sym_PIPE,
    STATE(176), 1,
      aux_sym_choice_repeat1,
  [4462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      sym_end_anchor,
    ACTIONS(562), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_SEMI,
    ACTIONS(591), 1,
      sym__newline,
    STATE(168), 1,
      aux_sym__simple_statements_repeat1,
  [4486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym_end_anchor,
    ACTIONS(562), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_argument_list_repeat1,
  [4510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_SEMI,
    ACTIONS(599), 1,
      sym__newline,
    STATE(189), 1,
      aux_sym__simple_statements_repeat1,
  [4523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    ACTIONS(601), 1,
      anon_sym_PIPE,
    STATE(186), 1,
      aux_sym_choice_repeat1,
  [4536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym_end_anchor,
    ACTIONS(569), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_argument_list_repeat1,
  [4560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym__newline,
    ACTIONS(608), 1,
      anon_sym_SEMI,
    STATE(178), 1,
      aux_sym__simple_statements_repeat1,
  [4573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      sym_end_anchor,
    ACTIONS(569), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_COLON,
    ACTIONS(585), 1,
      anon_sym_PIPE,
    STATE(177), 1,
      aux_sym_choice_repeat1,
  [4597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 2,
      sym__newline,
      anon_sym_SEMI,
  [4653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym__newline,
  [4684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_COLON,
  [4691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
  [4698] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym_implicit_string,
  [4705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
  [4712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_GT,
  [4719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_RBRACK,
  [4726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
  [4733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
  [4740] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(630), 1,
      aux_sym_key_action_token1,
  [4747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_RBRACK,
  [4754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
  [4761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_GT,
  [4768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
  [4775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym__newline,
  [4782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_RPAREN,
  [4789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
  [4796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
  [4803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym__newline,
  [4810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym_identifier,
  [4817] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym_implicit_string,
  [4824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__newline,
  [4831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_LPAREN,
  [4838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
  [4845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
  [4852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_GT,
  [4859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_RBRACK,
  [4866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
  [4873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_COLON,
  [4880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
  [4887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym__newline,
  [4894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym__newline,
  [4901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
  [4908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
  [4915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
  [4922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym__newline,
  [4929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_DASH,
  [4936] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(682), 1,
      aux_sym_key_action_token1,
  [4943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      ts_builtin_sym_end,
  [4950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym_identifier,
  [4957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym_identifier,
  [4964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_COLON,
  [4971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym_identifier,
  [4978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_identifier,
  [4985] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(696), 1,
      aux_sym_key_action_token1,
  [4992] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(698), 1,
      aux_sym_key_action_token1,
  [4999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym_identifier,
  [5006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_identifier,
  [5013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_COLON,
  [5020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_COLON,
  [5027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_COLON2,
  [5034] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(710), 1,
      aux_sym_key_action_token1,
  [5041] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(712), 1,
      aux_sym_key_action_token1,
  [5048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
  [5055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_LPAREN,
  [5062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_LPAREN,
  [5069] = 2,
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
  [SMALL_STATE(9)] = 384,
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
  [SMALL_STATE(33)] = 1388,
  [SMALL_STATE(34)] = 1426,
  [SMALL_STATE(35)] = 1462,
  [SMALL_STATE(36)] = 1498,
  [SMALL_STATE(37)] = 1534,
  [SMALL_STATE(38)] = 1574,
  [SMALL_STATE(39)] = 1610,
  [SMALL_STATE(40)] = 1648,
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
  [SMALL_STATE(51)] = 2040,
  [SMALL_STATE(52)] = 2074,
  [SMALL_STATE(53)] = 2106,
  [SMALL_STATE(54)] = 2140,
  [SMALL_STATE(55)] = 2164,
  [SMALL_STATE(56)] = 2198,
  [SMALL_STATE(57)] = 2230,
  [SMALL_STATE(58)] = 2264,
  [SMALL_STATE(59)] = 2298,
  [SMALL_STATE(60)] = 2320,
  [SMALL_STATE(61)] = 2354,
  [SMALL_STATE(62)] = 2376,
  [SMALL_STATE(63)] = 2410,
  [SMALL_STATE(64)] = 2444,
  [SMALL_STATE(65)] = 2466,
  [SMALL_STATE(66)] = 2500,
  [SMALL_STATE(67)] = 2534,
  [SMALL_STATE(68)] = 2568,
  [SMALL_STATE(69)] = 2602,
  [SMALL_STATE(70)] = 2634,
  [SMALL_STATE(71)] = 2655,
  [SMALL_STATE(72)] = 2681,
  [SMALL_STATE(73)] = 2707,
  [SMALL_STATE(74)] = 2733,
  [SMALL_STATE(75)] = 2759,
  [SMALL_STATE(76)] = 2785,
  [SMALL_STATE(77)] = 2811,
  [SMALL_STATE(78)] = 2837,
  [SMALL_STATE(79)] = 2860,
  [SMALL_STATE(80)] = 2876,
  [SMALL_STATE(81)] = 2892,
  [SMALL_STATE(82)] = 2912,
  [SMALL_STATE(83)] = 2928,
  [SMALL_STATE(84)] = 2944,
  [SMALL_STATE(85)] = 2964,
  [SMALL_STATE(86)] = 2980,
  [SMALL_STATE(87)] = 2996,
  [SMALL_STATE(88)] = 3016,
  [SMALL_STATE(89)] = 3032,
  [SMALL_STATE(90)] = 3048,
  [SMALL_STATE(91)] = 3064,
  [SMALL_STATE(92)] = 3080,
  [SMALL_STATE(93)] = 3096,
  [SMALL_STATE(94)] = 3116,
  [SMALL_STATE(95)] = 3132,
  [SMALL_STATE(96)] = 3148,
  [SMALL_STATE(97)] = 3164,
  [SMALL_STATE(98)] = 3180,
  [SMALL_STATE(99)] = 3196,
  [SMALL_STATE(100)] = 3212,
  [SMALL_STATE(101)] = 3232,
  [SMALL_STATE(102)] = 3248,
  [SMALL_STATE(103)] = 3273,
  [SMALL_STATE(104)] = 3290,
  [SMALL_STATE(105)] = 3307,
  [SMALL_STATE(106)] = 3324,
  [SMALL_STATE(107)] = 3341,
  [SMALL_STATE(108)] = 3366,
  [SMALL_STATE(109)] = 3385,
  [SMALL_STATE(110)] = 3402,
  [SMALL_STATE(111)] = 3419,
  [SMALL_STATE(112)] = 3436,
  [SMALL_STATE(113)] = 3453,
  [SMALL_STATE(114)] = 3478,
  [SMALL_STATE(115)] = 3495,
  [SMALL_STATE(116)] = 3512,
  [SMALL_STATE(117)] = 3529,
  [SMALL_STATE(118)] = 3546,
  [SMALL_STATE(119)] = 3566,
  [SMALL_STATE(120)] = 3584,
  [SMALL_STATE(121)] = 3600,
  [SMALL_STATE(122)] = 3614,
  [SMALL_STATE(123)] = 3628,
  [SMALL_STATE(124)] = 3642,
  [SMALL_STATE(125)] = 3656,
  [SMALL_STATE(126)] = 3670,
  [SMALL_STATE(127)] = 3690,
  [SMALL_STATE(128)] = 3706,
  [SMALL_STATE(129)] = 3720,
  [SMALL_STATE(130)] = 3734,
  [SMALL_STATE(131)] = 3748,
  [SMALL_STATE(132)] = 3762,
  [SMALL_STATE(133)] = 3776,
  [SMALL_STATE(134)] = 3790,
  [SMALL_STATE(135)] = 3806,
  [SMALL_STATE(136)] = 3820,
  [SMALL_STATE(137)] = 3834,
  [SMALL_STATE(138)] = 3850,
  [SMALL_STATE(139)] = 3866,
  [SMALL_STATE(140)] = 3886,
  [SMALL_STATE(141)] = 3900,
  [SMALL_STATE(142)] = 3914,
  [SMALL_STATE(143)] = 3928,
  [SMALL_STATE(144)] = 3942,
  [SMALL_STATE(145)] = 3956,
  [SMALL_STATE(146)] = 3970,
  [SMALL_STATE(147)] = 3984,
  [SMALL_STATE(148)] = 3998,
  [SMALL_STATE(149)] = 4012,
  [SMALL_STATE(150)] = 4028,
  [SMALL_STATE(151)] = 4046,
  [SMALL_STATE(152)] = 4059,
  [SMALL_STATE(153)] = 4078,
  [SMALL_STATE(154)] = 4097,
  [SMALL_STATE(155)] = 4110,
  [SMALL_STATE(156)] = 4129,
  [SMALL_STATE(157)] = 4142,
  [SMALL_STATE(158)] = 4155,
  [SMALL_STATE(159)] = 4168,
  [SMALL_STATE(160)] = 4181,
  [SMALL_STATE(161)] = 4196,
  [SMALL_STATE(162)] = 4209,
  [SMALL_STATE(163)] = 4226,
  [SMALL_STATE(164)] = 4239,
  [SMALL_STATE(165)] = 4252,
  [SMALL_STATE(166)] = 4265,
  [SMALL_STATE(167)] = 4278,
  [SMALL_STATE(168)] = 4297,
  [SMALL_STATE(169)] = 4310,
  [SMALL_STATE(170)] = 4323,
  [SMALL_STATE(171)] = 4336,
  [SMALL_STATE(172)] = 4349,
  [SMALL_STATE(173)] = 4360,
  [SMALL_STATE(174)] = 4373,
  [SMALL_STATE(175)] = 4384,
  [SMALL_STATE(176)] = 4397,
  [SMALL_STATE(177)] = 4410,
  [SMALL_STATE(178)] = 4423,
  [SMALL_STATE(179)] = 4436,
  [SMALL_STATE(180)] = 4449,
  [SMALL_STATE(181)] = 4462,
  [SMALL_STATE(182)] = 4473,
  [SMALL_STATE(183)] = 4486,
  [SMALL_STATE(184)] = 4497,
  [SMALL_STATE(185)] = 4510,
  [SMALL_STATE(186)] = 4523,
  [SMALL_STATE(187)] = 4536,
  [SMALL_STATE(188)] = 4547,
  [SMALL_STATE(189)] = 4560,
  [SMALL_STATE(190)] = 4573,
  [SMALL_STATE(191)] = 4584,
  [SMALL_STATE(192)] = 4597,
  [SMALL_STATE(193)] = 4605,
  [SMALL_STATE(194)] = 4613,
  [SMALL_STATE(195)] = 4621,
  [SMALL_STATE(196)] = 4629,
  [SMALL_STATE(197)] = 4637,
  [SMALL_STATE(198)] = 4645,
  [SMALL_STATE(199)] = 4653,
  [SMALL_STATE(200)] = 4661,
  [SMALL_STATE(201)] = 4669,
  [SMALL_STATE(202)] = 4677,
  [SMALL_STATE(203)] = 4684,
  [SMALL_STATE(204)] = 4691,
  [SMALL_STATE(205)] = 4698,
  [SMALL_STATE(206)] = 4705,
  [SMALL_STATE(207)] = 4712,
  [SMALL_STATE(208)] = 4719,
  [SMALL_STATE(209)] = 4726,
  [SMALL_STATE(210)] = 4733,
  [SMALL_STATE(211)] = 4740,
  [SMALL_STATE(212)] = 4747,
  [SMALL_STATE(213)] = 4754,
  [SMALL_STATE(214)] = 4761,
  [SMALL_STATE(215)] = 4768,
  [SMALL_STATE(216)] = 4775,
  [SMALL_STATE(217)] = 4782,
  [SMALL_STATE(218)] = 4789,
  [SMALL_STATE(219)] = 4796,
  [SMALL_STATE(220)] = 4803,
  [SMALL_STATE(221)] = 4810,
  [SMALL_STATE(222)] = 4817,
  [SMALL_STATE(223)] = 4824,
  [SMALL_STATE(224)] = 4831,
  [SMALL_STATE(225)] = 4838,
  [SMALL_STATE(226)] = 4845,
  [SMALL_STATE(227)] = 4852,
  [SMALL_STATE(228)] = 4859,
  [SMALL_STATE(229)] = 4866,
  [SMALL_STATE(230)] = 4873,
  [SMALL_STATE(231)] = 4880,
  [SMALL_STATE(232)] = 4887,
  [SMALL_STATE(233)] = 4894,
  [SMALL_STATE(234)] = 4901,
  [SMALL_STATE(235)] = 4908,
  [SMALL_STATE(236)] = 4915,
  [SMALL_STATE(237)] = 4922,
  [SMALL_STATE(238)] = 4929,
  [SMALL_STATE(239)] = 4936,
  [SMALL_STATE(240)] = 4943,
  [SMALL_STATE(241)] = 4950,
  [SMALL_STATE(242)] = 4957,
  [SMALL_STATE(243)] = 4964,
  [SMALL_STATE(244)] = 4971,
  [SMALL_STATE(245)] = 4978,
  [SMALL_STATE(246)] = 4985,
  [SMALL_STATE(247)] = 4992,
  [SMALL_STATE(248)] = 4999,
  [SMALL_STATE(249)] = 5006,
  [SMALL_STATE(250)] = 5013,
  [SMALL_STATE(251)] = 5020,
  [SMALL_STATE(252)] = 5027,
  [SMALL_STATE(253)] = 5034,
  [SMALL_STATE(254)] = 5041,
  [SMALL_STATE(255)] = 5048,
  [SMALL_STATE(256)] = 5055,
  [SMALL_STATE(257)] = 5062,
  [SMALL_STATE(258)] = 5069,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(250),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(245),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(244),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__not_interpolation, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_interpolation, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(50),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(252),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(243),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_or, 1),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(57),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(224),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(225),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(78),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(118),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(118),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_seq, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(81),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(245),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(244),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(16),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(17),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(100),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(248),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(249),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(28),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(19),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(93),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(241),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(242),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(20),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(21),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_and, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__optional_and, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 2, .production_id = 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 2, .production_id = 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and, 3),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(6),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(71),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(71),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_rule, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_tag, 4),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_tag, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statements, 3),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statements, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statements, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statements, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statements, 4),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statements, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__suite, 1, .production_id = 3),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__suite, 1, .production_id = 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__suite, 2),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__suite, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 6),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_action, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep_action, 4),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, .production_id = 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 5),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(39),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_choice, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(53),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(40),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__simple_statements_repeat1, 2), SHIFT_REPEAT(29),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__simple_statements_repeat1, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(33),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prioritized_match, 3, .production_id = 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic_match, 3, .production_id = 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [684] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
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
