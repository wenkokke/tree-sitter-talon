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
#define STATE_COUNT 262
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 13
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 15

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
  sym__simple_statements, 2,
    sym__simple_statements,
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
      if (sym_word_character_set_1(lookahead)) ADVANCE(204);
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
      if (lookahead == 'p') ADVANCE(137);
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
      if (sym_word_character_set_2(lookahead)) ADVANCE(204);
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
      if (sym_word_character_set_1(lookahead)) ADVANCE(204);
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
      if (sym_word_character_set_1(lookahead)) ADVANCE(204);
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
      if (sym_word_character_set_1(lookahead)) ADVANCE(204);
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
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
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
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
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
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
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
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
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
      if (lookahead == '.') ADVANCE(41);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_app);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
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
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
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
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
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
      if (sym_word_character_set_1(lookahead)) ADVANCE(204);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(29);
      if (sym_word_character_set_1(lookahead)) ADVANCE(204);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'a') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'a') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'd') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'd') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'g') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'g') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'g') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'g') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'l') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'p') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 's') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 't') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 't') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'u') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '_') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (sym_word_character_set_3(lookahead)) ADVANCE(204);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(197);
      if (sym_word_character_set_4(lookahead)) ADVANCE(204);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(203);
      if (sym_word_character_set_1(lookahead)) ADVANCE(204);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(160);
      if (sym_word_character_set_1(lookahead)) ADVANCE(204);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(201);
      if (sym_word_character_set_1(lookahead)) ADVANCE(204);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(200);
      if (sym_word_character_set_1(lookahead)) ADVANCE(204);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(198);
      if (sym_word_character_set_1(lookahead)) ADVANCE(204);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(162);
      if (sym_word_character_set_1(lookahead)) ADVANCE(204);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(199);
      if (sym_word_character_set_1(lookahead)) ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(202);
      if (sym_word_character_set_1(lookahead)) ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_word);
      if (sym_word_character_set_1(lookahead)) ADVANCE(204);
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
  [9] = {.lex_state = 21, .external_lex_state = 5},
  [10] = {.lex_state = 21, .external_lex_state = 4},
  [11] = {.lex_state = 21, .external_lex_state = 4},
  [12] = {.lex_state = 23, .external_lex_state = 2},
  [13] = {.lex_state = 23, .external_lex_state = 2},
  [14] = {.lex_state = 23, .external_lex_state = 2},
  [15] = {.lex_state = 21, .external_lex_state = 6},
  [16] = {.lex_state = 21, .external_lex_state = 6},
  [17] = {.lex_state = 21, .external_lex_state = 6},
  [18] = {.lex_state = 23, .external_lex_state = 2},
  [19] = {.lex_state = 21, .external_lex_state = 6},
  [20] = {.lex_state = 19, .external_lex_state = 2},
  [21] = {.lex_state = 19, .external_lex_state = 7},
  [22] = {.lex_state = 19, .external_lex_state = 2},
  [23] = {.lex_state = 19, .external_lex_state = 2},
  [24] = {.lex_state = 19, .external_lex_state = 2},
  [25] = {.lex_state = 21, .external_lex_state = 8},
  [26] = {.lex_state = 19, .external_lex_state = 2},
  [27] = {.lex_state = 19, .external_lex_state = 2},
  [28] = {.lex_state = 19, .external_lex_state = 9},
  [29] = {.lex_state = 19, .external_lex_state = 2},
  [30] = {.lex_state = 21, .external_lex_state = 10},
  [31] = {.lex_state = 21, .external_lex_state = 10},
  [32] = {.lex_state = 21, .external_lex_state = 10},
  [33] = {.lex_state = 21, .external_lex_state = 10},
  [34] = {.lex_state = 21, .external_lex_state = 10},
  [35] = {.lex_state = 19, .external_lex_state = 2},
  [36] = {.lex_state = 19, .external_lex_state = 7},
  [37] = {.lex_state = 21, .external_lex_state = 10},
  [38] = {.lex_state = 19, .external_lex_state = 7},
  [39] = {.lex_state = 19, .external_lex_state = 2},
  [40] = {.lex_state = 21, .external_lex_state = 10},
  [41] = {.lex_state = 21, .external_lex_state = 10},
  [42] = {.lex_state = 19, .external_lex_state = 2},
  [43] = {.lex_state = 19, .external_lex_state = 2},
  [44] = {.lex_state = 21, .external_lex_state = 10},
  [45] = {.lex_state = 19, .external_lex_state = 2},
  [46] = {.lex_state = 19, .external_lex_state = 9},
  [47] = {.lex_state = 19, .external_lex_state = 9},
  [48] = {.lex_state = 21, .external_lex_state = 8},
  [49] = {.lex_state = 21, .external_lex_state = 8},
  [50] = {.lex_state = 21, .external_lex_state = 8},
  [51] = {.lex_state = 21, .external_lex_state = 8},
  [52] = {.lex_state = 21, .external_lex_state = 8},
  [53] = {.lex_state = 21, .external_lex_state = 8},
  [54] = {.lex_state = 21, .external_lex_state = 8},
  [55] = {.lex_state = 21, .external_lex_state = 8},
  [56] = {.lex_state = 21, .external_lex_state = 8},
  [57] = {.lex_state = 21, .external_lex_state = 8},
  [58] = {.lex_state = 21, .external_lex_state = 8},
  [59] = {.lex_state = 21, .external_lex_state = 8},
  [60] = {.lex_state = 21, .external_lex_state = 8},
  [61] = {.lex_state = 21, .external_lex_state = 8},
  [62] = {.lex_state = 25, .external_lex_state = 2},
  [63] = {.lex_state = 19, .external_lex_state = 2},
  [64] = {.lex_state = 24, .external_lex_state = 2},
  [65] = {.lex_state = 19, .external_lex_state = 2},
  [66] = {.lex_state = 19, .external_lex_state = 2},
  [67] = {.lex_state = 24, .external_lex_state = 2},
  [68] = {.lex_state = 24, .external_lex_state = 2},
  [69] = {.lex_state = 24, .external_lex_state = 2},
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
  [80] = {.lex_state = 0, .external_lex_state = 7},
  [81] = {.lex_state = 19, .external_lex_state = 9},
  [82] = {.lex_state = 19, .external_lex_state = 9},
  [83] = {.lex_state = 19, .external_lex_state = 2},
  [84] = {.lex_state = 19, .external_lex_state = 2},
  [85] = {.lex_state = 19, .external_lex_state = 2},
  [86] = {.lex_state = 19, .external_lex_state = 9},
  [87] = {.lex_state = 19, .external_lex_state = 2},
  [88] = {.lex_state = 19, .external_lex_state = 9},
  [89] = {.lex_state = 0, .external_lex_state = 12},
  [90] = {.lex_state = 19, .external_lex_state = 7},
  [91] = {.lex_state = 19, .external_lex_state = 9},
  [92] = {.lex_state = 19, .external_lex_state = 9},
  [93] = {.lex_state = 19, .external_lex_state = 9},
  [94] = {.lex_state = 19, .external_lex_state = 7},
  [95] = {.lex_state = 19, .external_lex_state = 7},
  [96] = {.lex_state = 19, .external_lex_state = 7},
  [97] = {.lex_state = 19, .external_lex_state = 7},
  [98] = {.lex_state = 19, .external_lex_state = 2},
  [99] = {.lex_state = 19, .external_lex_state = 7},
  [100] = {.lex_state = 19, .external_lex_state = 7},
  [101] = {.lex_state = 19, .external_lex_state = 2},
  [102] = {.lex_state = 115, .external_lex_state = 2},
  [103] = {.lex_state = 115, .external_lex_state = 2},
  [104] = {.lex_state = 115, .external_lex_state = 2},
  [105] = {.lex_state = 115, .external_lex_state = 2},
  [106] = {.lex_state = 115, .external_lex_state = 2},
  [107] = {.lex_state = 115, .external_lex_state = 2},
  [108] = {.lex_state = 115, .external_lex_state = 2},
  [109] = {.lex_state = 115, .external_lex_state = 2},
  [110] = {.lex_state = 115, .external_lex_state = 2},
  [111] = {.lex_state = 115, .external_lex_state = 2},
  [112] = {.lex_state = 20, .external_lex_state = 13},
  [113] = {.lex_state = 0, .external_lex_state = 7},
  [114] = {.lex_state = 0, .external_lex_state = 7},
  [115] = {.lex_state = 115, .external_lex_state = 2},
  [116] = {.lex_state = 115, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 7},
  [118] = {.lex_state = 0, .external_lex_state = 7},
  [119] = {.lex_state = 21, .external_lex_state = 4},
  [120] = {.lex_state = 0, .external_lex_state = 12},
  [121] = {.lex_state = 0, .external_lex_state = 12},
  [122] = {.lex_state = 0, .external_lex_state = 12},
  [123] = {.lex_state = 0, .external_lex_state = 12},
  [124] = {.lex_state = 22, .external_lex_state = 11},
  [125] = {.lex_state = 22, .external_lex_state = 11},
  [126] = {.lex_state = 0, .external_lex_state = 12},
  [127] = {.lex_state = 22, .external_lex_state = 11},
  [128] = {.lex_state = 0, .external_lex_state = 12},
  [129] = {.lex_state = 0, .external_lex_state = 12},
  [130] = {.lex_state = 0, .external_lex_state = 7},
  [131] = {.lex_state = 0, .external_lex_state = 12},
  [132] = {.lex_state = 0, .external_lex_state = 12},
  [133] = {.lex_state = 0, .external_lex_state = 12},
  [134] = {.lex_state = 22, .external_lex_state = 11},
  [135] = {.lex_state = 0, .external_lex_state = 12},
  [136] = {.lex_state = 0, .external_lex_state = 12},
  [137] = {.lex_state = 0, .external_lex_state = 12},
  [138] = {.lex_state = 21, .external_lex_state = 4},
  [139] = {.lex_state = 0, .external_lex_state = 12},
  [140] = {.lex_state = 0, .external_lex_state = 7},
  [141] = {.lex_state = 0, .external_lex_state = 7},
  [142] = {.lex_state = 0, .external_lex_state = 7},
  [143] = {.lex_state = 0, .external_lex_state = 12},
  [144] = {.lex_state = 0, .external_lex_state = 7},
  [145] = {.lex_state = 0, .external_lex_state = 7},
  [146] = {.lex_state = 0, .external_lex_state = 7},
  [147] = {.lex_state = 0, .external_lex_state = 7},
  [148] = {.lex_state = 21, .external_lex_state = 4},
  [149] = {.lex_state = 0, .external_lex_state = 7},
  [150] = {.lex_state = 0, .external_lex_state = 7},
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
  [162] = {.lex_state = 0, .external_lex_state = 7},
  [163] = {.lex_state = 20, .external_lex_state = 13},
  [164] = {.lex_state = 20, .external_lex_state = 13},
  [165] = {.lex_state = 20, .external_lex_state = 13},
  [166] = {.lex_state = 0, .external_lex_state = 7},
  [167] = {.lex_state = 0, .external_lex_state = 7},
  [168] = {.lex_state = 20, .external_lex_state = 13},
  [169] = {.lex_state = 20, .external_lex_state = 13},
  [170] = {.lex_state = 20, .external_lex_state = 13},
  [171] = {.lex_state = 0, .external_lex_state = 12},
  [172] = {.lex_state = 114, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 7},
  [174] = {.lex_state = 0, .external_lex_state = 7},
  [175] = {.lex_state = 0, .external_lex_state = 7},
  [176] = {.lex_state = 0, .external_lex_state = 9},
  [177] = {.lex_state = 0, .external_lex_state = 7},
  [178] = {.lex_state = 0, .external_lex_state = 12},
  [179] = {.lex_state = 0, .external_lex_state = 12},
  [180] = {.lex_state = 0, .external_lex_state = 7},
  [181] = {.lex_state = 114, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 7},
  [183] = {.lex_state = 114, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 7},
  [185] = {.lex_state = 0, .external_lex_state = 7},
  [186] = {.lex_state = 0, .external_lex_state = 9},
  [187] = {.lex_state = 0, .external_lex_state = 12},
  [188] = {.lex_state = 0, .external_lex_state = 7},
  [189] = {.lex_state = 0, .external_lex_state = 9},
  [190] = {.lex_state = 114, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 9},
  [192] = {.lex_state = 0, .external_lex_state = 9},
  [193] = {.lex_state = 114, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 12},
  [195] = {.lex_state = 0, .external_lex_state = 7},
  [196] = {.lex_state = 0, .external_lex_state = 9},
  [197] = {.lex_state = 0, .external_lex_state = 7},
  [198] = {.lex_state = 114, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 9},
  [200] = {.lex_state = 0, .external_lex_state = 9},
  [201] = {.lex_state = 114, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 7},
  [203] = {.lex_state = 0, .external_lex_state = 12},
  [204] = {.lex_state = 114, .external_lex_state = 2},
  [205] = {.lex_state = 114, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 12},
  [207] = {.lex_state = 226, .external_lex_state = 2},
  [208] = {.lex_state = 226, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 12},
  [210] = {.lex_state = 0, .external_lex_state = 12},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 114, .external_lex_state = 13},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 9},
  [215] = {.lex_state = 0, .external_lex_state = 7},
  [216] = {.lex_state = 114, .external_lex_state = 13},
  [217] = {.lex_state = 26, .external_lex_state = 2},
  [218] = {.lex_state = 295, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 7},
  [221] = {.lex_state = 0, .external_lex_state = 7},
  [222] = {.lex_state = 0, .external_lex_state = 7},
  [223] = {.lex_state = 0, .external_lex_state = 9},
  [224] = {.lex_state = 0, .external_lex_state = 12},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 12},
  [227] = {.lex_state = 0, .external_lex_state = 7},
  [228] = {.lex_state = 295, .external_lex_state = 2},
  [229] = {.lex_state = 114, .external_lex_state = 13},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 9},
  [232] = {.lex_state = 0, .external_lex_state = 7},
  [233] = {.lex_state = 114, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 7},
  [235] = {.lex_state = 0, .external_lex_state = 7},
  [236] = {.lex_state = 0, .external_lex_state = 12},
  [237] = {.lex_state = 0, .external_lex_state = 7},
  [238] = {.lex_state = 0, .external_lex_state = 7},
  [239] = {.lex_state = 0, .external_lex_state = 7},
  [240] = {.lex_state = 0, .external_lex_state = 12},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 0, .external_lex_state = 7},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 26, .external_lex_state = 2},
  [245] = {.lex_state = 26, .external_lex_state = 2},
  [246] = {.lex_state = 114, .external_lex_state = 2},
  [247] = {.lex_state = 26, .external_lex_state = 2},
  [248] = {.lex_state = 26, .external_lex_state = 2},
  [249] = {.lex_state = 226, .external_lex_state = 2},
  [250] = {.lex_state = 226, .external_lex_state = 2},
  [251] = {.lex_state = 26, .external_lex_state = 2},
  [252] = {.lex_state = 26, .external_lex_state = 2},
  [253] = {.lex_state = 114, .external_lex_state = 2},
  [254] = {.lex_state = 114, .external_lex_state = 2},
  [255] = {.lex_state = 115, .external_lex_state = 2},
  [256] = {.lex_state = 226, .external_lex_state = 2},
  [257] = {.lex_state = 226, .external_lex_state = 2},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 0, .external_lex_state = 2},
  [260] = {.lex_state = 0, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 2},
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

