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
#define STATE_COUNT 254
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 112
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 13
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 15

enum {
  sym_comment = 1,
  sym_docstring = 2,
  anon_sym_DASH = 3,
  anon_sym_and = 4,
  anon_sym_not = 5,
  anon_sym_COLON = 6,
  anon_sym_os = 7,
  anon_sym_tag = 8,
  anon_sym_mode = 9,
  anon_sym_app = 10,
  anon_sym_app_DOTname = 11,
  anon_sym_app_DOTexe = 12,
  anon_sym_app_DOTbundle = 13,
  anon_sym_title = 14,
  anon_sym_code_DOTlanguage = 15,
  anon_sym_language = 16,
  anon_sym_COLON2 = 17,
  anon_sym_tag_LPAREN_RPAREN = 18,
  anon_sym_settings_LPAREN_RPAREN = 19,
  anon_sym_EQ = 20,
  anon_sym_PIPE = 21,
  sym_start_anchor = 22,
  sym_end_anchor = 23,
  sym_word = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  anon_sym_LT = 27,
  anon_sym_GT = 28,
  anon_sym_LBRACK = 29,
  anon_sym_RBRACK = 30,
  anon_sym_STAR = 31,
  anon_sym_PLUS = 32,
  anon_sym_LPAREN = 33,
  anon_sym_RPAREN = 34,
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
  sym_string_content = 55,
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
  sym__statement_suite = 74,
  sym_block = 75,
  sym__simple_statement = 76,
  sym_assignment = 77,
  sym_expression = 78,
  sym_rule = 79,
  sym__optional_choice = 80,
  sym_choice = 81,
  sym__optional_anchor = 82,
  sym__optional_seq = 83,
  sym_seq = 84,
  sym__primary_rule = 85,
  sym_list = 86,
  sym_capture = 87,
  sym_optional = 88,
  sym_repeat = 89,
  sym_repeat1 = 90,
  sym_parenthesized_rule = 91,
  sym__expression = 92,
  sym_variable = 93,
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
  aux_sym_context_repeat1 = 105,
  aux_sym_or_repeat1 = 106,
  aux_sym_block_repeat1 = 107,
  aux_sym_choice_repeat1 = 108,
  aux_sym_seq_repeat1 = 109,
  aux_sym_argument_list_repeat1 = 110,
  aux_sym_string_repeat1 = 111,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_docstring] = "docstring",
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
  [anon_sym_EQ] = "=",
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
  [anon_sym_SLASH] = "operator",
  [anon_sym_PERCENT] = "operator",
  [anon_sym_or] = "operator",
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
  [sym_string_content] = "string_content",
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
  [sym__statement_suite] = "_statement_suite",
  [sym_block] = "block",
  [sym__simple_statement] = "_simple_statement",
  [sym_assignment] = "assignment",
  [sym_expression] = "expression",
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
  [sym__expression] = "_expression",
  [sym_variable] = "variable",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_binary_operator] = "binary_operator",
  [sym_key_action] = "key_action",
  [sym_sleep_action] = "sleep_action",
  [sym_action] = "action",
  [sym_argument_list] = "argument_list",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [sym__escape_interpolation] = "string_content",
  [sym__not_interpolation] = "string_content",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_context_repeat1] = "context_repeat1",
  [aux_sym_or_repeat1] = "or_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_choice_repeat1] = "choice_repeat1",
  [aux_sym_seq_repeat1] = "seq_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_docstring] = sym_docstring,
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
  [anon_sym_EQ] = anon_sym_EQ,
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
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_SLASH,
  [anon_sym_or] = anon_sym_SLASH,
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
  [sym_string_content] = sym_string_content,
  [sym__string_end] = sym__string_start,
  [sym__regex_start] = sym__regex_start,
  [sym__regex_content] = sym__regex_content,
  [sym__regex_end] = sym__regex_start,
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
  [sym__statement_suite] = sym__statement_suite,
  [sym_block] = sym_block,
  [sym__simple_statement] = sym__simple_statement,
  [sym_assignment] = sym_assignment,
  [sym_expression] = sym_expression,
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
  [sym__expression] = sym__expression,
  [sym_variable] = sym_variable,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_binary_operator] = sym_binary_operator,
  [sym_key_action] = sym_key_action,
  [sym_sleep_action] = sym_sleep_action,
  [sym_action] = sym_action,
  [sym_argument_list] = sym_argument_list,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [sym__escape_interpolation] = sym_string_content,
  [sym__not_interpolation] = sym_string_content,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_context_repeat1] = aux_sym_context_repeat1,
  [aux_sym_or_repeat1] = aux_sym_or_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_choice_repeat1] = aux_sym_choice_repeat1,
  [aux_sym_seq_repeat1] = aux_sym_seq_repeat1,
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
  [sym_docstring] = {
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
  [anon_sym_EQ] = {
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = true,
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
  [sym_string_content] = {
    .visible = true,
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
  [sym__statement_suite] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
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
    .visible = true,
    .named = true,
  },
  [sym__not_interpolation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_context_repeat1] = {
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
  field_action_name = 1,
  field_arguments = 2,
  field_capture_name = 3,
  field_expression = 4,
  field_key = 5,
  field_left = 6,
  field_list_name = 7,
  field_operator = 8,
  field_pattern = 9,
  field_right = 10,
  field_rule = 11,
  field_script = 12,
  field_tag = 13,
  field_variable_name = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action_name] = "action_name",
  [field_arguments] = "arguments",
  [field_capture_name] = "capture_name",
  [field_expression] = "expression",
  [field_key] = "key",
  [field_left] = "left",
  [field_list_name] = "list_name",
  [field_operator] = "operator",
  [field_pattern] = "pattern",
  [field_right] = "right",
  [field_rule] = "rule",
  [field_script] = "script",
  [field_tag] = "tag",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 2},
  [12] = {.index = 13, .length = 2},
  [13] = {.index = 15, .length = 3},
  [14] = {.index = 18, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0, .inherited = true},
    {field_pattern, 0, .inherited = true},
  [2] =
    {field_key, 0},
    {field_pattern, 2},
  [4] =
    {field_variable_name, 0},
  [5] =
    {field_expression, 0},
  [6] =
    {field_list_name, 1},
  [7] =
    {field_capture_name, 1},
  [8] =
    {field_rule, 0},
    {field_script, 2},
  [10] =
    {field_tag, 2},
  [11] =
    {field_action_name, 0},
    {field_arguments, 1},
  [13] =
    {field_left, 0},
    {field_right, 2},
  [15] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [18] =
    {field_arguments, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = sym_block,
  },
  [10] = {
    [0] = sym_string_content,
  },
  [13] = {
    [1] = anon_sym_SLASH,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__simple_statement, 2,
    sym__simple_statement,
    sym_block,
  0,
};

static inline bool sym_word_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 3046
      ? (c < 2392
        ? (c < 1376
          ? (c < 748
            ? (c < 185
              ? (c < 'a'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))))
              : (c <= 186 || (c < 248
                ? (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 908
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1984
            ? (c < 1765
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2144
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))))
              : (c <= 2154 || (c < 2308
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : c <= 2384)))))))))
        : (c <= 2401 || (c < 2730
          ? (c < 2556
            ? (c < 2486
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2527
                ? (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2548
                  ? (c >= 2534 && c <= 2545)
                  : c <= 2553)))))
            : (c <= 2556 || (c < 2649
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))
              : (c <= 2652 || (c < 2693
                ? (c < 2662
                  ? c == 2654
                  : (c <= 2671 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))))))
          : (c <= 2736 || (c < 2908
            ? (c < 2821
              ? (c < 2768
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2799 || c == 2809))))
              : (c <= 2828 || (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : c <= 2877)))))
            : (c <= 2909 || (c < 2969
              ? (c < 2947
                ? (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))
              : (c <= 2970 || (c < 2984
                ? (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : c <= 3024)))))))))))
      : (c <= 3058 || (c < 4176
        ? (c < 3450
          ? (c < 3242
            ? (c < 3168
              ? (c < 3114
                ? (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))))
              : (c <= 3169 || (c < 3205
                ? (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3412
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : (c <= 3389 || c == 3406))
                : (c <= 3414 || (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : c <= 3448)))))))
          : (c <= 3455 || (c < 3749
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3558
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3567 || (c >= 3585 && c <= 3632)))))
              : (c <= 3635 || (c < 3716
                ? (c < 3664
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3792
                  ? c == 3782
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))))
              : (c <= 3840 || (c < 3976
                ? (c < 3904
                  ? (c >= 3872 && c <= 3891)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4169)))))))))
        : (c <= 4181 || (c < 5024
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4240 && c <= 4249)))))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4802
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))))
              : (c <= 4805 || (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6112
            ? (c < 5919
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))))
              : (c <= 5937 || (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))))
            : (c <= 6121 || (c < 6320
              ? (c < 6272
                ? (c < 6160
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6528
                ? (c < 6470
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6618)))))))))))))
    : (c <= 6678 || (c < 43138
      ? (c < 10102
        ? (c < 8064
          ? (c < 7357
            ? (c < 7043
              ? (c < 6823
                ? (c < 6784
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))
              : (c <= 7072 || (c < 7245
                ? (c < 7168
                  ? (c >= 7086 && c <= 7141)
                  : (c <= 7203 || (c >= 7232 && c <= 7241)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7968
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8178
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))
              : (c <= 8180 || (c < 8319
                ? (c < 8304
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))
                : (c <= 8329 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : c <= 9471)))))))))
        : (c <= 10131 || (c < 12690
          ? (c < 11712
            ? (c < 11568
              ? (c < 11517
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12344
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))
              : (c <= 12348 || (c < 12540
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12693 || (c < 42560
            ? (c < 13312
              ? (c < 12872
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))
                : (c <= 12879 || (c < 12928
                  ? (c >= 12881 && c <= 12895)
                  : (c <= 12937 || (c >= 12977 && c <= 12991)))))
              : (c <= 13312 || (c < 42192
                ? (c < 19968
                  ? c == 19903
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42965
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_word_character_set_2(int32_t c) {
  return (c < 6784
    ? (c < 3086
      ? (c < 2437
        ? (c < 1568
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 170
                  ? (c >= '0' && c <= '9')
                  : (c <= 170 || (c >= 178 && c <= 179)))
                : (c <= 181 || (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 1015
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))))
              : (c <= 1153 || (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : c <= 1522)))))))
          : (c <= 1610 || (c < 2048
            ? (c < 1808
              ? (c < 1749
                ? (c < 1646
                  ? (c >= 1632 && c <= 1641)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))))
              : (c <= 1808 || (c < 1984
                ? (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : c <= 2042)))))
            : (c <= 2069 || (c < 2208
              ? (c < 2112
                ? (c < 2084
                  ? c == 2074
                  : (c <= 2084 || c == 2088))
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : c <= 2432)))))))))
        : (c <= 2444 || (c < 2749
          ? (c < 2579
            ? (c < 2524
              ? (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))))
              : (c <= 2525 || (c < 2556
                ? (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))))
            : (c <= 2600 || (c < 2674
              ? (c < 2616
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))))
              : (c <= 2676 || (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))))))
          : (c <= 2749 || (c < 2929
            ? (c < 2858
              ? (c < 2809
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || (c >= 2790 && c <= 2799)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2927)))))
            : (c <= 2935 || (c < 2974
              ? (c < 2962
                ? (c < 2949
                  ? c == 2947
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))
              : (c <= 2975 || (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3077
                  ? (c >= 3046 && c <= 3058)
                  : c <= 3084)))))))))))
      : (c <= 3088 || (c < 4193
        ? (c < 3482
          ? (c < 3261
            ? (c < 3192
              ? (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))))
              : (c <= 3198 || (c < 3218
                ? (c < 3205
                  ? c == 3200
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : c <= 3257)))))
            : (c <= 3261 || (c < 3389
              ? (c < 3313
                ? (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3297 || (c >= 3302 && c <= 3311)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))))
              : (c <= 3389 || (c < 3430
                ? (c < 3412
                  ? c == 3406
                  : (c <= 3414 || (c >= 3416 && c <= 3425)))
                : (c <= 3448 || (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : c <= 3478)))))))
          : (c <= 3505 || (c < 3762
            ? (c < 3664
              ? (c < 3558
                ? (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3567 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))))
              : (c <= 3673 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3904
              ? (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3872 && c <= 3891)))))
              : (c <= 3911 || (c < 4159
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))
                : (c <= 4169 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5121
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4824
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))
              : (c <= 4880 || (c < 4992
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4969 && c <= 4988)))
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))))))
          : (c <= 5740 || (c < 6160
            ? (c < 5984
              ? (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))))
              : (c <= 5996 || (c < 6108
                ? (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6067 || c == 6103))
                : (c <= 6108 || (c < 6128
                  ? (c >= 6112 && c <= 6121)
                  : c <= 6137)))))
            : (c <= 6169 || (c < 6470
              ? (c < 6314
                ? (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))
              : (c <= 6509 || (c < 6608
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6618 || (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : c <= 6740)))))))))))))
    : (c <= 6793 || (c < 43216
      ? (c < 11499
        ? (c < 8126
          ? (c < 7406
            ? (c < 7168
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7072 || (c >= 7086 && c <= 7141)))))
              : (c <= 7203 || (c < 7312
                ? (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8016
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8031
                ? (c < 8027
                  ? c == 8025
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : c <= 8124)))))))
          : (c <= 8126 || (c < 8469
            ? (c < 8304
              ? (c < 8150
                ? (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))))
              : (c <= 8305 || (c < 8450
                ? (c < 8319
                  ? (c >= 8308 && c <= 8313)
                  : (c <= 8329 || (c >= 8336 && c <= 8348)))
                : (c <= 8450 || (c < 8458
                  ? c == 8455
                  : c <= 8467)))))
            : (c <= 8469 || (c < 8517
              ? (c < 8488
                ? (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))
              : (c <= 8521 || (c < 9450
                ? (c < 8528
                  ? c == 8526
                  : (c <= 8585 || (c >= 9312 && c <= 9371)))
                : (c <= 9471 || (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : c <= 11492)))))))))
        : (c <= 11502 || (c < 12784
          ? (c < 11728
            ? (c < 11648
              ? (c < 11559
                ? (c < 11517
                  ? (c >= 11506 && c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))))
              : (c <= 11670 || (c < 11704
                ? (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : c <= 11726)))))
            : (c <= 11734 || (c < 12445
              ? (c < 12321
                ? (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11823 || (c >= 12293 && c <= 12295)))
                : (c <= 12329 || (c < 12344
                  ? (c >= 12337 && c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))
              : (c <= 12447 || (c < 12593
                ? (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))
                : (c <= 12686 || (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : c <= 12735)))))))
          : (c <= 12799 || (c < 42656
            ? (c < 19968
              ? (c < 12928
                ? (c < 12872
                  ? (c >= 12832 && c <= 12841)
                  : (c <= 12879 || (c >= 12881 && c <= 12895)))
                : (c <= 12937 || (c < 13312
                  ? (c >= 12977 && c <= 12991)
                  : (c <= 13312 || c == 19903))))
              : (c <= 19968 || (c < 42512
                ? (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42735 || (c < 42994
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))
              : (c <= 43009 || (c < 43056
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : (c <= 43018 || (c >= 43020 && c <= 43042)))
                : (c <= 43061 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65345
        ? (c < 43816
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43739
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44016
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44025 || (c < 55203
                  ? c == 44032
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_word_character_set_3(int32_t c) {
  return (c < 6784
    ? (c < 3086
      ? (c < 2437
        ? (c < 1568
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 170
                  ? c == '-'
                  : (c <= 170 || (c >= 178 && c <= 179)))
                : (c <= 181 || (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 1015
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))))
              : (c <= 1153 || (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : c <= 1522)))))))
          : (c <= 1610 || (c < 2048
            ? (c < 1808
              ? (c < 1749
                ? (c < 1646
                  ? (c >= 1632 && c <= 1641)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))))
              : (c <= 1808 || (c < 1984
                ? (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : c <= 2042)))))
            : (c <= 2069 || (c < 2208
              ? (c < 2112
                ? (c < 2084
                  ? c == 2074
                  : (c <= 2084 || c == 2088))
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : c <= 2432)))))))))
        : (c <= 2444 || (c < 2749
          ? (c < 2579
            ? (c < 2524
              ? (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))))
              : (c <= 2525 || (c < 2556
                ? (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))))
            : (c <= 2600 || (c < 2674
              ? (c < 2616
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))))
              : (c <= 2676 || (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))))))
          : (c <= 2749 || (c < 2929
            ? (c < 2858
              ? (c < 2809
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || (c >= 2790 && c <= 2799)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2927)))))
            : (c <= 2935 || (c < 2974
              ? (c < 2962
                ? (c < 2949
                  ? c == 2947
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))
              : (c <= 2975 || (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3077
                  ? (c >= 3046 && c <= 3058)
                  : c <= 3084)))))))))))
      : (c <= 3088 || (c < 4193
        ? (c < 3482
          ? (c < 3261
            ? (c < 3192
              ? (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))))
              : (c <= 3198 || (c < 3218
                ? (c < 3205
                  ? c == 3200
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : c <= 3257)))))
            : (c <= 3261 || (c < 3389
              ? (c < 3313
                ? (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3297 || (c >= 3302 && c <= 3311)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))))
              : (c <= 3389 || (c < 3430
                ? (c < 3412
                  ? c == 3406
                  : (c <= 3414 || (c >= 3416 && c <= 3425)))
                : (c <= 3448 || (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : c <= 3478)))))))
          : (c <= 3505 || (c < 3762
            ? (c < 3664
              ? (c < 3558
                ? (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3567 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))))
              : (c <= 3673 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3904
              ? (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3872 && c <= 3891)))))
              : (c <= 3911 || (c < 4159
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))
                : (c <= 4169 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5121
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4824
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))
              : (c <= 4880 || (c < 4992
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4969 && c <= 4988)))
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))))))
          : (c <= 5740 || (c < 6160
            ? (c < 5984
              ? (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))))
              : (c <= 5996 || (c < 6108
                ? (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6067 || c == 6103))
                : (c <= 6108 || (c < 6128
                  ? (c >= 6112 && c <= 6121)
                  : c <= 6137)))))
            : (c <= 6169 || (c < 6470
              ? (c < 6314
                ? (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))
              : (c <= 6509 || (c < 6608
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6618 || (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : c <= 6740)))))))))))))
    : (c <= 6793 || (c < 43216
      ? (c < 11499
        ? (c < 8126
          ? (c < 7406
            ? (c < 7168
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7072 || (c >= 7086 && c <= 7141)))))
              : (c <= 7203 || (c < 7312
                ? (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8016
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8031
                ? (c < 8027
                  ? c == 8025
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : c <= 8124)))))))
          : (c <= 8126 || (c < 8469
            ? (c < 8304
              ? (c < 8150
                ? (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))))
              : (c <= 8305 || (c < 8450
                ? (c < 8319
                  ? (c >= 8308 && c <= 8313)
                  : (c <= 8329 || (c >= 8336 && c <= 8348)))
                : (c <= 8450 || (c < 8458
                  ? c == 8455
                  : c <= 8467)))))
            : (c <= 8469 || (c < 8517
              ? (c < 8488
                ? (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))
              : (c <= 8521 || (c < 9450
                ? (c < 8528
                  ? c == 8526
                  : (c <= 8585 || (c >= 9312 && c <= 9371)))
                : (c <= 9471 || (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : c <= 11492)))))))))
        : (c <= 11502 || (c < 12784
          ? (c < 11728
            ? (c < 11648
              ? (c < 11559
                ? (c < 11517
                  ? (c >= 11506 && c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))))
              : (c <= 11670 || (c < 11704
                ? (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : c <= 11726)))))
            : (c <= 11734 || (c < 12445
              ? (c < 12321
                ? (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11823 || (c >= 12293 && c <= 12295)))
                : (c <= 12329 || (c < 12344
                  ? (c >= 12337 && c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))
              : (c <= 12447 || (c < 12593
                ? (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))
                : (c <= 12686 || (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : c <= 12735)))))))
          : (c <= 12799 || (c < 42656
            ? (c < 19968
              ? (c < 12928
                ? (c < 12872
                  ? (c >= 12832 && c <= 12841)
                  : (c <= 12879 || (c >= 12881 && c <= 12895)))
                : (c <= 12937 || (c < 13312
                  ? (c >= 12977 && c <= 12991)
                  : (c <= 13312 || c == 19903))))
              : (c <= 19968 || (c < 42512
                ? (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42735 || (c < 42994
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))
              : (c <= 43009 || (c < 43056
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : (c <= 43018 || (c >= 43020 && c <= 43042)))
                : (c <= 43061 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65345
        ? (c < 43816
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43739
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44016
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44025 || (c < 55203
                  ? c == 44032
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_word_character_set_4(int32_t c) {
  return (c < 6656
    ? (c < 3046
      ? (c < 2392
        ? (c < 1376
          ? (c < 748
            ? (c < 185
              ? (c < 'b'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))))
              : (c <= 186 || (c < 248
                ? (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 908
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1984
            ? (c < 1765
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2144
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))))
              : (c <= 2154 || (c < 2308
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : c <= 2384)))))))))
        : (c <= 2401 || (c < 2730
          ? (c < 2556
            ? (c < 2486
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2527
                ? (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2548
                  ? (c >= 2534 && c <= 2545)
                  : c <= 2553)))))
            : (c <= 2556 || (c < 2649
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))
              : (c <= 2652 || (c < 2693
                ? (c < 2662
                  ? c == 2654
                  : (c <= 2671 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))))))
          : (c <= 2736 || (c < 2908
            ? (c < 2821
              ? (c < 2768
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2799 || c == 2809))))
              : (c <= 2828 || (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : c <= 2877)))))
            : (c <= 2909 || (c < 2969
              ? (c < 2947
                ? (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))
              : (c <= 2970 || (c < 2984
                ? (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : c <= 3024)))))))))))
      : (c <= 3058 || (c < 4176
        ? (c < 3450
          ? (c < 3242
            ? (c < 3168
              ? (c < 3114
                ? (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))))
              : (c <= 3169 || (c < 3205
                ? (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3412
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : (c <= 3389 || c == 3406))
                : (c <= 3414 || (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : c <= 3448)))))))
          : (c <= 3455 || (c < 3749
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3558
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3567 || (c >= 3585 && c <= 3632)))))
              : (c <= 3635 || (c < 3716
                ? (c < 3664
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3792
                  ? c == 3782
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))))
              : (c <= 3840 || (c < 3976
                ? (c < 3904
                  ? (c >= 3872 && c <= 3891)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4169)))))))))
        : (c <= 4181 || (c < 5024
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4240 && c <= 4249)))))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4802
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))))
              : (c <= 4805 || (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6112
            ? (c < 5919
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))))
              : (c <= 5937 || (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))))
            : (c <= 6121 || (c < 6320
              ? (c < 6272
                ? (c < 6160
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6528
                ? (c < 6470
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6618)))))))))))))
    : (c <= 6678 || (c < 43138
      ? (c < 10102
        ? (c < 8064
          ? (c < 7357
            ? (c < 7043
              ? (c < 6823
                ? (c < 6784
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))
              : (c <= 7072 || (c < 7245
                ? (c < 7168
                  ? (c >= 7086 && c <= 7141)
                  : (c <= 7203 || (c >= 7232 && c <= 7241)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7968
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8178
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))
              : (c <= 8180 || (c < 8319
                ? (c < 8304
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))
                : (c <= 8329 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : c <= 9471)))))))))
        : (c <= 10131 || (c < 12690
          ? (c < 11712
            ? (c < 11568
              ? (c < 11517
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12344
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))
              : (c <= 12348 || (c < 12540
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12693 || (c < 42560
            ? (c < 13312
              ? (c < 12872
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))
                : (c <= 12879 || (c < 12928
                  ? (c >= 12881 && c <= 12895)
                  : (c <= 12937 || (c >= 12977 && c <= 12991)))))
              : (c <= 13312 || (c < 42192
                ? (c < 19968
                  ? c == 19903
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42965
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

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
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == '%') ADVANCE(221);
      if (lookahead == '(') ADVANCE(218);
      if (lookahead == ')') ADVANCE(219);
      if (lookahead == '*') ADVANCE(216);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(231);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead == '0') ADVANCE(284);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '<') ADVANCE(212);
      if (lookahead == '=') ADVANCE(159);
      if (lookahead == '>') ADVANCE(213);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(215);
      if (lookahead == '^') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'k') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(113)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(283);
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
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(294);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(301);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(21)
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
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(22)
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
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == '%') ADVANCE(221);
      if (lookahead == '(') ADVANCE(218);
      if (lookahead == ')') ADVANCE(219);
      if (lookahead == '*') ADVANCE(216);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(231);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead == '0') ADVANCE(284);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '<') ADVANCE(212);
      if (lookahead == '=') ADVANCE(159);
      if (lookahead == '>') ADVANCE(213);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(215);
      if (lookahead == '^') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'k') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '(') ADVANCE(218);
      if (lookahead == ')') ADVANCE(219);
      if (lookahead == ',') ADVANCE(231);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '0') ADVANCE(284);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'k') ADVANCE(249);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'c') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == 'm') ADVANCE(268);
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == '(') ADVANCE(218);
      if (lookahead == ')') ADVANCE(219);
      if (lookahead == '*') ADVANCE(216);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '<') ADVANCE(212);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == ']') ADVANCE(215);
      if (lookahead == '^') ADVANCE(161);
      if (lookahead == '{') ADVANCE(208);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      if (sym_word_character_set_1(lookahead)) ADVANCE(207);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '%') ADVANCE(221);
      if (lookahead == '(') ADVANCE(218);
      if (lookahead == '*') ADVANCE(216);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == '}') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '(') ADVANCE(218);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '0') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(302);
      if (lookahead == 'k') ADVANCE(249);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'c') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == 'm') ADVANCE(268);
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'c') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == 'm') ADVANCE(268);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(121);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(157);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(158);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(68);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(286);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(287);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
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
      if (lookahead == 'b') ADVANCE(275);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'n') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(124);
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
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(151);
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
      if (lookahead == 'g') ADVANCE(133);
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
      if (lookahead == 'l') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
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
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(126);
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
      if (lookahead == 'y') ADVANCE(223);
      END_STATE();
    case 92:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 93:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(286);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(287);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
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
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == '%') ADVANCE(221);
      if (lookahead == '(') ADVANCE(218);
      if (lookahead == ')') ADVANCE(219);
      if (lookahead == '*') ADVANCE(216);
      if (lookahead == '+') ADVANCE(217);
      if (lookahead == ',') ADVANCE(231);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead == '0') ADVANCE(284);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '<') ADVANCE(212);
      if (lookahead == '=') ADVANCE(159);
      if (lookahead == '>') ADVANCE(213);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(215);
      if (lookahead == '^') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'k') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(113)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 114:
      if (eof) ADVANCE(117);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == '(') ADVANCE(218);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '<') ADVANCE(212);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == '\\') SKIP(110)
      if (lookahead == '^') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 'm') ADVANCE(186);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == '{') ADVANCE(208);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '}') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(114)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_2(lookahead)) ADVANCE(207);
      END_STATE();
    case 115:
      if (eof) ADVANCE(117);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '(') ADVANCE(218);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '<') ADVANCE(212);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == '\\') SKIP(112)
      if (lookahead == '^') ADVANCE(161);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == '{') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(116)
      if (sym_word_character_set_1(lookahead)) ADVANCE(207);
      END_STATE();
    case 116:
      if (eof) ADVANCE(117);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '(') ADVANCE(218);
      if (lookahead == '<') ADVANCE(212);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == '\\') SKIP(112)
      if (lookahead == '^') ADVANCE(161);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == '{') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(116)
      if (sym_word_character_set_1(lookahead)) ADVANCE(207);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (sym_word_character_set_1(lookahead)) ADVANCE(207);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_os);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '(') ADVANCE(28);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_app);
      if (lookahead == '.') ADVANCE(41);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_app);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '_') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_app);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_app_DOTname);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_app_DOTname);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_app_DOTexe);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_app_DOTexe);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_app_DOTbundle);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_app_DOTbundle);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_code_DOTlanguage);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_code_DOTlanguage);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_language);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_language);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_language);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_tag_LPAREN_RPAREN);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_settings_LPAREN_RPAREN);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_start_anchor);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_end_anchor);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(28);
      if (sym_word_character_set_1(lookahead)) ADVANCE(207);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(29);
      if (sym_word_character_set_1(lookahead)) ADVANCE(207);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'a') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'a') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'd') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'd') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'g') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'g') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'g') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'g') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'i') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'l') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'n') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'n') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'o') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'o') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'o') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'p') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 's') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 't') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 't') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == 'u') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '_') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (sym_word_character_set_3(lookahead)) ADVANCE(207);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(200);
      if (sym_word_character_set_4(lookahead)) ADVANCE(207);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(206);
      if (sym_word_character_set_1(lookahead)) ADVANCE(207);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(163);
      if (sym_word_character_set_1(lookahead)) ADVANCE(207);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(204);
      if (sym_word_character_set_1(lookahead)) ADVANCE(207);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(203);
      if (sym_word_character_set_1(lookahead)) ADVANCE(207);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(201);
      if (sym_word_character_set_1(lookahead)) ADVANCE(207);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(165);
      if (sym_word_character_set_1(lookahead)) ADVANCE(207);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(202);
      if (sym_word_character_set_1(lookahead)) ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(205);
      if (sym_word_character_set_1(lookahead)) ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_word);
      if (sym_word_character_set_1(lookahead)) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(298);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(299);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == '\r') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(228);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(228);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_sleep);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_sleep);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == 'p') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 't') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 't') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'y') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == '_') ADVANCE(285);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(32);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(33);
      if (lookahead == '_') ADVANCE(285);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(282);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(94);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(292);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(293);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_regex_escape_sequence_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\r') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      if (lookahead == '\\') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__not_escapesequence);
      if (lookahead == '\n') ADVANCE(301);
      if (lookahead == '\r') ADVANCE(5);
      if (sym_string_escape_sequence_character_set_1(lookahead)) ADVANCE(300);
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
  [6] = {.lex_state = 20, .external_lex_state = 2},
  [7] = {.lex_state = 23, .external_lex_state = 3},
  [8] = {.lex_state = 19, .external_lex_state = 4},
  [9] = {.lex_state = 19, .external_lex_state = 5},
  [10] = {.lex_state = 19, .external_lex_state = 4},
  [11] = {.lex_state = 19, .external_lex_state = 5},
  [12] = {.lex_state = 19, .external_lex_state = 5},
  [13] = {.lex_state = 20, .external_lex_state = 2},
  [14] = {.lex_state = 20, .external_lex_state = 2},
  [15] = {.lex_state = 20, .external_lex_state = 2},
  [16] = {.lex_state = 20, .external_lex_state = 2},
  [17] = {.lex_state = 21, .external_lex_state = 6},
  [18] = {.lex_state = 21, .external_lex_state = 2},
  [19] = {.lex_state = 21, .external_lex_state = 2},
  [20] = {.lex_state = 21, .external_lex_state = 2},
  [21] = {.lex_state = 21, .external_lex_state = 7},
  [22] = {.lex_state = 21, .external_lex_state = 2},
  [23] = {.lex_state = 21, .external_lex_state = 2},
  [24] = {.lex_state = 21, .external_lex_state = 2},
  [25] = {.lex_state = 21, .external_lex_state = 2},
  [26] = {.lex_state = 19, .external_lex_state = 8},
  [27] = {.lex_state = 19, .external_lex_state = 8},
  [28] = {.lex_state = 19, .external_lex_state = 8},
  [29] = {.lex_state = 21, .external_lex_state = 7},
  [30] = {.lex_state = 21, .external_lex_state = 2},
  [31] = {.lex_state = 21, .external_lex_state = 6},
  [32] = {.lex_state = 19, .external_lex_state = 8},
  [33] = {.lex_state = 19, .external_lex_state = 8},
  [34] = {.lex_state = 19, .external_lex_state = 8},
  [35] = {.lex_state = 19, .external_lex_state = 8},
  [36] = {.lex_state = 19, .external_lex_state = 8},
  [37] = {.lex_state = 21, .external_lex_state = 2},
  [38] = {.lex_state = 21, .external_lex_state = 7},
  [39] = {.lex_state = 21, .external_lex_state = 2},
  [40] = {.lex_state = 21, .external_lex_state = 2},
  [41] = {.lex_state = 21, .external_lex_state = 2},
  [42] = {.lex_state = 21, .external_lex_state = 6},
  [43] = {.lex_state = 19, .external_lex_state = 8},
  [44] = {.lex_state = 19, .external_lex_state = 9},
  [45] = {.lex_state = 19, .external_lex_state = 9},
  [46] = {.lex_state = 19, .external_lex_state = 9},
  [47] = {.lex_state = 19, .external_lex_state = 9},
  [48] = {.lex_state = 19, .external_lex_state = 9},
  [49] = {.lex_state = 19, .external_lex_state = 9},
  [50] = {.lex_state = 19, .external_lex_state = 9},
  [51] = {.lex_state = 19, .external_lex_state = 9},
  [52] = {.lex_state = 19, .external_lex_state = 9},
  [53] = {.lex_state = 19, .external_lex_state = 9},
  [54] = {.lex_state = 20, .external_lex_state = 2},
  [55] = {.lex_state = 19, .external_lex_state = 9},
  [56] = {.lex_state = 19, .external_lex_state = 9},
  [57] = {.lex_state = 19, .external_lex_state = 9},
  [58] = {.lex_state = 19, .external_lex_state = 9},
  [59] = {.lex_state = 21, .external_lex_state = 2},
  [60] = {.lex_state = 24, .external_lex_state = 2},
  [61] = {.lex_state = 25, .external_lex_state = 2},
  [62] = {.lex_state = 24, .external_lex_state = 2},
  [63] = {.lex_state = 21, .external_lex_state = 2},
  [64] = {.lex_state = 24, .external_lex_state = 2},
  [65] = {.lex_state = 21, .external_lex_state = 2},
  [66] = {.lex_state = 24, .external_lex_state = 2},
  [67] = {.lex_state = 20, .external_lex_state = 2},
  [68] = {.lex_state = 23, .external_lex_state = 10},
  [69] = {.lex_state = 23, .external_lex_state = 10},
  [70] = {.lex_state = 23, .external_lex_state = 10},
  [71] = {.lex_state = 23, .external_lex_state = 10},
  [72] = {.lex_state = 23, .external_lex_state = 10},
  [73] = {.lex_state = 23, .external_lex_state = 10},
  [74] = {.lex_state = 23, .external_lex_state = 10},
  [75] = {.lex_state = 21, .external_lex_state = 2},
  [76] = {.lex_state = 21, .external_lex_state = 7},
  [77] = {.lex_state = 21, .external_lex_state = 2},
  [78] = {.lex_state = 21, .external_lex_state = 6},
  [79] = {.lex_state = 21, .external_lex_state = 6},
  [80] = {.lex_state = 21, .external_lex_state = 2},
  [81] = {.lex_state = 21, .external_lex_state = 7},
  [82] = {.lex_state = 21, .external_lex_state = 6},
  [83] = {.lex_state = 0, .external_lex_state = 6},
  [84] = {.lex_state = 21, .external_lex_state = 7},
  [85] = {.lex_state = 21, .external_lex_state = 7},
  [86] = {.lex_state = 21, .external_lex_state = 2},
  [87] = {.lex_state = 21, .external_lex_state = 6},
  [88] = {.lex_state = 21, .external_lex_state = 6},
  [89] = {.lex_state = 21, .external_lex_state = 2},
  [90] = {.lex_state = 21, .external_lex_state = 2},
  [91] = {.lex_state = 21, .external_lex_state = 2},
  [92] = {.lex_state = 21, .external_lex_state = 6},
  [93] = {.lex_state = 0, .external_lex_state = 11},
  [94] = {.lex_state = 21, .external_lex_state = 7},
  [95] = {.lex_state = 21, .external_lex_state = 7},
  [96] = {.lex_state = 21, .external_lex_state = 6},
  [97] = {.lex_state = 21, .external_lex_state = 7},
  [98] = {.lex_state = 115, .external_lex_state = 2},
  [99] = {.lex_state = 115, .external_lex_state = 2},
  [100] = {.lex_state = 115, .external_lex_state = 2},
  [101] = {.lex_state = 115, .external_lex_state = 2},
  [102] = {.lex_state = 115, .external_lex_state = 2},
  [103] = {.lex_state = 115, .external_lex_state = 2},
  [104] = {.lex_state = 115, .external_lex_state = 2},
  [105] = {.lex_state = 22, .external_lex_state = 12},
  [106] = {.lex_state = 115, .external_lex_state = 2},
  [107] = {.lex_state = 19, .external_lex_state = 5},
  [108] = {.lex_state = 115, .external_lex_state = 2},
  [109] = {.lex_state = 115, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 6},
  [111] = {.lex_state = 115, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 11},
  [113] = {.lex_state = 0, .external_lex_state = 6},
  [114] = {.lex_state = 0, .external_lex_state = 6},
  [115] = {.lex_state = 0, .external_lex_state = 6},
  [116] = {.lex_state = 23, .external_lex_state = 10},
  [117] = {.lex_state = 0, .external_lex_state = 6},
  [118] = {.lex_state = 0, .external_lex_state = 6},
  [119] = {.lex_state = 23, .external_lex_state = 10},
  [120] = {.lex_state = 0, .external_lex_state = 6},
  [121] = {.lex_state = 0, .external_lex_state = 6},
  [122] = {.lex_state = 0, .external_lex_state = 6},
  [123] = {.lex_state = 0, .external_lex_state = 6},
  [124] = {.lex_state = 0, .external_lex_state = 6},
  [125] = {.lex_state = 0, .external_lex_state = 6},
  [126] = {.lex_state = 0, .external_lex_state = 6},
  [127] = {.lex_state = 0, .external_lex_state = 6},
  [128] = {.lex_state = 0, .external_lex_state = 6},
  [129] = {.lex_state = 0, .external_lex_state = 6},
  [130] = {.lex_state = 23, .external_lex_state = 10},
  [131] = {.lex_state = 23, .external_lex_state = 10},
  [132] = {.lex_state = 0, .external_lex_state = 6},
  [133] = {.lex_state = 0, .external_lex_state = 11},
  [134] = {.lex_state = 0, .external_lex_state = 11},
  [135] = {.lex_state = 22, .external_lex_state = 12},
  [136] = {.lex_state = 22, .external_lex_state = 12},
  [137] = {.lex_state = 22, .external_lex_state = 12},
  [138] = {.lex_state = 0, .external_lex_state = 11},
  [139] = {.lex_state = 0, .external_lex_state = 11},
  [140] = {.lex_state = 22, .external_lex_state = 12},
  [141] = {.lex_state = 22, .external_lex_state = 12},
  [142] = {.lex_state = 0, .external_lex_state = 11},
  [143] = {.lex_state = 22, .external_lex_state = 12},
  [144] = {.lex_state = 22, .external_lex_state = 12},
  [145] = {.lex_state = 0, .external_lex_state = 6},
  [146] = {.lex_state = 22, .external_lex_state = 12},
  [147] = {.lex_state = 22, .external_lex_state = 12},
  [148] = {.lex_state = 22, .external_lex_state = 12},
  [149] = {.lex_state = 22, .external_lex_state = 12},
  [150] = {.lex_state = 0, .external_lex_state = 11},
  [151] = {.lex_state = 22, .external_lex_state = 12},
  [152] = {.lex_state = 22, .external_lex_state = 12},
  [153] = {.lex_state = 0, .external_lex_state = 11},
  [154] = {.lex_state = 0, .external_lex_state = 11},
  [155] = {.lex_state = 0, .external_lex_state = 11},
  [156] = {.lex_state = 22, .external_lex_state = 12},
  [157] = {.lex_state = 0, .external_lex_state = 6},
  [158] = {.lex_state = 0, .external_lex_state = 11},
  [159] = {.lex_state = 0, .external_lex_state = 11},
  [160] = {.lex_state = 0, .external_lex_state = 6},
  [161] = {.lex_state = 0, .external_lex_state = 11},
  [162] = {.lex_state = 0, .external_lex_state = 11},
  [163] = {.lex_state = 0, .external_lex_state = 11},
  [164] = {.lex_state = 0, .external_lex_state = 11},
  [165] = {.lex_state = 114, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 6},
  [167] = {.lex_state = 0, .external_lex_state = 6},
  [168] = {.lex_state = 0, .external_lex_state = 6},
  [169] = {.lex_state = 0, .external_lex_state = 7},
  [170] = {.lex_state = 0, .external_lex_state = 6},
  [171] = {.lex_state = 0, .external_lex_state = 6},
  [172] = {.lex_state = 0, .external_lex_state = 6},
  [173] = {.lex_state = 0, .external_lex_state = 7},
  [174] = {.lex_state = 0, .external_lex_state = 7},
  [175] = {.lex_state = 0, .external_lex_state = 6},
  [176] = {.lex_state = 114, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 6},
  [178] = {.lex_state = 114, .external_lex_state = 2},
  [179] = {.lex_state = 114, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 6},
  [181] = {.lex_state = 114, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 7},
  [183] = {.lex_state = 0, .external_lex_state = 7},
  [184] = {.lex_state = 0, .external_lex_state = 6},
  [185] = {.lex_state = 114, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 7},
  [187] = {.lex_state = 0, .external_lex_state = 6},
  [188] = {.lex_state = 114, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 6},
  [190] = {.lex_state = 0, .external_lex_state = 7},
  [191] = {.lex_state = 114, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 7},
  [193] = {.lex_state = 0, .external_lex_state = 11},
  [194] = {.lex_state = 0, .external_lex_state = 6},
  [195] = {.lex_state = 0, .external_lex_state = 11},
  [196] = {.lex_state = 0, .external_lex_state = 11},
  [197] = {.lex_state = 296, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 6},
  [199] = {.lex_state = 227, .external_lex_state = 2},
  [200] = {.lex_state = 227, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 6},
  [202] = {.lex_state = 0, .external_lex_state = 6},
  [203] = {.lex_state = 0, .external_lex_state = 7},
  [204] = {.lex_state = 114, .external_lex_state = 12},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 7},
  [207] = {.lex_state = 0, .external_lex_state = 6},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 11},
  [210] = {.lex_state = 114, .external_lex_state = 12},
  [211] = {.lex_state = 0, .external_lex_state = 11},
  [212] = {.lex_state = 0, .external_lex_state = 11},
  [213] = {.lex_state = 0, .external_lex_state = 6},
  [214] = {.lex_state = 0, .external_lex_state = 6},
  [215] = {.lex_state = 0, .external_lex_state = 6},
  [216] = {.lex_state = 26, .external_lex_state = 2},
  [217] = {.lex_state = 296, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 11},
  [219] = {.lex_state = 0, .external_lex_state = 6},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 114, .external_lex_state = 12},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 7},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 114, .external_lex_state = 2},
  [226] = {.lex_state = 114, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 11},
  [228] = {.lex_state = 0, .external_lex_state = 11},
  [229] = {.lex_state = 0, .external_lex_state = 6},
  [230] = {.lex_state = 0, .external_lex_state = 6},
  [231] = {.lex_state = 0, .external_lex_state = 6},
  [232] = {.lex_state = 0, .external_lex_state = 11},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 26, .external_lex_state = 2},
  [237] = {.lex_state = 26, .external_lex_state = 2},
  [238] = {.lex_state = 114, .external_lex_state = 2},
  [239] = {.lex_state = 26, .external_lex_state = 2},
  [240] = {.lex_state = 26, .external_lex_state = 2},
  [241] = {.lex_state = 227, .external_lex_state = 2},
  [242] = {.lex_state = 227, .external_lex_state = 2},
  [243] = {.lex_state = 26, .external_lex_state = 2},
  [244] = {.lex_state = 26, .external_lex_state = 2},
  [245] = {.lex_state = 114, .external_lex_state = 2},
  [246] = {.lex_state = 114, .external_lex_state = 2},
  [247] = {.lex_state = 115, .external_lex_state = 2},
  [248] = {.lex_state = 227, .external_lex_state = 2},
  [249] = {.lex_state = 227, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 0, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token__string_start = 3,
  ts_external_token_string_content = 4,
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
  [ts_external_token_string_content] = sym_string_content,
  [ts_external_token__string_end] = sym__string_end,
  [ts_external_token__regex_start] = sym__regex_start,
  [ts_external_token__regex_content] = sym__regex_content,
  [ts_external_token__regex_end] = sym__regex_end,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_RBRACK] = anon_sym_RBRACK,
  [ts_external_token_RPAREN] = anon_sym_RPAREN,
  [ts_external_token_RBRACE] = anon_sym_RBRACE,
};

