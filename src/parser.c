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
#define STATE_COUNT 159
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 112
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 16

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
  anon_sym_EQ = 19,
  anon_sym_PIPE = 20,
  sym_start_anchor = 21,
  sym_end_anchor = 22,
  sym_word = 23,
  anon_sym_LBRACE = 24,
  anon_sym_RBRACE = 25,
  anon_sym_LT = 26,
  anon_sym_GT = 27,
  anon_sym_LBRACK = 28,
  anon_sym_RBRACK = 29,
  anon_sym_STAR = 30,
  anon_sym_PLUS = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  anon_sym_SLASH = 34,
  anon_sym_PERCENT = 35,
  anon_sym_or = 36,
  anon_sym_key_LPAREN = 37,
  aux_sym_key_action_token1 = 38,
  anon_sym_sleep_LPAREN = 39,
  anon_sym_LPAREN2 = 40,
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
  sym_key_binding = 73,
  sym_command = 74,
  sym__statement_suite = 75,
  sym_block = 76,
  sym__simple_statement = 77,
  sym_assignment = 78,
  sym_expression = 79,
  sym_rule = 80,
  sym__optional_choice = 81,
  sym_choice = 82,
  sym__optional_anchor = 83,
  sym__optional_seq = 84,
  sym_seq = 85,
  sym__primary_rule = 86,
  sym_list = 87,
  sym_capture = 88,
  sym_optional = 89,
  sym_repeat = 90,
  sym_repeat1 = 91,
  sym_parenthesized_rule = 92,
  sym__expression = 93,
  sym_variable = 94,
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
  [anon_sym_key_LPAREN] = "key(",
  [aux_sym_key_action_token1] = "implicit_string",
  [anon_sym_sleep_LPAREN] = "sleep(",
  [anon_sym_LPAREN2] = "(",
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
  [sym_key_binding] = "key_binding",
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
  [anon_sym_key_LPAREN] = anon_sym_key_LPAREN,
  [aux_sym_key_action_token1] = sym_implicit_string,
  [anon_sym_sleep_LPAREN] = anon_sym_sleep_LPAREN,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
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
  [sym_key_binding] = sym_key_binding,
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
  [anon_sym_key_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_action_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sleep_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
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
  [sym_key_binding] = {
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
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 1},
  [13] = {.index = 14, .length = 2},
  [14] = {.index = 16, .length = 2},
  [15] = {.index = 18, .length = 3},
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
    {field_arguments, 1},
  [9] =
    {field_rule, 0},
    {field_script, 2},
  [11] =
    {field_key, 0},
    {field_script, 2},
  [13] =
    {field_tag, 2},
  [14] =
    {field_action_name, 0},
    {field_arguments, 1},
  [16] =
    {field_left, 0},
    {field_right, 2},
  [18] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = sym_block,
  },
  [12] = {
    [0] = sym_string_content,
  },
  [15] = {
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
      if (eof) ADVANCE(120);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '$') ADVANCE(163);
      if (lookahead == '%') ADVANCE(228);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == '*') ADVANCE(223);
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == ',') ADVANCE(237);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == '0') ADVANCE(292);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '=') ADVANCE(160);
      if (lookahead == '>') ADVANCE(220);
      if (lookahead == '[') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(222);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'k') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'm') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(116)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(291);
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
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(302);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(309);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(24)
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
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(16)
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '$') ADVANCE(163);
      if (lookahead == '%') ADVANCE(228);
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == '*') ADVANCE(223);
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == ',') ADVANCE(237);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == '0') ADVANCE(292);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '=') ADVANCE(160);
      if (lookahead == '>') ADVANCE(220);
      if (lookahead == '[') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(222);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'k') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'm') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '$') ADVANCE(163);
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == '*') ADVANCE(223);
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '[') ADVANCE(221);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == ']') ADVANCE(222);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (sym_word_character_set_1(lookahead)) ADVANCE(214);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '%') ADVANCE(228);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == '*') ADVANCE(223);
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == ',') ADVANCE(237);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '=') ADVANCE(160);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '%') ADVANCE(228);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == '*') ADVANCE(223);
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == ',') ADVANCE(237);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '=') ADVANCE(160);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == ',') ADVANCE(237);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '0') ADVANCE(292);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == 'k') ADVANCE(254);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '0') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(310);
      if (lookahead == 'k') ADVANCE(254);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == 'l') ADVANCE(245);
      if (lookahead == 'm') ADVANCE(276);
      if (lookahead == 'n') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == 'l') ADVANCE(245);
      if (lookahead == 'm') ADVANCE(276);
      if (lookahead == 'n') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == 'l') ADVANCE(245);
      if (lookahead == 'm') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(230);
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(235);
      END_STATE();
    case 30:
      if (lookahead == '(') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == ')') ADVANCE(158);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(159);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(71);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(294);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(295);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(134);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 93:
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 94:
      if (lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 95:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 96:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(294);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(295);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 111:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 112:
      if (eof) ADVANCE(120);
      if (lookahead == '\n') SKIP(117)
      END_STATE();
    case 113:
      if (eof) ADVANCE(120);
      if (lookahead == '\n') SKIP(117)
      if (lookahead == '\r') SKIP(112)
      END_STATE();
    case 114:
      if (eof) ADVANCE(120);
      if (lookahead == '\n') SKIP(119)
      END_STATE();
    case 115:
      if (eof) ADVANCE(120);
      if (lookahead == '\n') SKIP(119)
      if (lookahead == '\r') SKIP(114)
      END_STATE();
    case 116:
      if (eof) ADVANCE(120);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '$') ADVANCE(163);
      if (lookahead == '%') ADVANCE(228);
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == '*') ADVANCE(223);
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == ',') ADVANCE(237);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == '0') ADVANCE(292);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '=') ADVANCE(160);
      if (lookahead == '>') ADVANCE(220);
      if (lookahead == '[') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(222);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead == 'k') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'm') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(116)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 117:
      if (eof) ADVANCE(120);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '$') ADVANCE(163);
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '[') ADVANCE(221);
      if (lookahead == '\\') SKIP(113)
      if (lookahead == ']') ADVANCE(222);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == 'k') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == 'm') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(117)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_2(lookahead)) ADVANCE(214);
      END_STATE();
    case 118:
      if (eof) ADVANCE(120);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '[') ADVANCE(221);
      if (lookahead == '\\') SKIP(115)
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == 'k') ADVANCE(204);
      if (lookahead == 's') ADVANCE(205);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(119)
      if (sym_word_character_set_1(lookahead)) ADVANCE(214);
      END_STATE();
    case 119:
      if (eof) ADVANCE(120);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '[') ADVANCE(221);
      if (lookahead == '\\') SKIP(115)
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == 'k') ADVANCE(204);
      if (lookahead == 's') ADVANCE(205);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(119)
      if (sym_word_character_set_1(lookahead)) ADVANCE(214);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(234);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (sym_word_character_set_1(lookahead)) ADVANCE(214);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_os);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '(') ADVANCE(31);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_app);
      if (lookahead == '.') ADVANCE(44);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_app);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '_') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_app);
      if (lookahead == '.') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_app_DOTname);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_app_DOTname);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_app_DOTexe);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_app_DOTexe);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_app_DOTbundle);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_app_DOTbundle);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_code_DOTlanguage);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_code_DOTlanguage);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_language);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_language);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_language);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_tag_LPAREN_RPAREN);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_settings_LPAREN_RPAREN);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_start_anchor);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_end_anchor);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(230);
      if (sym_word_character_set_1(lookahead)) ADVANCE(214);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(31);
      if (sym_word_character_set_1(lookahead)) ADVANCE(214);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(32);
      if (sym_word_character_set_1(lookahead)) ADVANCE(214);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'a') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'a') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'd') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'd') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'g') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'g') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'g') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'g') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'i') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'l') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'n') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'n') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 's') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 't') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'u') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (lookahead == 'y') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '_') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '_') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (sym_word_character_set_3(lookahead)) ADVANCE(214);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(207);
      if (sym_word_character_set_4(lookahead)) ADVANCE(214);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(213);
      if (sym_word_character_set_1(lookahead)) ADVANCE(214);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(212);
      if (sym_word_character_set_1(lookahead)) ADVANCE(214);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(210);
      if (sym_word_character_set_1(lookahead)) ADVANCE(214);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(166);
      if (sym_word_character_set_1(lookahead)) ADVANCE(214);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(209);
      if (sym_word_character_set_1(lookahead)) ADVANCE(214);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(206);
      if (sym_word_character_set_1(lookahead)) ADVANCE(214);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(168);
      if (sym_word_character_set_1(lookahead)) ADVANCE(214);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(208);
      if (sym_word_character_set_1(lookahead)) ADVANCE(214);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(211);
      if (sym_word_character_set_1(lookahead)) ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'y') ADVANCE(165);
      if (sym_word_character_set_1(lookahead)) ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_word);
      if (sym_word_character_set_1(lookahead)) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(306);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(307);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_key_LPAREN);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '\n') ADVANCE(233);
      if (lookahead == '\r') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(234);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '\n') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(234);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_sleep_LPAREN);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(230);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(235);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'g') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'g') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'g') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'g') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'g') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'l') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'l') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'l') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 's') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 't') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 't') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'x') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'y') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '_') ADVANCE(293);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(35);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(36);
      if (lookahead == '_') ADVANCE(293);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(290);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(102);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(300);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(301);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_regex_escape_sequence_token1);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\r') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      if (lookahead == '\\') ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__not_escapesequence);
      if (lookahead == '\n') ADVANCE(309);
      if (lookahead == '\r') ADVANCE(3);
      if (sym_string_escape_sequence_character_set_1(lookahead)) ADVANCE(308);
      if (lookahead == 'U') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(106);
      if (lookahead == 'x') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 117, .external_lex_state = 2},
  [2] = {.lex_state = 118, .external_lex_state = 2},
  [3] = {.lex_state = 118, .external_lex_state = 2},
  [4] = {.lex_state = 118, .external_lex_state = 2},
  [5] = {.lex_state = 118, .external_lex_state = 2},
  [6] = {.lex_state = 23, .external_lex_state = 3},
  [7] = {.lex_state = 22, .external_lex_state = 4},
  [8] = {.lex_state = 22, .external_lex_state = 5},
  [9] = {.lex_state = 22, .external_lex_state = 5},
  [10] = {.lex_state = 24, .external_lex_state = 2},
  [11] = {.lex_state = 24, .external_lex_state = 2},
  [12] = {.lex_state = 22, .external_lex_state = 5},
  [13] = {.lex_state = 24, .external_lex_state = 2},
  [14] = {.lex_state = 22, .external_lex_state = 4},
  [15] = {.lex_state = 22, .external_lex_state = 4},
  [16] = {.lex_state = 19, .external_lex_state = 2},
  [17] = {.lex_state = 24, .external_lex_state = 2},
  [18] = {.lex_state = 19, .external_lex_state = 2},
  [19] = {.lex_state = 19, .external_lex_state = 2},
  [20] = {.lex_state = 19, .external_lex_state = 2},
  [21] = {.lex_state = 19, .external_lex_state = 2},
  [22] = {.lex_state = 22, .external_lex_state = 6},
  [23] = {.lex_state = 22, .external_lex_state = 6},
  [24] = {.lex_state = 22, .external_lex_state = 6},
  [25] = {.lex_state = 22, .external_lex_state = 6},
  [26] = {.lex_state = 22, .external_lex_state = 6},
  [27] = {.lex_state = 22, .external_lex_state = 6},
  [28] = {.lex_state = 19, .external_lex_state = 2},
  [29] = {.lex_state = 22, .external_lex_state = 6},
  [30] = {.lex_state = 22, .external_lex_state = 6},
  [31] = {.lex_state = 22, .external_lex_state = 6},
  [32] = {.lex_state = 22, .external_lex_state = 6},
  [33] = {.lex_state = 22, .external_lex_state = 6},
  [34] = {.lex_state = 22, .external_lex_state = 6},
  [35] = {.lex_state = 22, .external_lex_state = 6},
  [36] = {.lex_state = 22, .external_lex_state = 6},
  [37] = {.lex_state = 22, .external_lex_state = 6},
  [38] = {.lex_state = 22, .external_lex_state = 6},
  [39] = {.lex_state = 25, .external_lex_state = 2},
  [40] = {.lex_state = 25, .external_lex_state = 2},
  [41] = {.lex_state = 19, .external_lex_state = 2},
  [42] = {.lex_state = 25, .external_lex_state = 2},
  [43] = {.lex_state = 25, .external_lex_state = 2},
  [44] = {.lex_state = 26, .external_lex_state = 2},
  [45] = {.lex_state = 24, .external_lex_state = 2},
  [46] = {.lex_state = 19, .external_lex_state = 2},
  [47] = {.lex_state = 19, .external_lex_state = 2},
  [48] = {.lex_state = 23, .external_lex_state = 7},
  [49] = {.lex_state = 19, .external_lex_state = 2},
  [50] = {.lex_state = 19, .external_lex_state = 2},
  [51] = {.lex_state = 19, .external_lex_state = 2},
  [52] = {.lex_state = 19, .external_lex_state = 2},
  [53] = {.lex_state = 19, .external_lex_state = 2},
  [54] = {.lex_state = 23, .external_lex_state = 7},
  [55] = {.lex_state = 23, .external_lex_state = 7},
  [56] = {.lex_state = 23, .external_lex_state = 7},
  [57] = {.lex_state = 23, .external_lex_state = 7},
  [58] = {.lex_state = 20, .external_lex_state = 2},
  [59] = {.lex_state = 118, .external_lex_state = 2},
  [60] = {.lex_state = 20, .external_lex_state = 2},
  [61] = {.lex_state = 118, .external_lex_state = 2},
  [62] = {.lex_state = 118, .external_lex_state = 2},
  [63] = {.lex_state = 20, .external_lex_state = 8},
  [64] = {.lex_state = 118, .external_lex_state = 2},
  [65] = {.lex_state = 118, .external_lex_state = 2},
  [66] = {.lex_state = 118, .external_lex_state = 2},
  [67] = {.lex_state = 118, .external_lex_state = 2},
  [68] = {.lex_state = 118, .external_lex_state = 2},
  [69] = {.lex_state = 118, .external_lex_state = 2},
  [70] = {.lex_state = 118, .external_lex_state = 2},
  [71] = {.lex_state = 118, .external_lex_state = 2},
  [72] = {.lex_state = 20, .external_lex_state = 2},
  [73] = {.lex_state = 20, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 20, .external_lex_state = 2},
  [76] = {.lex_state = 20, .external_lex_state = 2},
  [77] = {.lex_state = 20, .external_lex_state = 8},
  [78] = {.lex_state = 20, .external_lex_state = 2},
  [79] = {.lex_state = 20, .external_lex_state = 2},
  [80] = {.lex_state = 20, .external_lex_state = 2},
  [81] = {.lex_state = 20, .external_lex_state = 2},
  [82] = {.lex_state = 20, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 20, .external_lex_state = 2},
  [85] = {.lex_state = 20, .external_lex_state = 2},
  [86] = {.lex_state = 20, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 23, .external_lex_state = 7},
  [89] = {.lex_state = 23, .external_lex_state = 7},
  [90] = {.lex_state = 23, .external_lex_state = 7},
  [91] = {.lex_state = 22, .external_lex_state = 4},
  [92] = {.lex_state = 23, .external_lex_state = 7},
  [93] = {.lex_state = 0, .external_lex_state = 8},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 8},
  [96] = {.lex_state = 0, .external_lex_state = 8},
  [97] = {.lex_state = 0, .external_lex_state = 8},
  [98] = {.lex_state = 0, .external_lex_state = 8},
  [99] = {.lex_state = 0, .external_lex_state = 8},
  [100] = {.lex_state = 0, .external_lex_state = 8},
  [101] = {.lex_state = 0, .external_lex_state = 8},
  [102] = {.lex_state = 0, .external_lex_state = 8},
  [103] = {.lex_state = 20, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 8},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 8},
  [107] = {.lex_state = 0, .external_lex_state = 8},
  [108] = {.lex_state = 0, .external_lex_state = 8},
  [109] = {.lex_state = 0, .external_lex_state = 8},
  [110] = {.lex_state = 0, .external_lex_state = 8},
  [111] = {.lex_state = 117, .external_lex_state = 2},
  [112] = {.lex_state = 117, .external_lex_state = 2},
  [113] = {.lex_state = 117, .external_lex_state = 2},
  [114] = {.lex_state = 117, .external_lex_state = 2},
  [115] = {.lex_state = 117, .external_lex_state = 2},
  [116] = {.lex_state = 117, .external_lex_state = 2},
  [117] = {.lex_state = 117, .external_lex_state = 2},
  [118] = {.lex_state = 117, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 27, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 8},
  [124] = {.lex_state = 233, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 8},
  [126] = {.lex_state = 0, .external_lex_state = 8},
  [127] = {.lex_state = 0, .external_lex_state = 8},
  [128] = {.lex_state = 304, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 117, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 304, .external_lex_state = 2},
  [136] = {.lex_state = 117, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 8},
  [139] = {.lex_state = 117, .external_lex_state = 2},
  [140] = {.lex_state = 117, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 8},
  [142] = {.lex_state = 0, .external_lex_state = 8},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 8},
  [147] = {.lex_state = 117, .external_lex_state = 2},
  [148] = {.lex_state = 233, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 27, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 27, .external_lex_state = 2},
  [153] = {.lex_state = 117, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 8},
  [155] = {.lex_state = 117, .external_lex_state = 2},
  [156] = {.lex_state = 233, .external_lex_state = 2},
  [157] = {.lex_state = 118, .external_lex_state = 2},
  [158] = {.lex_state = 233, .external_lex_state = 2},
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
};