static const bool ts_external_scanner_states[14][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token_RPAREN] = true,
  },
  [8] = {
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACK] = true,
  },
  [10] = {
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
  },
  [11] = {
    [ts_external_token_string_content] = true,
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
    [sym_string_content] = ACTIONS(1),
    [sym__string_end] = ACTIONS(1),
    [sym__regex_start] = ACTIONS(1),
    [sym__regex_content] = ACTIONS(1),
    [sym__regex_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(243),
    [sym_context] = STATE(5),
    [sym__optional_or] = STATE(241),
    [sym_or] = STATE(241),
    [sym__optional_and] = STATE(13),
    [sym_and] = STATE(13),
    [sym__optional_not] = STATE(67),
    [sym_not] = STATE(67),
    [sym_match] = STATE(67),
    [sym__generic_match] = STATE(236),
    [sym__prioritized_match] = STATE(206),
    [sym_include_tag] = STATE(4),
    [sym_settings] = STATE(4),
    [sym_command] = STATE(4),
    [sym_rule] = STATE(233),
    [sym__optional_choice] = STATE(205),
    [sym_choice] = STATE(205),
    [sym__optional_anchor] = STATE(183),
    [sym__optional_seq] = STATE(181),
    [sym_seq] = STATE(181),
    [sym__primary_rule] = STATE(22),
    [sym_list] = STATE(22),
    [sym_capture] = STATE(22),
    [sym_optional] = STATE(22),
    [sym_repeat] = STATE(22),
    [sym_repeat1] = STATE(22),
    [sym_parenthesized_rule] = STATE(22),
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
    STATE(183), 1,
      sym__optional_anchor,
    STATE(233), 1,
      sym_rule,
    STATE(181), 2,
      sym__optional_seq,
      sym_seq,
    STATE(205), 2,
      sym__optional_choice,
      sym_choice,
    STATE(2), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(22), 7,
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
    STATE(183), 1,
      sym__optional_anchor,
    STATE(233), 1,
      sym_rule,
    STATE(181), 2,
      sym__optional_seq,
      sym_seq,
    STATE(205), 2,
      sym__optional_choice,
      sym_choice,
    STATE(2), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(22), 7,
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
    STATE(183), 1,
      sym__optional_anchor,
    STATE(233), 1,
      sym_rule,
    STATE(181), 2,
      sym__optional_seq,
      sym_seq,
    STATE(205), 2,
      sym__optional_choice,
      sym_choice,
    STATE(2), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(22), 7,
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
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(183), 1,
      sym__optional_anchor,
    STATE(233), 1,
      sym_rule,
    STATE(181), 2,
      sym__optional_seq,
      sym_seq,
    STATE(205), 2,
      sym__optional_choice,
      sym_choice,
    STATE(3), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(22), 7,
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
      sym_string_content,
      sym__string_end,
    ACTIONS(63), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(165), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [285] = 13,
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
    STATE(106), 1,
      sym_block,
    STATE(10), 2,
      sym__simple_statements,
      aux_sym_block_repeat1,
    STATE(194), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(129), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [335] = 14,
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
    STATE(102), 1,
      sym__suite,
    STATE(104), 1,
      sym__simple_statements,
    STATE(179), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(129), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [387] = 14,
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
    STATE(104), 1,
      sym__simple_statements,
    STATE(109), 1,
      sym__suite,
    STATE(179), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(129), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [439] = 12,
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
    ACTIONS(99), 1,
      sym__dedent,
    STATE(11), 2,
      sym__simple_statements,
      aux_sym_block_repeat1,
    STATE(194), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(129), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [486] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_key,
    ACTIONS(107), 1,
      anon_sym_sleep,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(113), 1,
      sym_integer,
    ACTIONS(116), 1,
      sym_float,
    ACTIONS(119), 1,
      sym__dedent,
    ACTIONS(121), 1,
      sym__string_start,
    STATE(11), 2,
      sym__simple_statements,
      aux_sym_block_repeat1,
    STATE(194), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(129), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [533] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(124), 1,
      anon_sym_DASH,
    STATE(206), 1,
      sym__prioritized_match,
    STATE(236), 1,
      sym__generic_match,
    STATE(14), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(67), 3,
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
  [574] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(126), 1,
      anon_sym_DASH,
    STATE(206), 1,
      sym__prioritized_match,
    STATE(236), 1,
      sym__generic_match,
    STATE(12), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(67), 3,
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
  [615] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_DASH,
    ACTIONS(130), 1,
      anon_sym_not,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(206), 1,
      sym__prioritized_match,
    STATE(236), 1,
      sym__generic_match,
    STATE(14), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(67), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(133), 10,
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
  [656] = 11,
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
    ACTIONS(139), 1,
      sym__newline,
    STATE(203), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(129), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [699] = 11,
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
    ACTIONS(141), 1,
      sym__newline,
    STATE(203), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(129), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [742] = 11,
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
    ACTIONS(143), 1,
      sym__newline,
    STATE(203), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(129), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [785] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(206), 1,
      sym__prioritized_match,
    STATE(236), 1,
      sym__generic_match,
    STATE(70), 2,
      sym__optional_and,
      sym_and,
    STATE(67), 3,
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
  [822] = 11,
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
    ACTIONS(145), 1,
      sym__newline,
    STATE(203), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(129), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [865] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_start_anchor,
    ACTIONS(149), 1,
      sym_word,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_LT,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym__optional_anchor,
    STATE(173), 2,
      sym__optional_seq,
      sym_seq,
    STATE(215), 2,
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
  [907] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_LT,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_word,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      anon_sym_PLUS,
    STATE(38), 1,
      aux_sym_seq_repeat1,
    ACTIONS(159), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(97), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [949] = 11,
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
    ACTIONS(167), 1,
      sym_word,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(171), 1,
      anon_sym_PLUS,
    STATE(45), 1,
      aux_sym_seq_repeat1,
    ACTIONS(159), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(87), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [991] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_start_anchor,
    ACTIONS(149), 1,
      sym_word,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_LT,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym__optional_anchor,
    STATE(173), 2,
      sym__optional_seq,
      sym_seq,
    STATE(227), 2,
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
  [1033] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_start_anchor,
    ACTIONS(175), 1,
      sym_word,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym__optional_anchor,
    STATE(189), 2,
      sym__optional_seq,
      sym_seq,
    STATE(223), 2,
      sym__optional_choice,
      sym_choice,
    STATE(28), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1075] = 10,
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
    STATE(203), 3,
      sym__simple_statement,
      sym_assignment,
      sym_expression,
    STATE(129), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1115] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_start_anchor,
    ACTIONS(175), 1,
      sym_word,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym__optional_anchor,
    STATE(189), 2,
      sym__optional_seq,
      sym_seq,
    STATE(214), 2,
      sym__optional_choice,
      sym_choice,
    STATE(28), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1157] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_start_anchor,
    ACTIONS(175), 1,
      sym_word,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym__optional_anchor,
    STATE(189), 2,
      sym__optional_seq,
      sym_seq,
    STATE(231), 2,
      sym__optional_choice,
      sym_choice,
    STATE(28), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1199] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      sym_word,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    STATE(46), 1,
      aux_sym_seq_repeat1,
    ACTIONS(159), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(81), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1241] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_start_anchor,
    ACTIONS(149), 1,
      sym_word,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_LT,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym__optional_anchor,
    STATE(173), 2,
      sym__optional_seq,
      sym_seq,
    STATE(232), 2,
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
  [1283] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(195), 1,
      anon_sym_key,
    ACTIONS(197), 1,
      anon_sym_sleep,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      sym_integer,
    ACTIONS(205), 1,
      sym_float,
    ACTIONS(207), 1,
      sym__string_start,
    STATE(113), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1324] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_key,
    ACTIONS(197), 1,
      anon_sym_sleep,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym__string_start,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      sym_integer,
    ACTIONS(215), 1,
      sym_float,
    STATE(117), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1365] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_key,
    ACTIONS(197), 1,
      anon_sym_sleep,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym__string_start,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      sym_integer,
    ACTIONS(223), 1,
      sym_float,
    STATE(114), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1406] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_key,
    ACTIONS(197), 1,
      anon_sym_sleep,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym__string_start,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    ACTIONS(227), 1,
      sym_integer,
    ACTIONS(229), 1,
      sym_float,
    STATE(140), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1444] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_key,
    ACTIONS(197), 1,
      anon_sym_sleep,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym__string_start,
    ACTIONS(227), 1,
      sym_integer,
    ACTIONS(229), 1,
      sym_float,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(140), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1482] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_start_anchor,
    ACTIONS(175), 1,
      sym_word,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
      sym__optional_anchor,
    STATE(189), 2,
      sym__optional_seq,
      sym_seq,
    STATE(28), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1520] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_word,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_LT,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      aux_sym_seq_repeat1,
    ACTIONS(233), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(97), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1556] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_key,
    ACTIONS(197), 1,
      anon_sym_sleep,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym__string_start,
    ACTIONS(227), 1,
      sym_integer,
    ACTIONS(229), 1,
      sym_float,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(140), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1594] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_LT,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_word,
    STATE(36), 1,
      aux_sym_seq_repeat1,
    ACTIONS(252), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(97), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1630] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_word,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(260), 1,
      anon_sym_LT,
    ACTIONS(263), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      aux_sym_seq_repeat1,
    ACTIONS(233), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(87), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1666] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_key,
    ACTIONS(197), 1,
      anon_sym_sleep,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym__string_start,
    ACTIONS(227), 1,
      sym_integer,
    ACTIONS(229), 1,
      sym_float,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(140), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1704] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_key,
    ACTIONS(197), 1,
      anon_sym_sleep,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym__string_start,
    ACTIONS(227), 1,
      sym_integer,
    ACTIONS(229), 1,
      sym_float,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(140), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1742] = 10,
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
    ACTIONS(273), 1,
      sym_word,
    STATE(204), 1,
      sym__optional_anchor,
    STATE(181), 2,
      sym__optional_seq,
      sym_seq,
    STATE(22), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1780] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_start_anchor,
    ACTIONS(149), 1,
      sym_word,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_LT,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    STATE(195), 1,
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
  [1818] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_key,
    ACTIONS(197), 1,
      anon_sym_sleep,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym__string_start,
    ACTIONS(227), 1,
      sym_integer,
    ACTIONS(229), 1,
      sym_float,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(140), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1856] = 9,
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
    ACTIONS(167), 1,
      sym_word,
    STATE(39), 1,
      aux_sym_seq_repeat1,
    ACTIONS(252), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(87), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1892] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      sym_word,
    STATE(47), 1,
      aux_sym_seq_repeat1,
    ACTIONS(252), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(81), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1928] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_word,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LT,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      aux_sym_seq_repeat1,
    ACTIONS(233), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(81), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1964] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_key,
    ACTIONS(197), 1,
      anon_sym_sleep,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym__string_start,
    ACTIONS(292), 1,
      sym_integer,
    ACTIONS(294), 1,
      sym_float,
    STATE(167), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1999] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_key,
    ACTIONS(197), 1,
      anon_sym_sleep,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym__string_start,
    ACTIONS(227), 1,
      sym_integer,
    ACTIONS(229), 1,
      sym_float,
    STATE(140), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2034] = 9,
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
    STATE(132), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2069] = 9,
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
    ACTIONS(302), 1,
      sym_integer,
    ACTIONS(304), 1,
      sym_float,
    STATE(131), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2104] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_key,
    ACTIONS(197), 1,
      anon_sym_sleep,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym__string_start,
    ACTIONS(306), 1,
      sym_integer,
    ACTIONS(308), 1,
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
  [2139] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_key,
    ACTIONS(197), 1,
      anon_sym_sleep,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym__string_start,
    ACTIONS(310), 1,
      sym_integer,
    ACTIONS(312), 1,
      sym_float,
    STATE(146), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2174] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_key,
    ACTIONS(197), 1,
      anon_sym_sleep,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym__string_start,
    ACTIONS(314), 1,
      sym_integer,
    ACTIONS(316), 1,
      sym_float,
    STATE(166), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2209] = 9,
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
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      sym_integer,
    ACTIONS(322), 1,
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
  [2244] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_key,
    ACTIONS(197), 1,
      anon_sym_sleep,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym__string_start,
    ACTIONS(324), 1,
      sym_integer,
    ACTIONS(326), 1,
      sym_float,
    STATE(147), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2279] = 9,
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
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 1,
      sym_integer,
    ACTIONS(330), 1,
      sym_float,
    STATE(168), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2314] = 9,
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
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      sym_integer,
    ACTIONS(334), 1,
      sym_float,
    STATE(169), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2349] = 9,
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
    STATE(133), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2384] = 9,
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
    ACTIONS(340), 1,
      sym_integer,
    ACTIONS(342), 1,
      sym_float,
    STATE(128), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2419] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_key,
    ACTIONS(197), 1,
      anon_sym_sleep,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym__string_start,
    ACTIONS(344), 1,
      sym_integer,
    ACTIONS(346), 1,
      sym_float,
    STATE(162), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2454] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(64), 1,
      sym_match,
    STATE(206), 1,
      sym__prioritized_match,
    STATE(236), 1,
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
  [2482] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_word,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_LT,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    STATE(191), 2,
      sym__optional_seq,
      sym_seq,
    STATE(28), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 13,
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
  [2536] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_word,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_LT,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    STATE(175), 2,
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
  [2568] = 8,
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
    ACTIONS(273), 1,
      sym_word,
    STATE(193), 2,
      sym__optional_seq,
      sym_seq,
    STATE(22), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_DASH,
    ACTIONS(354), 1,
      anon_sym_and,
    ACTIONS(356), 12,
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
  [2624] = 3,
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
  [2646] = 3,
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
  [2668] = 3,
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
  [2689] = 10,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(372), 1,
      sym_string_escape_sequence,
    ACTIONS(374), 1,
      sym__not_escapesequence,
    ACTIONS(376), 1,
      sym_string_content,
    ACTIONS(378), 1,
      sym__string_end,
    ACTIONS(370), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(72), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(127), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2723] = 10,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      sym__not_escapesequence,
    ACTIONS(380), 1,
      sym_string_escape_sequence,
    ACTIONS(382), 1,
      sym_string_content,
    ACTIONS(384), 1,
      sym__string_end,
    ACTIONS(370), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(74), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(127), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2757] = 10,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      sym__not_escapesequence,
    ACTIONS(380), 1,
      sym_string_escape_sequence,
    ACTIONS(382), 1,
      sym_string_content,
    ACTIONS(386), 1,
      sym__string_end,
    ACTIONS(370), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(74), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(127), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2791] = 10,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_LBRACE,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    ACTIONS(397), 1,
      sym_string_escape_sequence,
    ACTIONS(400), 1,
      sym__not_escapesequence,
    ACTIONS(403), 1,
      sym_string_content,
    ACTIONS(406), 1,
      sym__string_end,
    ACTIONS(394), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(74), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(127), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2825] = 10,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      sym__not_escapesequence,
    ACTIONS(408), 1,
      sym_string_escape_sequence,
    ACTIONS(410), 1,
      sym_string_content,
    ACTIONS(412), 1,
      sym__string_end,
    ACTIONS(370), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(73), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(127), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2859] = 10,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      sym__not_escapesequence,
    ACTIONS(380), 1,
      sym_string_escape_sequence,
    ACTIONS(382), 1,
      sym_string_content,
    ACTIONS(414), 1,
      sym__string_end,
    ACTIONS(370), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(74), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(127), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2893] = 10,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      sym__not_escapesequence,
    ACTIONS(416), 1,
      sym_string_escape_sequence,
    ACTIONS(418), 1,
      sym_string_content,
    ACTIONS(420), 1,
      sym__string_end,
    ACTIONS(370), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(76), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(127), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2927] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LPAREN,
    ACTIONS(426), 1,
      anon_sym_EQ,
    STATE(120), 1,
      sym_argument_list,
    ACTIONS(422), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 10,
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
  [2966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym_argument_list,
    ACTIONS(422), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    ACTIONS(432), 8,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3006] = 2,
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
  [3022] = 2,
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
  [3038] = 2,
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
  [3054] = 2,
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
  [3070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 10,
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
  [3086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(171), 1,
      anon_sym_PLUS,
    ACTIONS(432), 8,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3106] = 2,
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
  [3122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym_argument_list,
    ACTIONS(422), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3142] = 2,
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
  [3158] = 2,
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
  [3174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 10,
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
  [3190] = 2,
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
  [3206] = 2,
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
  [3222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 10,
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
  [3238] = 2,
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
  [3254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      anon_sym_PLUS,
    ACTIONS(432), 8,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3274] = 2,
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
  [3290] = 2,
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
  [3306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 10,
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
  [3322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 10,
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
  [3338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_word,
    ACTIONS(444), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym_word,
    ACTIONS(448), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      sym_word,
    ACTIONS(452), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3389] = 3,
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
  [3406] = 3,
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
  [3423] = 3,
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
  [3440] = 3,
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
  [3457] = 3,
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
  [3474] = 3,
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
  [3491] = 3,
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
  [3508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym_argument_list,
    ACTIONS(422), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3527] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    ACTIONS(492), 1,
      anon_sym_or,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(486), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3552] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_or,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(486), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      sym_word,
    ACTIONS(500), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym_word,
    ACTIONS(504), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3611] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_or,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    ACTIONS(510), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(486), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 4,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(450), 4,
      anon_sym_key,
      anon_sym_sleep,
      sym_identifier,
      sym_integer,
  [3666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3722] = 3,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(77), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(63), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3738] = 3,
    ACTIONS(61), 1,
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
  [3754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3768] = 3,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(530), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(528), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3784] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_or,
    ACTIONS(532), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(536), 2,
      sym__newline,
      anon_sym_SEMI,
    ACTIONS(534), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3804] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_or,
    ACTIONS(532), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(540), 2,
      sym__newline,
      anon_sym_SEMI,
    ACTIONS(534), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3824] = 2,
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
  [3838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(544), 5,
      sym__newline,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_or,
  [3854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(534), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(544), 3,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_or,
  [3886] = 3,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(548), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(546), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 4,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(482), 4,
      anon_sym_key,
      anon_sym_sleep,
      sym_identifier,
      sym_integer,
  [3960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3974] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_or,
    ACTIONS(486), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(556), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3994] = 2,
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
  [4008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(544), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [4068] = 2,
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
  [4082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(544), 5,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [4098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 4,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(502), 4,
      anon_sym_key,
      anon_sym_sleep,
      sym_identifier,
      sym_integer,
  [4114] = 2,
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
  [4128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4197] = 2,
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
  [4210] = 2,
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
  [4223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(544), 4,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_or,
  [4238] = 2,
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
  [4251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4290] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_or,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    ACTIONS(486), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4335] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
    ACTIONS(566), 1,
      anon_sym_or,
    ACTIONS(562), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(558), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4354] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_or,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    ACTIONS(486), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4373] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_or,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    ACTIONS(486), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4392] = 2,
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
  [4405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 2,
      anon_sym_RBRACE,
      anon_sym_or,
    ACTIONS(562), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(558), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym__newline,
    ACTIONS(572), 1,
      anon_sym_SEMI,
    STATE(178), 1,
      aux_sym__simple_statements_repeat1,
  [4448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_COLON,
    ACTIONS(576), 1,
      anon_sym_PIPE,
    STATE(190), 1,
      aux_sym_choice_repeat1,
  [4461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_end_anchor,
    ACTIONS(578), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_argument_list_repeat1,
  [4485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_end_anchor,
    ACTIONS(584), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_PIPE,
    ACTIONS(591), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      aux_sym_choice_repeat1,
  [4509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    ACTIONS(593), 1,
      anon_sym_PIPE,
    STATE(188), 1,
      aux_sym_choice_repeat1,
  [4522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_SEMI,
    ACTIONS(598), 1,
      sym__newline,
    STATE(178), 1,
      aux_sym__simple_statements_repeat1,
  [4535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_SEMI,
    ACTIONS(602), 1,
      sym__newline,
    STATE(187), 1,
      aux_sym__simple_statements_repeat1,
  [4548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_argument_list_repeat1,
  [4561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym_end_anchor,
    ACTIONS(578), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_PIPE,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      aux_sym_choice_repeat1,
  [4585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_PIPE,
    ACTIONS(608), 1,
      anon_sym_COLON,
    STATE(172), 1,
      aux_sym_choice_repeat1,
  [4598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_argument_list_repeat1,
  [4611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_argument_list_repeat1,
  [4624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_RBRACK,
    ACTIONS(615), 1,
      anon_sym_PIPE,
    STATE(192), 1,
      aux_sym_choice_repeat1,
  [4637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym__newline,
    ACTIONS(617), 1,
      anon_sym_SEMI,
    STATE(178), 1,
      aux_sym__simple_statements_repeat1,
  [4650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    ACTIONS(619), 1,
      anon_sym_PIPE,
    STATE(188), 1,
      aux_sym_choice_repeat1,
  [4663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym_end_anchor,
    ACTIONS(578), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COLON,
    ACTIONS(624), 1,
      anon_sym_PIPE,
    STATE(190), 1,
      aux_sym_choice_repeat1,
  [4687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_end_anchor,
    ACTIONS(584), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4698] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_RBRACK,
    ACTIONS(615), 1,
      anon_sym_PIPE,
    STATE(176), 1,
      aux_sym_choice_repeat1,
  [4711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym_end_anchor,
    ACTIONS(584), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_SEMI,
    ACTIONS(633), 1,
      sym__newline,
    STATE(171), 1,
      aux_sym__simple_statements_repeat1,
  [4735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      sym__newline,
      anon_sym_SEMI,
  [4807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_COLON,
  [4822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym__newline,
  [4829] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(641), 1,
      aux_sym_key_action_token1,
  [4836] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(643), 1,
      aux_sym_key_action_token1,
  [4843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      sym__newline,
  [4850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym__newline,
  [4857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_GT,
  [4864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
  [4871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_GT,
  [4878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_RBRACK,
  [4885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
  [4892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
  [4899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym_identifier,
  [4906] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym_implicit_string,
  [4913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_LPAREN,
  [4920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
  [4927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
  [4934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
  [4941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_RBRACK,
  [4948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      sym__newline,
  [4955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
  [4962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym__newline,
  [4969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
  [4976] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym_implicit_string,
  [4983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
  [4990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_GT,
  [4997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_RBRACK,
  [5004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
  [5011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_COLON,
  [5018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
  [5025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
  [5032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      sym__newline,
  [5039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
  [5046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
  [5053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
  [5060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym__newline,
  [5067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_DASH,
  [5074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
  [5081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      ts_builtin_sym_end,
  [5088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      sym_identifier,
  [5095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      sym_identifier,
  [5102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_COLON,
  [5109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      sym_identifier,
  [5116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_identifier,
  [5123] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(719), 1,
      aux_sym_key_action_token1,
  [5130] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(721), 1,
      aux_sym_key_action_token1,
  [5137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym_identifier,
  [5144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      sym_identifier,
  [5151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_COLON,
  [5158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_COLON,
  [5165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_COLON2,
  [5172] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(733), 1,
      aux_sym_key_action_token1,
  [5179] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(735), 1,
      aux_sym_key_action_token1,
  [5186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_LPAREN,
  [5193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_LPAREN,
  [5200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_LPAREN,
  [5207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 240,
  [SMALL_STATE(7)] = 285,
  [SMALL_STATE(8)] = 335,
  [SMALL_STATE(9)] = 387,
  [SMALL_STATE(10)] = 439,
  [SMALL_STATE(11)] = 486,
  [SMALL_STATE(12)] = 533,
  [SMALL_STATE(13)] = 574,
  [SMALL_STATE(14)] = 615,
  [SMALL_STATE(15)] = 656,
  [SMALL_STATE(16)] = 699,
  [SMALL_STATE(17)] = 742,
  [SMALL_STATE(18)] = 785,
  [SMALL_STATE(19)] = 822,
  [SMALL_STATE(20)] = 865,
  [SMALL_STATE(21)] = 907,
  [SMALL_STATE(22)] = 949,
  [SMALL_STATE(23)] = 991,
  [SMALL_STATE(24)] = 1033,
  [SMALL_STATE(25)] = 1075,
  [SMALL_STATE(26)] = 1115,
  [SMALL_STATE(27)] = 1157,
  [SMALL_STATE(28)] = 1199,
  [SMALL_STATE(29)] = 1241,
  [SMALL_STATE(30)] = 1283,
  [SMALL_STATE(31)] = 1324,
  [SMALL_STATE(32)] = 1365,
  [SMALL_STATE(33)] = 1406,
  [SMALL_STATE(34)] = 1444,
  [SMALL_STATE(35)] = 1482,
  [SMALL_STATE(36)] = 1520,
  [SMALL_STATE(37)] = 1556,
  [SMALL_STATE(38)] = 1594,
  [SMALL_STATE(39)] = 1630,
  [SMALL_STATE(40)] = 1666,
  [SMALL_STATE(41)] = 1704,
  [SMALL_STATE(42)] = 1742,
  [SMALL_STATE(43)] = 1780,
  [SMALL_STATE(44)] = 1818,
  [SMALL_STATE(45)] = 1856,
  [SMALL_STATE(46)] = 1892,
  [SMALL_STATE(47)] = 1928,
  [SMALL_STATE(48)] = 1964,
  [SMALL_STATE(49)] = 1999,
  [SMALL_STATE(50)] = 2034,
  [SMALL_STATE(51)] = 2069,
  [SMALL_STATE(52)] = 2104,
  [SMALL_STATE(53)] = 2139,
  [SMALL_STATE(54)] = 2174,
  [SMALL_STATE(55)] = 2209,
  [SMALL_STATE(56)] = 2244,
  [SMALL_STATE(57)] = 2279,
  [SMALL_STATE(58)] = 2314,
  [SMALL_STATE(59)] = 2349,
  [SMALL_STATE(60)] = 2384,
  [SMALL_STATE(61)] = 2419,
  [SMALL_STATE(62)] = 2454,
  [SMALL_STATE(63)] = 2482,
  [SMALL_STATE(64)] = 2514,
  [SMALL_STATE(65)] = 2536,
  [SMALL_STATE(66)] = 2568,
  [SMALL_STATE(67)] = 2600,
  [SMALL_STATE(68)] = 2624,
  [SMALL_STATE(69)] = 2646,
  [SMALL_STATE(70)] = 2668,
  [SMALL_STATE(71)] = 2689,
  [SMALL_STATE(72)] = 2723,
  [SMALL_STATE(73)] = 2757,
  [SMALL_STATE(74)] = 2791,
  [SMALL_STATE(75)] = 2825,
  [SMALL_STATE(76)] = 2859,
  [SMALL_STATE(77)] = 2893,
  [SMALL_STATE(78)] = 2927,
  [SMALL_STATE(79)] = 2950,
  [SMALL_STATE(80)] = 2966,
  [SMALL_STATE(81)] = 2986,
  [SMALL_STATE(82)] = 3006,
  [SMALL_STATE(83)] = 3022,
  [SMALL_STATE(84)] = 3038,
  [SMALL_STATE(85)] = 3054,
  [SMALL_STATE(86)] = 3070,
  [SMALL_STATE(87)] = 3086,
  [SMALL_STATE(88)] = 3106,
  [SMALL_STATE(89)] = 3122,
  [SMALL_STATE(90)] = 3142,
  [SMALL_STATE(91)] = 3158,
  [SMALL_STATE(92)] = 3174,
  [SMALL_STATE(93)] = 3190,
  [SMALL_STATE(94)] = 3206,
  [SMALL_STATE(95)] = 3222,
  [SMALL_STATE(96)] = 3238,
  [SMALL_STATE(97)] = 3254,
  [SMALL_STATE(98)] = 3274,
  [SMALL_STATE(99)] = 3290,
  [SMALL_STATE(100)] = 3306,
  [SMALL_STATE(101)] = 3322,
  [SMALL_STATE(102)] = 3338,
  [SMALL_STATE(103)] = 3355,
  [SMALL_STATE(104)] = 3372,
  [SMALL_STATE(105)] = 3389,
  [SMALL_STATE(106)] = 3406,
  [SMALL_STATE(107)] = 3423,
  [SMALL_STATE(108)] = 3440,
  [SMALL_STATE(109)] = 3457,
  [SMALL_STATE(110)] = 3474,
  [SMALL_STATE(111)] = 3491,
  [SMALL_STATE(112)] = 3508,
  [SMALL_STATE(113)] = 3527,
  [SMALL_STATE(114)] = 3552,
  [SMALL_STATE(115)] = 3577,
  [SMALL_STATE(116)] = 3594,
  [SMALL_STATE(117)] = 3611,
  [SMALL_STATE(118)] = 3636,
  [SMALL_STATE(119)] = 3650,
  [SMALL_STATE(120)] = 3666,
  [SMALL_STATE(121)] = 3680,
  [SMALL_STATE(122)] = 3694,
  [SMALL_STATE(123)] = 3708,
  [SMALL_STATE(124)] = 3722,
  [SMALL_STATE(125)] = 3738,
  [SMALL_STATE(126)] = 3754,
  [SMALL_STATE(127)] = 3768,
  [SMALL_STATE(128)] = 3784,
  [SMALL_STATE(129)] = 3804,
  [SMALL_STATE(130)] = 3824,
  [SMALL_STATE(131)] = 3838,
  [SMALL_STATE(132)] = 3854,
  [SMALL_STATE(133)] = 3868,
  [SMALL_STATE(134)] = 3886,
  [SMALL_STATE(135)] = 3902,
  [SMALL_STATE(136)] = 3916,
  [SMALL_STATE(137)] = 3930,
  [SMALL_STATE(138)] = 3944,
  [SMALL_STATE(139)] = 3960,
  [SMALL_STATE(140)] = 3974,
  [SMALL_STATE(141)] = 3994,
  [SMALL_STATE(142)] = 4008,
  [SMALL_STATE(143)] = 4022,
  [SMALL_STATE(144)] = 4036,
  [SMALL_STATE(145)] = 4050,
  [SMALL_STATE(146)] = 4068,
  [SMALL_STATE(147)] = 4082,
  [SMALL_STATE(148)] = 4098,
  [SMALL_STATE(149)] = 4114,
  [SMALL_STATE(150)] = 4128,
  [SMALL_STATE(151)] = 4142,
  [SMALL_STATE(152)] = 4156,
  [SMALL_STATE(153)] = 4170,
  [SMALL_STATE(154)] = 4184,
  [SMALL_STATE(155)] = 4197,
  [SMALL_STATE(156)] = 4210,
  [SMALL_STATE(157)] = 4223,
  [SMALL_STATE(158)] = 4238,
  [SMALL_STATE(159)] = 4251,
  [SMALL_STATE(160)] = 4264,
  [SMALL_STATE(161)] = 4277,
  [SMALL_STATE(162)] = 4290,
  [SMALL_STATE(163)] = 4309,
  [SMALL_STATE(164)] = 4322,
  [SMALL_STATE(165)] = 4335,
  [SMALL_STATE(166)] = 4354,
  [SMALL_STATE(167)] = 4373,
  [SMALL_STATE(168)] = 4392,
  [SMALL_STATE(169)] = 4405,
  [SMALL_STATE(170)] = 4422,
  [SMALL_STATE(171)] = 4435,
  [SMALL_STATE(172)] = 4448,
  [SMALL_STATE(173)] = 4461,
  [SMALL_STATE(174)] = 4472,
  [SMALL_STATE(175)] = 4485,
  [SMALL_STATE(176)] = 4496,
  [SMALL_STATE(177)] = 4509,
  [SMALL_STATE(178)] = 4522,
  [SMALL_STATE(179)] = 4535,
  [SMALL_STATE(180)] = 4548,
  [SMALL_STATE(181)] = 4561,
  [SMALL_STATE(182)] = 4572,
  [SMALL_STATE(183)] = 4585,
  [SMALL_STATE(184)] = 4598,
  [SMALL_STATE(185)] = 4611,
  [SMALL_STATE(186)] = 4624,
  [SMALL_STATE(187)] = 4637,
  [SMALL_STATE(188)] = 4650,
  [SMALL_STATE(189)] = 4663,
  [SMALL_STATE(190)] = 4674,
  [SMALL_STATE(191)] = 4687,
  [SMALL_STATE(192)] = 4698,
  [SMALL_STATE(193)] = 4711,
  [SMALL_STATE(194)] = 4722,
  [SMALL_STATE(195)] = 4735,
  [SMALL_STATE(196)] = 4743,
  [SMALL_STATE(197)] = 4751,
  [SMALL_STATE(198)] = 4759,
  [SMALL_STATE(199)] = 4767,
  [SMALL_STATE(200)] = 4775,
  [SMALL_STATE(201)] = 4783,
  [SMALL_STATE(202)] = 4791,
  [SMALL_STATE(203)] = 4799,
  [SMALL_STATE(204)] = 4807,
  [SMALL_STATE(205)] = 4815,
  [SMALL_STATE(206)] = 4822,
  [SMALL_STATE(207)] = 4829,
  [SMALL_STATE(208)] = 4836,
  [SMALL_STATE(209)] = 4843,
  [SMALL_STATE(210)] = 4850,
  [SMALL_STATE(211)] = 4857,
  [SMALL_STATE(212)] = 4864,
  [SMALL_STATE(213)] = 4871,
  [SMALL_STATE(214)] = 4878,
  [SMALL_STATE(215)] = 4885,
  [SMALL_STATE(216)] = 4892,
  [SMALL_STATE(217)] = 4899,
  [SMALL_STATE(218)] = 4906,
  [SMALL_STATE(219)] = 4913,
  [SMALL_STATE(220)] = 4920,
  [SMALL_STATE(221)] = 4927,
  [SMALL_STATE(222)] = 4934,
  [SMALL_STATE(223)] = 4941,
  [SMALL_STATE(224)] = 4948,
  [SMALL_STATE(225)] = 4955,
  [SMALL_STATE(226)] = 4962,
  [SMALL_STATE(227)] = 4969,
  [SMALL_STATE(228)] = 4976,
  [SMALL_STATE(229)] = 4983,
  [SMALL_STATE(230)] = 4990,
  [SMALL_STATE(231)] = 4997,
  [SMALL_STATE(232)] = 5004,
  [SMALL_STATE(233)] = 5011,
  [SMALL_STATE(234)] = 5018,
  [SMALL_STATE(235)] = 5025,
  [SMALL_STATE(236)] = 5032,
  [SMALL_STATE(237)] = 5039,
  [SMALL_STATE(238)] = 5046,
  [SMALL_STATE(239)] = 5053,
  [SMALL_STATE(240)] = 5060,
  [SMALL_STATE(241)] = 5067,
  [SMALL_STATE(242)] = 5074,
  [SMALL_STATE(243)] = 5081,
  [SMALL_STATE(244)] = 5088,
  [SMALL_STATE(245)] = 5095,
  [SMALL_STATE(246)] = 5102,
  [SMALL_STATE(247)] = 5109,
  [SMALL_STATE(248)] = 5116,
  [SMALL_STATE(249)] = 5123,
  [SMALL_STATE(250)] = 5130,
  [SMALL_STATE(251)] = 5137,
  [SMALL_STATE(252)] = 5144,
  [SMALL_STATE(253)] = 5151,
  [SMALL_STATE(254)] = 5158,
  [SMALL_STATE(255)] = 5165,
  [SMALL_STATE(256)] = 5172,
  [SMALL_STATE(257)] = 5179,
  [SMALL_STATE(258)] = 5186,
  [SMALL_STATE(259)] = 5193,
  [SMALL_STATE(260)] = 5200,
  [SMALL_STATE(261)] = 5207,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(254),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(253),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(248),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(247),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__not_interpolation, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_interpolation, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(48),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(219),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(225),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(78),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(129),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(129),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(71),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_or, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(62),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(255),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(246),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_seq, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(97),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(251),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(252),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(27),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(29),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(87),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(248),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(247),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(24),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(23),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(81),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(244),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(245),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(26),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(20),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_and, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__optional_and, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 2, .production_id = 1),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 2, .production_id = 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(6),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(124),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(125),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(74),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(127),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(74),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 3, .production_id = 7),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat1, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 6),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_rule, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statements, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statements, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__suite, 1, .production_id = 3),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__suite, 1, .production_id = 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__suite, 2),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__suite, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_tag, 4, .production_id = 9),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_tag, 4, .production_id = 9),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 8),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, .production_id = 8),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statements, 4),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statements, 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statements, 3),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statements, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, .production_id = 11),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_interpolation, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_interpolation, 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 10),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 10),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 12),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, .production_id = 5),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 13),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_action, 4, .production_id = 14),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep_action, 4, .production_id = 14),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 2),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(35),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__simple_statements_repeat1, 2), SHIFT_REPEAT(25),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__simple_statements_repeat1, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_choice, 1),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(49),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(43),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(42),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prioritized_match, 3, .production_id = 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic_match, 3, .production_id = 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [707] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
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