static const bool ts_external_scanner_states[13][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token_string_content] = true,
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
    [ts_external_token_string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACE] = true,
  },
  [4] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
  },
  [7] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACK] = true,
  },
  [8] = {
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
  },
  [9] = {
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [10] = {
    [ts_external_token_string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACE] = true,
  },
  [11] = {
    [ts_external_token__newline] = true,
    [ts_external_token_comment] = true,
  },
  [12] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACE] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_docstring] = ACTIONS(1),
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
    [anon_sym_EQ] = ACTIONS(1),
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
    [sym_string_content] = ACTIONS(1),
    [sym__string_end] = ACTIONS(1),
    [sym__regex_start] = ACTIONS(1),
    [sym__regex_content] = ACTIONS(1),
    [sym__regex_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(235),
    [sym_context] = STATE(5),
    [sym__optional_or] = STATE(233),
    [sym_or] = STATE(233),
    [sym__optional_and] = STATE(15),
    [sym_and] = STATE(15),
    [sym__optional_not] = STATE(62),
    [sym_not] = STATE(62),
    [sym_match] = STATE(62),
    [sym__generic_match] = STATE(232),
    [sym__prioritized_match] = STATE(228),
    [sym_include_tag] = STATE(3),
    [sym_settings] = STATE(3),
    [sym_command] = STATE(3),
    [sym_rule] = STATE(226),
    [sym__optional_choice] = STATE(225),
    [sym_choice] = STATE(225),
    [sym__optional_anchor] = STATE(176),
    [sym__optional_seq] = STATE(165),
    [sym_seq] = STATE(165),
    [sym__primary_rule] = STATE(25),
    [sym_list] = STATE(25),
    [sym_capture] = STATE(25),
    [sym_optional] = STATE(25),
    [sym_repeat] = STATE(25),
    [sym_repeat1] = STATE(25),
    [sym_parenthesized_rule] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_context_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_docstring] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_os] = ACTIONS(13),
    [anon_sym_tag] = ACTIONS(13),
    [anon_sym_mode] = ACTIONS(13),
    [anon_sym_app] = ACTIONS(13),
    [anon_sym_app_DOTname] = ACTIONS(13),
    [anon_sym_app_DOTexe] = ACTIONS(13),
    [anon_sym_app_DOTbundle] = ACTIONS(13),
    [anon_sym_title] = ACTIONS(13),
    [anon_sym_code_DOTlanguage] = ACTIONS(13),
    [anon_sym_language] = ACTIONS(13),
    [anon_sym_tag_LPAREN_RPAREN] = ACTIONS(15),
    [anon_sym_settings_LPAREN_RPAREN] = ACTIONS(17),
    [sym_start_anchor] = ACTIONS(19),
    [sym_word] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_tag_LPAREN_RPAREN,
    ACTIONS(38), 1,
      anon_sym_settings_LPAREN_RPAREN,
    ACTIONS(41), 1,
      sym_start_anchor,
    ACTIONS(44), 1,
      sym_word,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym__optional_anchor,
    STATE(226), 1,
      sym_rule,
    STATE(165), 2,
      sym__optional_seq,
      sym_seq,
    STATE(225), 2,
      sym__optional_choice,
      sym_choice,
    STATE(2), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(25), 7,
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
    ACTIONS(15), 1,
      anon_sym_tag_LPAREN_RPAREN,
    ACTIONS(17), 1,
      anon_sym_settings_LPAREN_RPAREN,
    ACTIONS(19), 1,
      sym_start_anchor,
    ACTIONS(21), 1,
      sym_word,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(176), 1,
      sym__optional_anchor,
    STATE(226), 1,
      sym_rule,
    STATE(165), 2,
      sym__optional_seq,
      sym_seq,
    STATE(225), 2,
      sym__optional_choice,
      sym_choice,
    STATE(2), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(25), 7,
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
    ACTIONS(15), 1,
      anon_sym_tag_LPAREN_RPAREN,
    ACTIONS(17), 1,
      anon_sym_settings_LPAREN_RPAREN,
    ACTIONS(19), 1,
      sym_start_anchor,
    ACTIONS(21), 1,
      sym_word,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(176), 1,
      sym__optional_anchor,
    STATE(226), 1,
      sym_rule,
    STATE(165), 2,
      sym__optional_seq,
      sym_seq,
    STATE(225), 2,
      sym__optional_choice,
      sym_choice,
    STATE(2), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(25), 7,
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
    ACTIONS(15), 1,
      anon_sym_tag_LPAREN_RPAREN,
    ACTIONS(17), 1,
      anon_sym_settings_LPAREN_RPAREN,
    ACTIONS(19), 1,
      sym_start_anchor,
    ACTIONS(21), 1,
      sym_word,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(176), 1,
      sym__optional_anchor,
    STATE(226), 1,
      sym_rule,
    STATE(165), 2,
      sym__optional_seq,
      sym_seq,
    STATE(225), 2,
      sym__optional_choice,
      sym_choice,
    STATE(4), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(25), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [240] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_docstring,
    ACTIONS(65), 1,
      anon_sym_DASH,
    STATE(54), 1,
      aux_sym_context_repeat1,
    STATE(228), 1,
      sym__prioritized_match,
    STATE(232), 1,
      sym__generic_match,
    STATE(15), 2,
      sym__optional_and,
      sym_and,
    STATE(224), 2,
      sym__optional_or,
      sym_or,
    STATE(62), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(13), 10,
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
  [290] = 10,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_key,
    ACTIONS(75), 1,
      anon_sym_sleep,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym__string_start,
    ACTIONS(79), 2,
      sym_integer,
      sym_float,
    ACTIONS(83), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(69), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(140), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [335] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_docstring,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_key,
    ACTIONS(91), 1,
      anon_sym_sleep,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      sym_integer,
    ACTIONS(97), 1,
      sym_float,
    ACTIONS(99), 1,
      sym__newline,
    ACTIONS(101), 1,
      sym__indent,
    ACTIONS(103), 1,
      sym__string_start,
    STATE(108), 1,
      sym__statement_suite,
    STATE(111), 1,
      sym__simple_statement,
    STATE(218), 2,
      sym_assignment,
      sym_expression,
    STATE(154), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [389] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_key,
    ACTIONS(91), 1,
      anon_sym_sleep,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      sym_integer,
    ACTIONS(97), 1,
      sym_float,
    ACTIONS(103), 1,
      sym__string_start,
    ACTIONS(105), 1,
      sym_docstring,
    ACTIONS(107), 1,
      sym__dedent,
    STATE(101), 1,
      sym_block,
    STATE(12), 2,
      sym__simple_statement,
      aux_sym_block_repeat1,
    STATE(193), 2,
      sym_assignment,
      sym_expression,
    STATE(154), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [441] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_docstring,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_key,
    ACTIONS(91), 1,
      anon_sym_sleep,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      sym_integer,
    ACTIONS(97), 1,
      sym_float,
    ACTIONS(99), 1,
      sym__newline,
    ACTIONS(101), 1,
      sym__indent,
    ACTIONS(103), 1,
      sym__string_start,
    STATE(106), 1,
      sym__statement_suite,
    STATE(111), 1,
      sym__simple_statement,
    STATE(218), 2,
      sym_assignment,
      sym_expression,
    STATE(154), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [495] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_docstring,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_key,
    ACTIONS(118), 1,
      anon_sym_sleep,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(127), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__dedent,
    ACTIONS(132), 1,
      sym__string_start,
    STATE(11), 2,
      sym__simple_statement,
      aux_sym_block_repeat1,
    STATE(193), 2,
      sym_assignment,
      sym_expression,
    STATE(154), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [544] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_key,
    ACTIONS(91), 1,
      anon_sym_sleep,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      sym_integer,
    ACTIONS(97), 1,
      sym_float,
    ACTIONS(103), 1,
      sym__string_start,
    ACTIONS(105), 1,
      sym_docstring,
    ACTIONS(135), 1,
      sym__dedent,
    STATE(11), 2,
      sym__simple_statement,
      aux_sym_block_repeat1,
    STATE(193), 2,
      sym_assignment,
      sym_expression,
    STATE(154), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [593] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      anon_sym_not,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(228), 1,
      sym__prioritized_match,
    STATE(232), 1,
      sym__generic_match,
    STATE(13), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(62), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(142), 10,
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
  [634] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(148), 1,
      anon_sym_DASH,
    STATE(228), 1,
      sym__prioritized_match,
    STATE(232), 1,
      sym__generic_match,
    STATE(13), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(62), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(13), 10,
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
  [675] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_DASH,
    STATE(228), 1,
      sym__prioritized_match,
    STATE(232), 1,
      sym__generic_match,
    STATE(14), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(62), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(13), 10,
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
  [716] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(228), 1,
      sym__prioritized_match,
    STATE(232), 1,
      sym__generic_match,
    STATE(67), 2,
      sym__optional_and,
      sym_and,
    STATE(62), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(13), 10,
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
  [753] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_word,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_STAR,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      aux_sym_seq_repeat1,
    ACTIONS(152), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(79), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [795] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_start_anchor,
    ACTIONS(170), 1,
      sym_word,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_LT,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym__optional_anchor,
    STATE(173), 2,
      sym__optional_seq,
      sym_seq,
    STATE(206), 2,
      sym__optional_choice,
      sym_choice,
    STATE(21), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [837] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_start_anchor,
    ACTIONS(170), 1,
      sym_word,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_LT,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym__optional_anchor,
    STATE(173), 2,
      sym__optional_seq,
      sym_seq,
    STATE(203), 2,
      sym__optional_choice,
      sym_choice,
    STATE(21), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [879] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      sym_start_anchor,
    ACTIONS(182), 1,
      sym_word,
    STATE(167), 1,
      sym__optional_anchor,
    STATE(168), 2,
      sym__optional_seq,
      sym_seq,
    STATE(198), 2,
      sym__optional_choice,
      sym_choice,
    STATE(17), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [921] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_LT,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      sym_word,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_PLUS,
    STATE(29), 1,
      aux_sym_seq_repeat1,
    ACTIONS(152), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(94), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [963] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_start_anchor,
    ACTIONS(170), 1,
      sym_word,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_LT,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym__optional_anchor,
    STATE(173), 2,
      sym__optional_seq,
      sym_seq,
    STATE(223), 2,
      sym__optional_choice,
      sym_choice,
    STATE(21), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1005] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      sym_start_anchor,
    ACTIONS(182), 1,
      sym_word,
    STATE(167), 1,
      sym__optional_anchor,
    STATE(168), 2,
      sym__optional_seq,
      sym_seq,
    STATE(194), 2,
      sym__optional_choice,
      sym_choice,
    STATE(17), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1047] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      sym_start_anchor,
    ACTIONS(182), 1,
      sym_word,
    STATE(167), 1,
      sym__optional_anchor,
    STATE(168), 2,
      sym__optional_seq,
      sym_seq,
    STATE(207), 2,
      sym__optional_choice,
      sym_choice,
    STATE(17), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1089] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      sym_word,
    ACTIONS(192), 1,
      anon_sym_STAR,
    ACTIONS(194), 1,
      anon_sym_PLUS,
    STATE(40), 1,
      aux_sym_seq_repeat1,
    ACTIONS(152), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(80), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1131] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    ACTIONS(200), 1,
      anon_sym_key,
    ACTIONS(202), 1,
      anon_sym_sleep,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      sym_integer,
    ACTIONS(210), 1,
      sym_float,
    ACTIONS(212), 1,
      sym__string_start,
    STATE(114), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1172] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_key,
    ACTIONS(202), 1,
      anon_sym_sleep,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym__string_start,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      sym_integer,
    ACTIONS(220), 1,
      sym_float,
    STATE(110), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1213] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_key,
    ACTIONS(202), 1,
      anon_sym_sleep,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym__string_start,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      sym_integer,
    ACTIONS(228), 1,
      sym_float,
    STATE(113), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1254] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_LT,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      sym_word,
    STATE(38), 1,
      aux_sym_seq_repeat1,
    ACTIONS(230), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(94), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1290] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_start_anchor,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      sym_word,
    STATE(191), 1,
      sym__optional_anchor,
    STATE(165), 2,
      sym__optional_seq,
      sym_seq,
    STATE(25), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1328] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_word,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      aux_sym_seq_repeat1,
    ACTIONS(230), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(79), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1364] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_key,
    ACTIONS(202), 1,
      anon_sym_sleep,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym__string_start,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    ACTIONS(236), 1,
      sym_integer,
    ACTIONS(238), 1,
      sym_float,
    STATE(115), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1402] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_key,
    ACTIONS(202), 1,
      anon_sym_sleep,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym__string_start,
    ACTIONS(236), 1,
      sym_integer,
    ACTIONS(238), 1,
      sym_float,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(115), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1440] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_key,
    ACTIONS(202), 1,
      anon_sym_sleep,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym__string_start,
    ACTIONS(236), 1,
      sym_integer,
    ACTIONS(238), 1,
      sym_float,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    STATE(115), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1478] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_key,
    ACTIONS(202), 1,
      anon_sym_sleep,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym__string_start,
    ACTIONS(236), 1,
      sym_integer,
    ACTIONS(238), 1,
      sym_float,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(115), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1516] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_key,
    ACTIONS(202), 1,
      anon_sym_sleep,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym__string_start,
    ACTIONS(236), 1,
      sym_integer,
    ACTIONS(238), 1,
      sym_float,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(115), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1554] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      sym_start_anchor,
    ACTIONS(182), 1,
      sym_word,
    STATE(184), 1,
      sym__optional_anchor,
    STATE(168), 2,
      sym__optional_seq,
      sym_seq,
    STATE(17), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1592] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_word,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_LT,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      aux_sym_seq_repeat1,
    ACTIONS(248), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(94), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1628] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_start_anchor,
    ACTIONS(170), 1,
      sym_word,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_LT,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    STATE(192), 1,
      sym__optional_anchor,
    STATE(173), 2,
      sym__optional_seq,
      sym_seq,
    STATE(21), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1666] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      sym_word,
    STATE(41), 1,
      aux_sym_seq_repeat1,
    ACTIONS(230), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(80), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1702] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_word,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(271), 1,
      anon_sym_LT,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      aux_sym_seq_repeat1,
    ACTIONS(248), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(80), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1738] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_word,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    ACTIONS(286), 1,
      anon_sym_LT,
    ACTIONS(289), 1,
      anon_sym_LBRACK,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      aux_sym_seq_repeat1,
    ACTIONS(248), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(79), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1774] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_key,
    ACTIONS(202), 1,
      anon_sym_sleep,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym__string_start,
    ACTIONS(236), 1,
      sym_integer,
    ACTIONS(238), 1,
      sym_float,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(115), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1812] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_key,
    ACTIONS(91), 1,
      anon_sym_sleep,
    ACTIONS(103), 1,
      sym__string_start,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(299), 1,
      sym_integer,
    ACTIONS(301), 1,
      sym_float,
    STATE(150), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1847] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_key,
    ACTIONS(91), 1,
      anon_sym_sleep,
    ACTIONS(103), 1,
      sym__string_start,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_integer,
    ACTIONS(305), 1,
      sym_float,
    STATE(158), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1882] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_key,
    ACTIONS(91), 1,
      anon_sym_sleep,
    ACTIONS(103), 1,
      sym__string_start,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_integer,
    ACTIONS(309), 1,
      sym_float,
    STATE(164), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1917] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_key,
    ACTIONS(202), 1,
      anon_sym_sleep,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym__string_start,
    ACTIONS(311), 1,
      sym_integer,
    ACTIONS(313), 1,
      sym_float,
    STATE(123), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1952] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_key,
    ACTIONS(202), 1,
      anon_sym_sleep,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym__string_start,
    ACTIONS(236), 1,
      sym_integer,
    ACTIONS(238), 1,
      sym_float,
    STATE(115), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1987] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_key,
    ACTIONS(202), 1,
      anon_sym_sleep,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym__string_start,
    ACTIONS(315), 1,
      sym_integer,
    ACTIONS(317), 1,
      sym_float,
    STATE(122), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2022] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_key,
    ACTIONS(202), 1,
      anon_sym_sleep,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym__string_start,
    ACTIONS(319), 1,
      sym_integer,
    ACTIONS(321), 1,
      sym_float,
    STATE(121), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2057] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_key,
    ACTIONS(75), 1,
      anon_sym_sleep,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym__string_start,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    ACTIONS(325), 1,
      sym_integer,
    ACTIONS(327), 1,
      sym_float,
    STATE(137), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2092] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_key,
    ACTIONS(202), 1,
      anon_sym_sleep,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym__string_start,
    ACTIONS(329), 1,
      sym_integer,
    ACTIONS(331), 1,
      sym_float,
    STATE(160), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2127] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_key,
    ACTIONS(202), 1,
      anon_sym_sleep,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym__string_start,
    ACTIONS(333), 1,
      sym_integer,
    ACTIONS(335), 1,
      sym_float,
    STATE(157), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2162] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_docstring,
    ACTIONS(340), 1,
      anon_sym_DASH,
    STATE(54), 1,
      aux_sym_context_repeat1,
    ACTIONS(342), 12,
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
  [2189] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_key,
    ACTIONS(75), 1,
      anon_sym_sleep,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym__string_start,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      sym_integer,
    ACTIONS(346), 1,
      sym_float,
    STATE(136), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2224] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_key,
    ACTIONS(75), 1,
      anon_sym_sleep,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym__string_start,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      sym_integer,
    ACTIONS(350), 1,
      sym_float,
    STATE(135), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2259] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_key,
    ACTIONS(91), 1,
      anon_sym_sleep,
    ACTIONS(103), 1,
      sym__string_start,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(352), 1,
      sym_integer,
    ACTIONS(354), 1,
      sym_float,
    STATE(134), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2294] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      anon_sym_key,
    ACTIONS(202), 1,
      anon_sym_sleep,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym__string_start,
    ACTIONS(356), 1,
      sym_integer,
    ACTIONS(358), 1,
      sym_float,
    STATE(145), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2329] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_word,
    ACTIONS(172), 1,
      anon_sym_LBRACE,
    ACTIONS(174), 1,
      anon_sym_LT,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    STATE(182), 2,
      sym__optional_seq,
      sym_seq,
    STATE(21), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_DASH,
    ACTIONS(362), 13,
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
  [2383] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(64), 1,
      sym_match,
    STATE(228), 1,
      sym__prioritized_match,
    STATE(232), 1,
      sym__generic_match,
    ACTIONS(13), 10,
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
  [2411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_DASH,
    ACTIONS(366), 1,
      anon_sym_and,
    ACTIONS(368), 12,
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
  [2435] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      sym_word,
    STATE(170), 2,
      sym__optional_seq,
      sym_seq,
    STATE(17), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(372), 13,
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
  [2489] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      sym_word,
    STATE(179), 2,
      sym__optional_seq,
      sym_seq,
    STATE(25), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_DASH,
    ACTIONS(362), 13,
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
  [2543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(376), 12,
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
  [2564] = 10,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    ACTIONS(384), 1,
      sym_string_escape_sequence,
    ACTIONS(386), 1,
      sym__not_escapesequence,
    ACTIONS(388), 1,
      sym_string_content,
    ACTIONS(390), 1,
      sym__string_end,
    ACTIONS(382), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(74), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(116), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2598] = 10,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(401), 1,
      sym_string_escape_sequence,
    ACTIONS(404), 1,
      sym__not_escapesequence,
    ACTIONS(407), 1,
      sym_string_content,
    ACTIONS(410), 1,
      sym__string_end,
    ACTIONS(398), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(69), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(116), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2632] = 10,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    ACTIONS(386), 1,
      sym__not_escapesequence,
    ACTIONS(412), 1,
      sym_string_escape_sequence,
    ACTIONS(414), 1,
      sym_string_content,
    ACTIONS(416), 1,
      sym__string_end,
    ACTIONS(382), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(69), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(116), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2666] = 10,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    ACTIONS(386), 1,
      sym__not_escapesequence,
    ACTIONS(418), 1,
      sym_string_escape_sequence,
    ACTIONS(420), 1,
      sym_string_content,
    ACTIONS(422), 1,
      sym__string_end,
    ACTIONS(382), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(70), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(116), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2700] = 10,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    ACTIONS(386), 1,
      sym__not_escapesequence,
    ACTIONS(412), 1,
      sym_string_escape_sequence,
    ACTIONS(414), 1,
      sym_string_content,
    ACTIONS(424), 1,
      sym__string_end,
    ACTIONS(382), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(69), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(116), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2734] = 10,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    ACTIONS(386), 1,
      sym__not_escapesequence,
    ACTIONS(426), 1,
      sym_string_escape_sequence,
    ACTIONS(428), 1,
      sym_string_content,
    ACTIONS(430), 1,
      sym__string_end,
    ACTIONS(382), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(72), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(116), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2768] = 10,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    ACTIONS(386), 1,
      sym__not_escapesequence,
    ACTIONS(412), 1,
      sym_string_escape_sequence,
    ACTIONS(414), 1,
      sym_string_content,
    ACTIONS(432), 1,
      sym__string_end,
    ACTIONS(382), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(69), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(116), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 10,
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
  [2818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 10,
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
  [2834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 10,
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
  [2850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 10,
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
  [2866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_STAR,
    ACTIONS(164), 1,
      anon_sym_PLUS,
    ACTIONS(442), 8,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_STAR,
    ACTIONS(194), 1,
      anon_sym_PLUS,
    ACTIONS(442), 8,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [2906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 10,
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
  [2922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 10,
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
  [2938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym_argument_list,
    ACTIONS(444), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 10,
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
  [2974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 10,
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
  [2990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 10,
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
  [3006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 10,
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
  [3022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 10,
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
  [3038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 10,
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
  [3054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 10,
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
  [3070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 10,
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
  [3086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 10,
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
  [3102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_EQ,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_argument_list,
    ACTIONS(444), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(188), 1,
      anon_sym_PLUS,
    ACTIONS(442), 8,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 10,
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
  [3160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 10,
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
  [3176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 10,
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
  [3192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_word,
    ACTIONS(456), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_word,
    ACTIONS(460), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_word,
    ACTIONS(464), 8,
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
    ACTIONS(470), 1,
      sym_word,
    ACTIONS(468), 8,
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
    ACTIONS(474), 1,
      sym_word,
    ACTIONS(472), 8,
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
    ACTIONS(478), 1,
      sym_word,
    ACTIONS(476), 8,
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
    ACTIONS(482), 1,
      sym_word,
    ACTIONS(480), 8,
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
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym_argument_list,
    ACTIONS(444), 7,
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
    ACTIONS(488), 1,
      sym_word,
    ACTIONS(486), 8,
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
    ACTIONS(464), 4,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(466), 5,
      sym_docstring,
      anon_sym_key,
      anon_sym_sleep,
      sym_identifier,
      sym_integer,
  [3364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym_word,
    ACTIONS(490), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym_word,
    ACTIONS(494), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3398] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    ACTIONS(504), 1,
      anon_sym_or,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(498), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(500), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_word,
    ACTIONS(508), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_argument_list,
    ACTIONS(444), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3459] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_or,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(498), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(500), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3484] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_or,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(498), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(500), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3509] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_or,
    ACTIONS(498), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(500), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3529] = 3,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(522), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3573] = 3,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(532), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(530), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(500), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(536), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [3621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(536), 5,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [3651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3735] = 3,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(83), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(69), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3751] = 3,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(552), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(550), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 2,
      anon_sym_RBRACE,
      anon_sym_or,
    ACTIONS(556), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(558), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(536), 4,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_or,
  [3852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3878] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
    ACTIONS(562), 1,
      anon_sym_or,
    ACTIONS(556), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(558), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3949] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_or,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    ACTIONS(498), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(500), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4020] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_or,
    ACTIONS(572), 1,
      sym__newline,
    ACTIONS(566), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(568), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4078] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_or,
    ACTIONS(574), 1,
      sym__newline,
    ACTIONS(566), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(568), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_or,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    ACTIONS(498), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(500), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(536), 4,
      sym__newline,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
  [4157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_or,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    ACTIONS(498), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(500), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 2,
      sym__newline,
      anon_sym_or,
    ACTIONS(566), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(568), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_end_anchor,
    ACTIONS(580), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_PIPE,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_choice_repeat1,
  [4269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_PIPE,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      aux_sym_choice_repeat1,
  [4282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym_end_anchor,
    ACTIONS(580), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_PIPE,
    ACTIONS(597), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      aux_sym_choice_repeat1,
  [4306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym_end_anchor,
    ACTIONS(599), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_argument_list_repeat1,
  [4330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_PIPE,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_choice_repeat1,
  [4343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym_end_anchor,
    ACTIONS(580), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_RBRACK,
    ACTIONS(607), 1,
      anon_sym_PIPE,
    STATE(174), 1,
      aux_sym_choice_repeat1,
  [4367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_argument_list_repeat1,
  [4380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COLON,
    ACTIONS(612), 1,
      anon_sym_PIPE,
    STATE(178), 1,
      aux_sym_choice_repeat1,
  [4393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_argument_list_repeat1,
  [4406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_COLON,
    ACTIONS(612), 1,
      anon_sym_PIPE,
    STATE(181), 1,
      aux_sym_choice_repeat1,
  [4419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      sym_end_anchor,
    ACTIONS(599), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_argument_list_repeat1,
  [4443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_COLON,
    ACTIONS(621), 1,
      anon_sym_PIPE,
    STATE(181), 1,
      aux_sym_choice_repeat1,
  [4456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym_end_anchor,
    ACTIONS(599), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_RBRACK,
    ACTIONS(595), 1,
      anon_sym_PIPE,
    STATE(169), 1,
      aux_sym_choice_repeat1,
  [4480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym__newline,
  [4559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
  [4566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      sym__newline,
  [4573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym__newline,
  [4580] = 2,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym_implicit_string,
  [4587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
  [4594] = 2,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(640), 1,
      aux_sym_key_action_token1,
  [4601] = 2,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(642), 1,
      aux_sym_key_action_token1,
  [4608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
  [4615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
  [4622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_RBRACK,
  [4629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
  [4636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_GT,
  [4643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_RBRACK,
  [4650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_RPAREN,
  [4657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_GT,
  [4664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym__newline,
  [4671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
  [4678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      sym__newline,
  [4685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym__newline,
  [4692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
  [4699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
  [4706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
  [4713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym_identifier,
  [4720] = 2,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(674), 1,
      sym_implicit_string,
  [4727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym__newline,
  [4734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
  [4741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
  [4748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_RBRACE,
  [4755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_GT,
  [4762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_RBRACK,
  [4769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_DASH,
  [4776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_COLON,
  [4783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_COLON,
  [4790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym__newline,
  [4797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym__newline,
  [4804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
  [4811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
  [4818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
  [4825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym__newline,
  [4832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DASH,
  [4839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
  [4846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      ts_builtin_sym_end,
  [4853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      sym_identifier,
  [4860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym_identifier,
  [4867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_COLON,
  [4874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      sym_identifier,
  [4881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_identifier,
  [4888] = 2,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(716), 1,
      aux_sym_key_action_token1,
  [4895] = 2,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(718), 1,
      aux_sym_key_action_token1,
  [4902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      sym_identifier,
  [4909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_identifier,
  [4916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_COLON,
  [4923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_COLON,
  [4930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_COLON2,
  [4937] = 2,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(730), 1,
      aux_sym_key_action_token1,
  [4944] = 2,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(732), 1,
      aux_sym_key_action_token1,
  [4951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
  [4958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
  [4965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_LPAREN,
  [4972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 240,
  [SMALL_STATE(7)] = 290,
  [SMALL_STATE(8)] = 335,
  [SMALL_STATE(9)] = 389,
  [SMALL_STATE(10)] = 441,
  [SMALL_STATE(11)] = 495,
  [SMALL_STATE(12)] = 544,
  [SMALL_STATE(13)] = 593,
  [SMALL_STATE(14)] = 634,
  [SMALL_STATE(15)] = 675,
  [SMALL_STATE(16)] = 716,
  [SMALL_STATE(17)] = 753,
  [SMALL_STATE(18)] = 795,
  [SMALL_STATE(19)] = 837,
  [SMALL_STATE(20)] = 879,
  [SMALL_STATE(21)] = 921,
  [SMALL_STATE(22)] = 963,
  [SMALL_STATE(23)] = 1005,
  [SMALL_STATE(24)] = 1047,
  [SMALL_STATE(25)] = 1089,
  [SMALL_STATE(26)] = 1131,
  [SMALL_STATE(27)] = 1172,
  [SMALL_STATE(28)] = 1213,
  [SMALL_STATE(29)] = 1254,
  [SMALL_STATE(30)] = 1290,
  [SMALL_STATE(31)] = 1328,
  [SMALL_STATE(32)] = 1364,
  [SMALL_STATE(33)] = 1402,
  [SMALL_STATE(34)] = 1440,
  [SMALL_STATE(35)] = 1478,
  [SMALL_STATE(36)] = 1516,
  [SMALL_STATE(37)] = 1554,
  [SMALL_STATE(38)] = 1592,
  [SMALL_STATE(39)] = 1628,
  [SMALL_STATE(40)] = 1666,
  [SMALL_STATE(41)] = 1702,
  [SMALL_STATE(42)] = 1738,
  [SMALL_STATE(43)] = 1774,
  [SMALL_STATE(44)] = 1812,
  [SMALL_STATE(45)] = 1847,
  [SMALL_STATE(46)] = 1882,
  [SMALL_STATE(47)] = 1917,
  [SMALL_STATE(48)] = 1952,
  [SMALL_STATE(49)] = 1987,
  [SMALL_STATE(50)] = 2022,
  [SMALL_STATE(51)] = 2057,
  [SMALL_STATE(52)] = 2092,
  [SMALL_STATE(53)] = 2127,
  [SMALL_STATE(54)] = 2162,
  [SMALL_STATE(55)] = 2189,
  [SMALL_STATE(56)] = 2224,
  [SMALL_STATE(57)] = 2259,
  [SMALL_STATE(58)] = 2294,
  [SMALL_STATE(59)] = 2329,
  [SMALL_STATE(60)] = 2361,
  [SMALL_STATE(61)] = 2383,
  [SMALL_STATE(62)] = 2411,
  [SMALL_STATE(63)] = 2435,
  [SMALL_STATE(64)] = 2467,
  [SMALL_STATE(65)] = 2489,
  [SMALL_STATE(66)] = 2521,
  [SMALL_STATE(67)] = 2543,
  [SMALL_STATE(68)] = 2564,
  [SMALL_STATE(69)] = 2598,
  [SMALL_STATE(70)] = 2632,
  [SMALL_STATE(71)] = 2666,
  [SMALL_STATE(72)] = 2700,
  [SMALL_STATE(73)] = 2734,
  [SMALL_STATE(74)] = 2768,
  [SMALL_STATE(75)] = 2802,
  [SMALL_STATE(76)] = 2818,
  [SMALL_STATE(77)] = 2834,
  [SMALL_STATE(78)] = 2850,
  [SMALL_STATE(79)] = 2866,
  [SMALL_STATE(80)] = 2886,
  [SMALL_STATE(81)] = 2906,
  [SMALL_STATE(82)] = 2922,
  [SMALL_STATE(83)] = 2938,
  [SMALL_STATE(84)] = 2958,
  [SMALL_STATE(85)] = 2974,
  [SMALL_STATE(86)] = 2990,
  [SMALL_STATE(87)] = 3006,
  [SMALL_STATE(88)] = 3022,
  [SMALL_STATE(89)] = 3038,
  [SMALL_STATE(90)] = 3054,
  [SMALL_STATE(91)] = 3070,
  [SMALL_STATE(92)] = 3086,
  [SMALL_STATE(93)] = 3102,
  [SMALL_STATE(94)] = 3124,
  [SMALL_STATE(95)] = 3144,
  [SMALL_STATE(96)] = 3160,
  [SMALL_STATE(97)] = 3176,
  [SMALL_STATE(98)] = 3192,
  [SMALL_STATE(99)] = 3209,
  [SMALL_STATE(100)] = 3226,
  [SMALL_STATE(101)] = 3243,
  [SMALL_STATE(102)] = 3260,
  [SMALL_STATE(103)] = 3277,
  [SMALL_STATE(104)] = 3294,
  [SMALL_STATE(105)] = 3311,
  [SMALL_STATE(106)] = 3330,
  [SMALL_STATE(107)] = 3347,
  [SMALL_STATE(108)] = 3364,
  [SMALL_STATE(109)] = 3381,
  [SMALL_STATE(110)] = 3398,
  [SMALL_STATE(111)] = 3423,
  [SMALL_STATE(112)] = 3440,
  [SMALL_STATE(113)] = 3459,
  [SMALL_STATE(114)] = 3484,
  [SMALL_STATE(115)] = 3509,
  [SMALL_STATE(116)] = 3529,
  [SMALL_STATE(117)] = 3545,
  [SMALL_STATE(118)] = 3559,
  [SMALL_STATE(119)] = 3573,
  [SMALL_STATE(120)] = 3589,
  [SMALL_STATE(121)] = 3603,
  [SMALL_STATE(122)] = 3621,
  [SMALL_STATE(123)] = 3635,
  [SMALL_STATE(124)] = 3651,
  [SMALL_STATE(125)] = 3665,
  [SMALL_STATE(126)] = 3679,
  [SMALL_STATE(127)] = 3693,
  [SMALL_STATE(128)] = 3707,
  [SMALL_STATE(129)] = 3721,
  [SMALL_STATE(130)] = 3735,
  [SMALL_STATE(131)] = 3751,
  [SMALL_STATE(132)] = 3767,
  [SMALL_STATE(133)] = 3781,
  [SMALL_STATE(134)] = 3794,
  [SMALL_STATE(135)] = 3807,
  [SMALL_STATE(136)] = 3824,
  [SMALL_STATE(137)] = 3837,
  [SMALL_STATE(138)] = 3852,
  [SMALL_STATE(139)] = 3865,
  [SMALL_STATE(140)] = 3878,
  [SMALL_STATE(141)] = 3897,
  [SMALL_STATE(142)] = 3910,
  [SMALL_STATE(143)] = 3923,
  [SMALL_STATE(144)] = 3936,
  [SMALL_STATE(145)] = 3949,
  [SMALL_STATE(146)] = 3968,
  [SMALL_STATE(147)] = 3981,
  [SMALL_STATE(148)] = 3994,
  [SMALL_STATE(149)] = 4007,
  [SMALL_STATE(150)] = 4020,
  [SMALL_STATE(151)] = 4039,
  [SMALL_STATE(152)] = 4052,
  [SMALL_STATE(153)] = 4065,
  [SMALL_STATE(154)] = 4078,
  [SMALL_STATE(155)] = 4097,
  [SMALL_STATE(156)] = 4110,
  [SMALL_STATE(157)] = 4123,
  [SMALL_STATE(158)] = 4142,
  [SMALL_STATE(159)] = 4157,
  [SMALL_STATE(160)] = 4170,
  [SMALL_STATE(161)] = 4189,
  [SMALL_STATE(162)] = 4202,
  [SMALL_STATE(163)] = 4215,
  [SMALL_STATE(164)] = 4228,
  [SMALL_STATE(165)] = 4245,
  [SMALL_STATE(166)] = 4256,
  [SMALL_STATE(167)] = 4269,
  [SMALL_STATE(168)] = 4282,
  [SMALL_STATE(169)] = 4293,
  [SMALL_STATE(170)] = 4306,
  [SMALL_STATE(171)] = 4317,
  [SMALL_STATE(172)] = 4330,
  [SMALL_STATE(173)] = 4343,
  [SMALL_STATE(174)] = 4354,
  [SMALL_STATE(175)] = 4367,
  [SMALL_STATE(176)] = 4380,
  [SMALL_STATE(177)] = 4393,
  [SMALL_STATE(178)] = 4406,
  [SMALL_STATE(179)] = 4419,
  [SMALL_STATE(180)] = 4430,
  [SMALL_STATE(181)] = 4443,
  [SMALL_STATE(182)] = 4456,
  [SMALL_STATE(183)] = 4467,
  [SMALL_STATE(184)] = 4480,
  [SMALL_STATE(185)] = 4488,
  [SMALL_STATE(186)] = 4496,
  [SMALL_STATE(187)] = 4504,
  [SMALL_STATE(188)] = 4512,
  [SMALL_STATE(189)] = 4520,
  [SMALL_STATE(190)] = 4528,
  [SMALL_STATE(191)] = 4536,
  [SMALL_STATE(192)] = 4544,
  [SMALL_STATE(193)] = 4552,
  [SMALL_STATE(194)] = 4559,
  [SMALL_STATE(195)] = 4566,
  [SMALL_STATE(196)] = 4573,
  [SMALL_STATE(197)] = 4580,
  [SMALL_STATE(198)] = 4587,
  [SMALL_STATE(199)] = 4594,
  [SMALL_STATE(200)] = 4601,
  [SMALL_STATE(201)] = 4608,
  [SMALL_STATE(202)] = 4615,
  [SMALL_STATE(203)] = 4622,
  [SMALL_STATE(204)] = 4629,
  [SMALL_STATE(205)] = 4636,
  [SMALL_STATE(206)] = 4643,
  [SMALL_STATE(207)] = 4650,
  [SMALL_STATE(208)] = 4657,
  [SMALL_STATE(209)] = 4664,
  [SMALL_STATE(210)] = 4671,
  [SMALL_STATE(211)] = 4678,
  [SMALL_STATE(212)] = 4685,
  [SMALL_STATE(213)] = 4692,
  [SMALL_STATE(214)] = 4699,
  [SMALL_STATE(215)] = 4706,
  [SMALL_STATE(216)] = 4713,
  [SMALL_STATE(217)] = 4720,
  [SMALL_STATE(218)] = 4727,
  [SMALL_STATE(219)] = 4734,
  [SMALL_STATE(220)] = 4741,
  [SMALL_STATE(221)] = 4748,
  [SMALL_STATE(222)] = 4755,
  [SMALL_STATE(223)] = 4762,
  [SMALL_STATE(224)] = 4769,
  [SMALL_STATE(225)] = 4776,
  [SMALL_STATE(226)] = 4783,
  [SMALL_STATE(227)] = 4790,
  [SMALL_STATE(228)] = 4797,
  [SMALL_STATE(229)] = 4804,
  [SMALL_STATE(230)] = 4811,
  [SMALL_STATE(231)] = 4818,
  [SMALL_STATE(232)] = 4825,
  [SMALL_STATE(233)] = 4832,
  [SMALL_STATE(234)] = 4839,
  [SMALL_STATE(235)] = 4846,
  [SMALL_STATE(236)] = 4853,
  [SMALL_STATE(237)] = 4860,
  [SMALL_STATE(238)] = 4867,
  [SMALL_STATE(239)] = 4874,
  [SMALL_STATE(240)] = 4881,
  [SMALL_STATE(241)] = 4888,
  [SMALL_STATE(242)] = 4895,
  [SMALL_STATE(243)] = 4902,
  [SMALL_STATE(244)] = 4909,
  [SMALL_STATE(245)] = 4916,
  [SMALL_STATE(246)] = 4923,
  [SMALL_STATE(247)] = 4930,
  [SMALL_STATE(248)] = 4937,
  [SMALL_STATE(249)] = 4944,
  [SMALL_STATE(250)] = 4951,
  [SMALL_STATE(251)] = 4958,
  [SMALL_STATE(252)] = 4965,
  [SMALL_STATE(253)] = 4972,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(246),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(245),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(240),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(239),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__not_interpolation, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_interpolation, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(193),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(58),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(220),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(234),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(93),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(154),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(154),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(61),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(247),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(238),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_or, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_seq, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(94),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(236),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(237),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(18),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(24),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(80),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(240),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(239),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(19),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(20),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(79),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(243),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(244),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(22),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(23),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_context_repeat1, 2), SHIFT_REPEAT(54),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_context_repeat1, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_context_repeat1, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 2, .production_id = 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 2, .production_id = 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_and, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__optional_and, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and, 3),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(7),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(130),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(131),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(69),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(116),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(69),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 6),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_rule, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 3, .production_id = 7),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat1, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statement, 2),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statement, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_suite, 2),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_suite, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 8),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, .production_id = 8),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_tag, 4, .production_id = 9),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_tag, 4, .production_id = 9),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_suite, 1, .production_id = 3),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_suite, 1, .production_id = 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 10),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 10),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep_action, 4, .production_id = 14),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_action, 4, .production_id = 14),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 13),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, .production_id = 11),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_interpolation, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_interpolation, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 12),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, .production_id = 5),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(37),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_choice, 1),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(39),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(48),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(30),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic_match, 3, .production_id = 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prioritized_match, 3, .production_id = 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [704] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
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