static const bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
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
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__string_start] = true,
    [ts_external_token_string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token_comment] = true,
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
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token_string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token__newline] = true,
    [ts_external_token_comment] = true,
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
    [anon_sym_key_LPAREN] = ACTIONS(1),
    [anon_sym_sleep_LPAREN] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
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
    [sym_source_file] = STATE(145),
    [sym_context] = STATE(5),
    [sym__optional_or] = STATE(143),
    [sym_or] = STATE(143),
    [sym__optional_and] = STATE(13),
    [sym_and] = STATE(13),
    [sym__optional_not] = STATE(40),
    [sym_not] = STATE(40),
    [sym_match] = STATE(40),
    [sym__generic_match] = STATE(142),
    [sym__prioritized_match] = STATE(123),
    [sym_include_tag] = STATE(4),
    [sym_settings] = STATE(4),
    [sym_key_binding] = STATE(4),
    [sym_command] = STATE(4),
    [sym_rule] = STATE(140),
    [sym__optional_choice] = STATE(139),
    [sym_choice] = STATE(139),
    [sym__optional_anchor] = STATE(113),
    [sym__optional_seq] = STATE(114),
    [sym_seq] = STATE(114),
    [sym__primary_rule] = STATE(16),
    [sym_list] = STATE(16),
    [sym_capture] = STATE(16),
    [sym_optional] = STATE(16),
    [sym_repeat] = STATE(16),
    [sym_repeat1] = STATE(16),
    [sym_parenthesized_rule] = STATE(16),
    [sym_key_action] = STATE(136),
    [aux_sym_source_file_repeat1] = STATE(4),
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
    [anon_sym_key_LPAREN] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
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
    ACTIONS(59), 1,
      anon_sym_key_LPAREN,
    STATE(113), 1,
      sym__optional_anchor,
    STATE(136), 1,
      sym_key_action,
    STATE(140), 1,
      sym_rule,
    STATE(114), 2,
      sym__optional_seq,
      sym_seq,
    STATE(139), 2,
      sym__optional_choice,
      sym_choice,
    STATE(2), 5,
      sym_include_tag,
      sym_settings,
      sym_key_binding,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(16), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [67] = 18,
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
    ACTIONS(29), 1,
      anon_sym_key_LPAREN,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(113), 1,
      sym__optional_anchor,
    STATE(136), 1,
      sym_key_action,
    STATE(140), 1,
      sym_rule,
    STATE(114), 2,
      sym__optional_seq,
      sym_seq,
    STATE(139), 2,
      sym__optional_choice,
      sym_choice,
    STATE(2), 5,
      sym_include_tag,
      sym_settings,
      sym_key_binding,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(16), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [134] = 18,
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
    ACTIONS(29), 1,
      anon_sym_key_LPAREN,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(113), 1,
      sym__optional_anchor,
    STATE(136), 1,
      sym_key_action,
    STATE(140), 1,
      sym_rule,
    STATE(114), 2,
      sym__optional_seq,
      sym_seq,
    STATE(139), 2,
      sym__optional_choice,
      sym_choice,
    STATE(2), 5,
      sym_include_tag,
      sym_settings,
      sym_key_binding,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(16), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [201] = 18,
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
    ACTIONS(29), 1,
      anon_sym_key_LPAREN,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(113), 1,
      sym__optional_anchor,
    STATE(136), 1,
      sym_key_action,
    STATE(140), 1,
      sym_rule,
    STATE(114), 2,
      sym__optional_seq,
      sym_seq,
    STATE(139), 2,
      sym__optional_choice,
      sym_choice,
    STATE(3), 5,
      sym_include_tag,
      sym_settings,
      sym_key_binding,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(16), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [268] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_key_LPAREN,
    ACTIONS(74), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym__string_start,
    ACTIONS(78), 2,
      sym_integer,
      sym_float,
    ACTIONS(82), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(68), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(103), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [313] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_key_LPAREN,
    ACTIONS(88), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(92), 1,
      sym_integer,
    ACTIONS(94), 1,
      sym_float,
    ACTIONS(96), 1,
      sym__dedent,
    ACTIONS(98), 1,
      sym__string_start,
    STATE(66), 1,
      sym_block,
    STATE(14), 2,
      sym__simple_statement,
      aux_sym_block_repeat1,
    STATE(146), 2,
      sym_assignment,
      sym_expression,
    STATE(97), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [362] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_key_LPAREN,
    ACTIONS(88), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(92), 1,
      sym_integer,
    ACTIONS(94), 1,
      sym_float,
    ACTIONS(98), 1,
      sym__string_start,
    ACTIONS(100), 1,
      sym__newline,
    ACTIONS(102), 1,
      sym__indent,
    STATE(61), 1,
      sym__simple_statement,
    STATE(69), 1,
      sym__statement_suite,
    STATE(141), 2,
      sym_assignment,
      sym_expression,
    STATE(97), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [413] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_key_LPAREN,
    ACTIONS(88), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(92), 1,
      sym_integer,
    ACTIONS(94), 1,
      sym_float,
    ACTIONS(98), 1,
      sym__string_start,
    ACTIONS(100), 1,
      sym__newline,
    ACTIONS(102), 1,
      sym__indent,
    STATE(61), 1,
      sym__simple_statement,
    STATE(71), 1,
      sym__statement_suite,
    STATE(141), 2,
      sym_assignment,
      sym_expression,
    STATE(97), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [464] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_DASH,
    STATE(123), 1,
      sym__prioritized_match,
    STATE(142), 1,
      sym__generic_match,
    STATE(11), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(40), 3,
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
  [505] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DASH,
    ACTIONS(108), 1,
      anon_sym_not,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(123), 1,
      sym__prioritized_match,
    STATE(142), 1,
      sym__generic_match,
    STATE(11), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(40), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(111), 10,
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
  [546] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_key_LPAREN,
    ACTIONS(88), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(92), 1,
      sym_integer,
    ACTIONS(94), 1,
      sym_float,
    ACTIONS(98), 1,
      sym__string_start,
    ACTIONS(100), 1,
      sym__newline,
    ACTIONS(102), 1,
      sym__indent,
    STATE(61), 1,
      sym__simple_statement,
    STATE(64), 1,
      sym__statement_suite,
    STATE(141), 2,
      sym_assignment,
      sym_expression,
    STATE(97), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [597] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_DASH,
    STATE(123), 1,
      sym__prioritized_match,
    STATE(142), 1,
      sym__generic_match,
    STATE(10), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(40), 3,
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
  [638] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_key_LPAREN,
    ACTIONS(88), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(92), 1,
      sym_integer,
    ACTIONS(94), 1,
      sym_float,
    ACTIONS(98), 1,
      sym__string_start,
    ACTIONS(119), 1,
      sym__dedent,
    STATE(15), 2,
      sym__simple_statement,
      aux_sym_block_repeat1,
    STATE(146), 2,
      sym_assignment,
      sym_expression,
    STATE(97), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [684] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_key_LPAREN,
    ACTIONS(127), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(133), 1,
      sym_integer,
    ACTIONS(136), 1,
      sym_float,
    ACTIONS(139), 1,
      sym__dedent,
    ACTIONS(141), 1,
      sym__string_start,
    STATE(15), 2,
      sym__simple_statement,
      aux_sym_block_repeat1,
    STATE(146), 2,
      sym_assignment,
      sym_expression,
    STATE(97), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [730] = 11,
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
    ACTIONS(146), 1,
      sym_word,
    ACTIONS(148), 1,
      anon_sym_STAR,
    ACTIONS(150), 1,
      anon_sym_PLUS,
    STATE(20), 1,
      aux_sym_seq_repeat1,
    ACTIONS(144), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(53), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [774] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(123), 1,
      sym__prioritized_match,
    STATE(142), 1,
      sym__generic_match,
    STATE(45), 2,
      sym__optional_and,
      sym_and,
    STATE(40), 3,
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
  [811] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_word,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      anon_sym_LT,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      aux_sym_seq_repeat1,
    ACTIONS(152), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(53), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [849] = 11,
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
    ACTIONS(169), 1,
      sym_word,
    STATE(113), 1,
      sym__optional_anchor,
    STATE(114), 2,
      sym__optional_seq,
      sym_seq,
    STATE(131), 2,
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
  [891] = 9,
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
    ACTIONS(146), 1,
      sym_word,
    STATE(18), 1,
      aux_sym_seq_repeat1,
    ACTIONS(171), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(53), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [929] = 11,
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
    ACTIONS(169), 1,
      sym_word,
    STATE(113), 1,
      sym__optional_anchor,
    STATE(114), 2,
      sym__optional_seq,
      sym_seq,
    STATE(130), 2,
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
  [971] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_key_LPAREN,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym__string_start,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(177), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      sym_integer,
    ACTIONS(183), 1,
      sym_float,
    STATE(74), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1012] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_key_LPAREN,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym__string_start,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      sym_integer,
    ACTIONS(191), 1,
      sym_float,
    STATE(83), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1053] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_key_LPAREN,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym__string_start,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    STATE(87), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1091] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_key_LPAREN,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym__string_start,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(87), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1129] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_key_LPAREN,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym__string_start,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(87), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1167] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_key_LPAREN,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym__string_start,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(87), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1205] = 10,
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
    ACTIONS(169), 1,
      sym_word,
    STATE(116), 1,
      sym__optional_anchor,
    STATE(114), 2,
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
  [1243] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_key_LPAREN,
    ACTIONS(88), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(98), 1,
      sym__string_start,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym_integer,
    ACTIONS(209), 1,
      sym_float,
    STATE(93), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1278] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_key_LPAREN,
    ACTIONS(88), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(98), 1,
      sym__string_start,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(211), 1,
      sym_integer,
    ACTIONS(213), 1,
      sym_float,
    STATE(98), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1313] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_key_LPAREN,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym__string_start,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(215), 1,
      sym_integer,
    ACTIONS(217), 1,
      sym_float,
    STATE(94), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1348] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_key_LPAREN,
    ACTIONS(88), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(98), 1,
      sym__string_start,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(219), 1,
      sym_integer,
    ACTIONS(221), 1,
      sym_float,
    STATE(95), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1383] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_key_LPAREN,
    ACTIONS(88), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(98), 1,
      sym__string_start,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(223), 1,
      sym_integer,
    ACTIONS(225), 1,
      sym_float,
    STATE(108), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1418] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_key_LPAREN,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym__string_start,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(227), 1,
      sym_integer,
    ACTIONS(229), 1,
      sym_float,
    STATE(105), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1453] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_key_LPAREN,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym__string_start,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(231), 1,
      sym_integer,
    ACTIONS(233), 1,
      sym_float,
    STATE(79), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1488] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_key_LPAREN,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym__string_start,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(235), 1,
      sym_integer,
    ACTIONS(237), 1,
      sym_float,
    STATE(80), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1523] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_key_LPAREN,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym__string_start,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(239), 1,
      sym_integer,
    ACTIONS(241), 1,
      sym_float,
    STATE(82), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1558] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_key_LPAREN,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym__string_start,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    STATE(87), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DASH,
    ACTIONS(245), 13,
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
  [1615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_DASH,
    ACTIONS(249), 1,
      anon_sym_and,
    ACTIONS(251), 12,
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
  [1639] = 8,
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
    ACTIONS(169), 1,
      sym_word,
    STATE(112), 2,
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
  [1671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DASH,
    ACTIONS(255), 13,
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
  [1693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DASH,
    ACTIONS(255), 13,
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
  [1715] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(39), 1,
      sym_match,
    STATE(123), 1,
      sym__prioritized_match,
    STATE(142), 1,
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
  [1743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_DASH,
    ACTIONS(259), 12,
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
  [1764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 12,
      anon_sym_COLON,
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
      anon_sym_RPAREN,
  [1782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 12,
      anon_sym_COLON,
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
      anon_sym_RPAREN,
  [1800] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(274), 1,
      sym_string_escape_sequence,
    ACTIONS(277), 1,
      sym__not_escapesequence,
    ACTIONS(280), 1,
      sym_string_content,
    ACTIONS(283), 1,
      sym__string_end,
    ACTIONS(271), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(48), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(90), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [1834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 12,
      anon_sym_COLON,
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
      anon_sym_RPAREN,
  [1852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 12,
      anon_sym_COLON,
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
      anon_sym_RPAREN,
  [1870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 12,
      anon_sym_COLON,
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
      anon_sym_RPAREN,
  [1888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 12,
      anon_sym_COLON,
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
      anon_sym_RPAREN,
  [1906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_STAR,
    ACTIONS(150), 1,
      anon_sym_PLUS,
    ACTIONS(293), 10,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1928] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    ACTIONS(301), 1,
      sym_string_escape_sequence,
    ACTIONS(303), 1,
      sym__not_escapesequence,
    ACTIONS(305), 1,
      sym_string_content,
    ACTIONS(307), 1,
      sym__string_end,
    ACTIONS(299), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(48), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(90), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [1962] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    ACTIONS(303), 1,
      sym__not_escapesequence,
    ACTIONS(309), 1,
      sym_string_escape_sequence,
    ACTIONS(311), 1,
      sym_string_content,
    ACTIONS(313), 1,
      sym__string_end,
    ACTIONS(299), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(54), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(90), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [1996] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    ACTIONS(301), 1,
      sym_string_escape_sequence,
    ACTIONS(303), 1,
      sym__not_escapesequence,
    ACTIONS(305), 1,
      sym_string_content,
    ACTIONS(315), 1,
      sym__string_end,
    ACTIONS(299), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(48), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(90), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2030] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    ACTIONS(303), 1,
      sym__not_escapesequence,
    ACTIONS(317), 1,
      sym_string_escape_sequence,
    ACTIONS(319), 1,
      sym_string_content,
    ACTIONS(321), 1,
      sym__string_end,
    ACTIONS(299), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(56), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(90), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LPAREN2,
    STATE(78), 1,
      sym_argument_list,
    ACTIONS(323), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym_word,
    ACTIONS(327), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 10,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_word,
    ACTIONS(333), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_word,
    ACTIONS(337), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2155] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_EQ,
    ACTIONS(343), 1,
      anon_sym_LPAREN2,
    STATE(96), 1,
      sym_argument_list,
    ACTIONS(323), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym_word,
    ACTIONS(345), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_word,
    ACTIONS(349), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym_word,
    ACTIONS(353), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_word,
    ACTIONS(357), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      sym_word,
    ACTIONS(361), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_word,
    ACTIONS(365), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym_word,
    ACTIONS(369), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_word,
    ACTIONS(373), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2351] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    ACTIONS(387), 1,
      anon_sym_or,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(381), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_LPAREN2,
    STATE(96), 1,
      sym_argument_list,
    ACTIONS(323), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(397), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [2459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(397), 6,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [2506] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_or,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(381), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2576] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_or,
    ACTIONS(381), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(411), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(383), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2596] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(82), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(68), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2612] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(415), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(413), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2628] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(419), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(417), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(349), 6,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [2660] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(423), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(421), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 2,
      sym__newline,
      anon_sym_or,
    ACTIONS(425), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(427), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2693] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_or,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    ACTIONS(381), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(397), 4,
      sym__newline,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
  [2727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2740] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_or,
    ACTIONS(433), 1,
      sym__newline,
    ACTIONS(425), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(427), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2824] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_or,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    ACTIONS(381), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2856] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_or,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    ACTIONS(381), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(383), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2901] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_or,
    ACTIONS(439), 1,
      sym__newline,
    ACTIONS(425), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(427), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_PIPE,
    STATE(111), 1,
      aux_sym_choice_repeat1,
    ACTIONS(441), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym_end_anchor,
    ACTIONS(446), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    STATE(115), 1,
      aux_sym_choice_repeat1,
    ACTIONS(450), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_end_anchor,
    ACTIONS(454), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_PIPE,
    STATE(111), 1,
      aux_sym_choice_repeat1,
    ACTIONS(458), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_argument_list_repeat1,
  [3060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_argument_list_repeat1,
  [3073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_argument_list_repeat1,
  [3086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_identifier,
  [3093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym__newline,
  [3100] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(473), 1,
      aux_sym_key_action_token1,
  [3107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym__newline,
  [3114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym__newline,
  [3121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym__newline,
  [3128] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym_implicit_string,
  [3135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
  [3142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
  [3149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_RBRACK,
  [3156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_GT,
  [3163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
  [3170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
  [3177] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym_implicit_string,
  [3184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_COLON,
  [3191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
  [3198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym__newline,
  [3205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_COLON,
  [3212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_COLON,
  [3219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym__newline,
  [3226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym__newline,
  [3233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_DASH,
  [3240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
  [3247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      ts_builtin_sym_end,
  [3254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__newline,
  [3261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_COLON,
  [3268] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(519), 1,
      aux_sym_key_action_token1,
  [3275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
  [3282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym_identifier,
  [3289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
  [3296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym_identifier,
  [3303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_COLON,
  [3310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym__newline,
  [3317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_COLON,
  [3324] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(533), 1,
      aux_sym_key_action_token1,
  [3331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_COLON2,
  [3338] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(537), 1,
      aux_sym_key_action_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 134,
  [SMALL_STATE(5)] = 201,
  [SMALL_STATE(6)] = 268,
  [SMALL_STATE(7)] = 313,
  [SMALL_STATE(8)] = 362,
  [SMALL_STATE(9)] = 413,
  [SMALL_STATE(10)] = 464,
  [SMALL_STATE(11)] = 505,
  [SMALL_STATE(12)] = 546,
  [SMALL_STATE(13)] = 597,
  [SMALL_STATE(14)] = 638,
  [SMALL_STATE(15)] = 684,
  [SMALL_STATE(16)] = 730,
  [SMALL_STATE(17)] = 774,
  [SMALL_STATE(18)] = 811,
  [SMALL_STATE(19)] = 849,
  [SMALL_STATE(20)] = 891,
  [SMALL_STATE(21)] = 929,
  [SMALL_STATE(22)] = 971,
  [SMALL_STATE(23)] = 1012,
  [SMALL_STATE(24)] = 1053,
  [SMALL_STATE(25)] = 1091,
  [SMALL_STATE(26)] = 1129,
  [SMALL_STATE(27)] = 1167,
  [SMALL_STATE(28)] = 1205,
  [SMALL_STATE(29)] = 1243,
  [SMALL_STATE(30)] = 1278,
  [SMALL_STATE(31)] = 1313,
  [SMALL_STATE(32)] = 1348,
  [SMALL_STATE(33)] = 1383,
  [SMALL_STATE(34)] = 1418,
  [SMALL_STATE(35)] = 1453,
  [SMALL_STATE(36)] = 1488,
  [SMALL_STATE(37)] = 1523,
  [SMALL_STATE(38)] = 1558,
  [SMALL_STATE(39)] = 1593,
  [SMALL_STATE(40)] = 1615,
  [SMALL_STATE(41)] = 1639,
  [SMALL_STATE(42)] = 1671,
  [SMALL_STATE(43)] = 1693,
  [SMALL_STATE(44)] = 1715,
  [SMALL_STATE(45)] = 1743,
  [SMALL_STATE(46)] = 1764,
  [SMALL_STATE(47)] = 1782,
  [SMALL_STATE(48)] = 1800,
  [SMALL_STATE(49)] = 1834,
  [SMALL_STATE(50)] = 1852,
  [SMALL_STATE(51)] = 1870,
  [SMALL_STATE(52)] = 1888,
  [SMALL_STATE(53)] = 1906,
  [SMALL_STATE(54)] = 1928,
  [SMALL_STATE(55)] = 1962,
  [SMALL_STATE(56)] = 1996,
  [SMALL_STATE(57)] = 2030,
  [SMALL_STATE(58)] = 2064,
  [SMALL_STATE(59)] = 2085,
  [SMALL_STATE(60)] = 2103,
  [SMALL_STATE(61)] = 2119,
  [SMALL_STATE(62)] = 2137,
  [SMALL_STATE(63)] = 2155,
  [SMALL_STATE(64)] = 2177,
  [SMALL_STATE(65)] = 2195,
  [SMALL_STATE(66)] = 2213,
  [SMALL_STATE(67)] = 2231,
  [SMALL_STATE(68)] = 2249,
  [SMALL_STATE(69)] = 2267,
  [SMALL_STATE(70)] = 2285,
  [SMALL_STATE(71)] = 2303,
  [SMALL_STATE(72)] = 2321,
  [SMALL_STATE(73)] = 2336,
  [SMALL_STATE(74)] = 2351,
  [SMALL_STATE(75)] = 2376,
  [SMALL_STATE(76)] = 2391,
  [SMALL_STATE(77)] = 2406,
  [SMALL_STATE(78)] = 2425,
  [SMALL_STATE(79)] = 2440,
  [SMALL_STATE(80)] = 2459,
  [SMALL_STATE(81)] = 2474,
  [SMALL_STATE(82)] = 2489,
  [SMALL_STATE(83)] = 2506,
  [SMALL_STATE(84)] = 2531,
  [SMALL_STATE(85)] = 2546,
  [SMALL_STATE(86)] = 2561,
  [SMALL_STATE(87)] = 2576,
  [SMALL_STATE(88)] = 2596,
  [SMALL_STATE(89)] = 2612,
  [SMALL_STATE(90)] = 2628,
  [SMALL_STATE(91)] = 2644,
  [SMALL_STATE(92)] = 2660,
  [SMALL_STATE(93)] = 2676,
  [SMALL_STATE(94)] = 2693,
  [SMALL_STATE(95)] = 2712,
  [SMALL_STATE(96)] = 2727,
  [SMALL_STATE(97)] = 2740,
  [SMALL_STATE(98)] = 2759,
  [SMALL_STATE(99)] = 2772,
  [SMALL_STATE(100)] = 2785,
  [SMALL_STATE(101)] = 2798,
  [SMALL_STATE(102)] = 2811,
  [SMALL_STATE(103)] = 2824,
  [SMALL_STATE(104)] = 2843,
  [SMALL_STATE(105)] = 2856,
  [SMALL_STATE(106)] = 2875,
  [SMALL_STATE(107)] = 2888,
  [SMALL_STATE(108)] = 2901,
  [SMALL_STATE(109)] = 2920,
  [SMALL_STATE(110)] = 2933,
  [SMALL_STATE(111)] = 2946,
  [SMALL_STATE(112)] = 2961,
  [SMALL_STATE(113)] = 2974,
  [SMALL_STATE(114)] = 2989,
  [SMALL_STATE(115)] = 3002,
  [SMALL_STATE(116)] = 3017,
  [SMALL_STATE(117)] = 3027,
  [SMALL_STATE(118)] = 3037,
  [SMALL_STATE(119)] = 3047,
  [SMALL_STATE(120)] = 3060,
  [SMALL_STATE(121)] = 3073,
  [SMALL_STATE(122)] = 3086,
  [SMALL_STATE(123)] = 3093,
  [SMALL_STATE(124)] = 3100,
  [SMALL_STATE(125)] = 3107,
  [SMALL_STATE(126)] = 3114,
  [SMALL_STATE(127)] = 3121,
  [SMALL_STATE(128)] = 3128,
  [SMALL_STATE(129)] = 3135,
  [SMALL_STATE(130)] = 3142,
  [SMALL_STATE(131)] = 3149,
  [SMALL_STATE(132)] = 3156,
  [SMALL_STATE(133)] = 3163,
  [SMALL_STATE(134)] = 3170,
  [SMALL_STATE(135)] = 3177,
  [SMALL_STATE(136)] = 3184,
  [SMALL_STATE(137)] = 3191,
  [SMALL_STATE(138)] = 3198,
  [SMALL_STATE(139)] = 3205,
  [SMALL_STATE(140)] = 3212,
  [SMALL_STATE(141)] = 3219,
  [SMALL_STATE(142)] = 3226,
  [SMALL_STATE(143)] = 3233,
  [SMALL_STATE(144)] = 3240,
  [SMALL_STATE(145)] = 3247,
  [SMALL_STATE(146)] = 3254,
  [SMALL_STATE(147)] = 3261,
  [SMALL_STATE(148)] = 3268,
  [SMALL_STATE(149)] = 3275,
  [SMALL_STATE(150)] = 3282,
  [SMALL_STATE(151)] = 3289,
  [SMALL_STATE(152)] = 3296,
  [SMALL_STATE(153)] = 3303,
  [SMALL_STATE(154)] = 3310,
  [SMALL_STATE(155)] = 3317,
  [SMALL_STATE(156)] = 3324,
  [SMALL_STATE(157)] = 3331,
  [SMALL_STATE(158)] = 3338,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__not_interpolation, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_interpolation, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(44),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(157),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(147),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_or, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(156),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(124),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(63),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(97),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(97),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(57),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_seq, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(53),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(152),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(150),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(19),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(21),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_and, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__optional_and, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 2, .production_id = 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 2, .production_id = 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 3, .production_id = 7),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 3),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(6),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(88),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(89),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(48),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(90),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(48),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_rule, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 6),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat1, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_action, 3, .production_id = 8),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_suite, 1, .production_id = 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_suite, 1, .production_id = 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statement, 2),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statement, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_suite, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_suite, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_tag, 4, .production_id = 11),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_tag, 4, .production_id = 11),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding, 3, .production_id = 10),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_binding, 3, .production_id = 10),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 9),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, .production_id = 9),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, .production_id = 13),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 15),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep_action, 3, .production_id = 8),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_interpolation, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_interpolation, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 12),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 12),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, .production_id = 5),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 14),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(28),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_choice, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(38),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prioritized_match, 3, .production_id = 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic_match, 3, .production_id = 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [513] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
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
