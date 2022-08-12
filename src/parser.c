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
#define STATE_COUNT 248
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 13
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 17

enum {
  sym_comment = 1,
  anon_sym_DASH = 2,
  anon_sym_and = 3,
  anon_sym_not = 4,
  anon_sym_COLON = 5,
  anon_sym_os_COLON = 6,
  anon_sym_tag_COLON = 7,
  anon_sym_mode_COLON = 8,
  anon_sym_app_COLON = 9,
  anon_sym_app_DOTname_COLON = 10,
  anon_sym_app_DOTexe_COLON = 11,
  anon_sym_app_DOTbundle_COLON = 12,
  anon_sym_title_COLON = 13,
  anon_sym_code_DOTlanguage_COLON = 14,
  anon_sym_language_COLON = 15,
  anon_sym_tag_LPAREN_RPAREN = 16,
  anon_sym_settings_LPAREN_RPAREN = 17,
  anon_sym_EQ = 18,
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
  anon_sym_SLASH = 33,
  anon_sym_PERCENT = 34,
  anon_sym_or = 35,
  anon_sym_key_LPAREN = 36,
  aux_sym_key_action_token1 = 37,
  anon_sym_sleep_LPAREN = 38,
  anon_sym_LPAREN2 = 39,
  anon_sym_COMMA = 40,
  sym_identifier = 41,
  sym_integer = 42,
  sym_float = 43,
  aux_sym_regex_escape_sequence_token1 = 44,
  sym_implicit_string = 45,
  anon_sym_LBRACE_LBRACE = 46,
  anon_sym_RBRACE_RBRACE = 47,
  sym_string_escape_sequence = 48,
  sym__not_escapesequence = 49,
  sym__newline = 50,
  sym__indent = 51,
  sym__dedent = 52,
  sym__string_start = 53,
  sym_string_content = 54,
  sym__string_end = 55,
  sym__regex_start = 56,
  sym__regex_content = 57,
  sym__regex_end = 58,
  sym_source_file = 59,
  sym_context = 60,
  sym__optional_or = 61,
  sym_or = 62,
  sym__optional_and = 63,
  sym_and = 64,
  sym__optional_not = 65,
  sym_not = 66,
  sym_match = 67,
  sym__generic_match = 68,
  sym__prioritized_match = 69,
  sym_include_tag = 70,
  sym_settings = 71,
  sym_key_binding = 72,
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
  aux_sym_or_repeat1 = 105,
  aux_sym_block_repeat1 = 106,
  aux_sym_choice_repeat1 = 107,
  aux_sym_seq_repeat1 = 108,
  aux_sym_argument_list_repeat1 = 109,
  aux_sym_string_repeat1 = 110,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_DASH] = "-",
  [anon_sym_and] = "and",
  [anon_sym_not] = "not",
  [anon_sym_COLON] = ":",
  [anon_sym_os_COLON] = "os:",
  [anon_sym_tag_COLON] = "tag:",
  [anon_sym_mode_COLON] = "mode:",
  [anon_sym_app_COLON] = "app:",
  [anon_sym_app_DOTname_COLON] = "app.name:",
  [anon_sym_app_DOTexe_COLON] = "app.exe:",
  [anon_sym_app_DOTbundle_COLON] = "app.bundle:",
  [anon_sym_title_COLON] = "title:",
  [anon_sym_code_DOTlanguage_COLON] = "code.language:",
  [anon_sym_language_COLON] = "language:",
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
  [anon_sym_os_COLON] = anon_sym_os_COLON,
  [anon_sym_tag_COLON] = anon_sym_tag_COLON,
  [anon_sym_mode_COLON] = anon_sym_mode_COLON,
  [anon_sym_app_COLON] = anon_sym_app_COLON,
  [anon_sym_app_DOTname_COLON] = anon_sym_app_DOTname_COLON,
  [anon_sym_app_DOTexe_COLON] = anon_sym_app_DOTexe_COLON,
  [anon_sym_app_DOTbundle_COLON] = anon_sym_app_DOTbundle_COLON,
  [anon_sym_title_COLON] = anon_sym_title_COLON,
  [anon_sym_code_DOTlanguage_COLON] = anon_sym_code_DOTlanguage_COLON,
  [anon_sym_language_COLON] = anon_sym_language_COLON,
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
  [anon_sym_os_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_app_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_app_DOTname_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_app_DOTexe_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_app_DOTbundle_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_code_DOTlanguage_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_language_COLON] = {
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
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 1},
  [14] = {.index = 16, .length = 2},
  [15] = {.index = 18, .length = 2},
  [16] = {.index = 20, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_pattern, 1},
  [2] =
    {field_key, 0, .inherited = true},
    {field_pattern, 0, .inherited = true},
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
    {field_key, 0},
    {field_pattern, 2},
  [11] =
    {field_rule, 0},
    {field_script, 2},
  [13] =
    {field_key, 0},
    {field_script, 2},
  [15] =
    {field_tag, 2},
  [16] =
    {field_action_name, 0},
    {field_arguments, 1},
  [18] =
    {field_left, 0},
    {field_right, 2},
  [20] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = sym_block,
  },
  [13] = {
    [0] = sym_string_content,
  },
  [16] = {
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
      if (eof) ADVANCE(129);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '$') ADVANCE(155);
      if (lookahead == '%') ADVANCE(226);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '0') ADVANCE(300);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(220);
      if (lookahead == '^') ADVANCE(154);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'k') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '{') ADVANCE(214);
      if (lookahead == '|') ADVANCE(153);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(126)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(299);
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
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(310);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(317);
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
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '$') ADVANCE(155);
      if (lookahead == '%') ADVANCE(226);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '0') ADVANCE(300);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(220);
      if (lookahead == '^') ADVANCE(154);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'k') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '{') ADVANCE(214);
      if (lookahead == '|') ADVANCE(153);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '$') ADVANCE(155);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == ']') ADVANCE(220);
      if (lookahead == '^') ADVANCE(154);
      if (lookahead == '{') ADVANCE(213);
      if (lookahead == '|') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (sym_word_character_set_1(lookahead)) ADVANCE(212);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '%') ADVANCE(226);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == '}') ADVANCE(215);
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
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '%') ADVANCE(226);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == '}') ADVANCE(215);
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
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '0') ADVANCE(300);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == 'k') ADVANCE(258);
      if (lookahead == 's') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '0') ADVANCE(300);
      if (lookahead == '\\') ADVANCE(318);
      if (lookahead == 'k') ADVANCE(258);
      if (lookahead == 's') ADVANCE(273);
      if (lookahead == '{') ADVANCE(214);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'a') ADVANCE(285);
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(287);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(287);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == 'a') ADVANCE(285);
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(283);
      if (lookahead == 'o') ADVANCE(287);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(131);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(228);
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ':') ADVANCE(141);
      END_STATE();
    case 30:
      if (lookahead == '(') ADVANCE(233);
      END_STATE();
    case 31:
      if (lookahead == '(') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(150);
      END_STATE();
    case 33:
      if (lookahead == ')') ADVANCE(151);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == ':') ADVANCE(143);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(81);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(140);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(142);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(147);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(145);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(144);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(149);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(146);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(148);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(106);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(302);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(303);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == 'n') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 101:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 103:
      if (lookahead == 'x') ADVANCE(65);
      END_STATE();
    case 104:
      if (lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 105:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 106:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(302);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(303);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 121:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 122:
      if (eof) ADVANCE(129);
      if (lookahead == '\n') SKIP(127)
      END_STATE();
    case 123:
      if (eof) ADVANCE(129);
      if (lookahead == '\n') SKIP(127)
      if (lookahead == '\r') SKIP(122)
      END_STATE();
    case 124:
      if (eof) ADVANCE(129);
      if (lookahead == '\n') SKIP(128)
      END_STATE();
    case 125:
      if (eof) ADVANCE(129);
      if (lookahead == '\n') SKIP(128)
      if (lookahead == '\r') SKIP(124)
      END_STATE();
    case 126:
      if (eof) ADVANCE(129);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '$') ADVANCE(155);
      if (lookahead == '%') ADVANCE(226);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '+') ADVANCE(222);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '0') ADVANCE(300);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(220);
      if (lookahead == '^') ADVANCE(154);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'k') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == '{') ADVANCE(214);
      if (lookahead == '|') ADVANCE(153);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(126)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 127:
      if (eof) ADVANCE(129);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == '\\') SKIP(123)
      if (lookahead == '^') ADVANCE(154);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == 'k') ADVANCE(171);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == '{') ADVANCE(213);
      if (lookahead == '}') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(127)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_2(lookahead)) ADVANCE(212);
      END_STATE();
    case 128:
      if (eof) ADVANCE(129);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == '\\') SKIP(125)
      if (lookahead == '^') ADVANCE(154);
      if (lookahead == 'k') ADVANCE(202);
      if (lookahead == 's') ADVANCE(203);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == '{') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(128)
      if (sym_word_character_set_1(lookahead)) ADVANCE(212);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == ')') ADVANCE(131);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (sym_word_character_set_1(lookahead)) ADVANCE(212);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_os_COLON);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_tag_COLON);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_mode_COLON);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_app_COLON);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_app_DOTname_COLON);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_app_DOTexe_COLON);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_app_DOTbundle_COLON);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_title_COLON);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_code_DOTlanguage_COLON);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_language_COLON);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_tag_LPAREN_RPAREN);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_settings_LPAREN_RPAREN);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_start_anchor);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_end_anchor);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(228);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(228);
      if (sym_word_character_set_1(lookahead)) ADVANCE(212);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == '_') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(32);
      if (sym_word_character_set_1(lookahead)) ADVANCE(212);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(33);
      if (sym_word_character_set_1(lookahead)) ADVANCE(212);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == '_') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '_') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == '_') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == '_') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'd') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'g') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'g') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'g') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'g') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'l') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'n') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'n') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'o') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'o') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'o') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'p') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'p') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 't') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 't') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'u') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (lookahead == 'y') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '_') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '_') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '_') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (sym_word_character_set_3(lookahead)) ADVANCE(212);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(205);
      if (sym_word_character_set_4(lookahead)) ADVANCE(212);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(211);
      if (sym_word_character_set_1(lookahead)) ADVANCE(212);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(210);
      if (sym_word_character_set_1(lookahead)) ADVANCE(212);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(208);
      if (sym_word_character_set_1(lookahead)) ADVANCE(212);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(159);
      if (sym_word_character_set_1(lookahead)) ADVANCE(212);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(207);
      if (sym_word_character_set_1(lookahead)) ADVANCE(212);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(204);
      if (sym_word_character_set_1(lookahead)) ADVANCE(212);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(161);
      if (sym_word_character_set_1(lookahead)) ADVANCE(212);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(206);
      if (sym_word_character_set_1(lookahead)) ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(209);
      if (sym_word_character_set_1(lookahead)) ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'y') ADVANCE(157);
      if (sym_word_character_set_1(lookahead)) ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_word);
      if (sym_word_character_set_1(lookahead)) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(314);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(315);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_key_LPAREN);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(232);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_sleep_LPAREN);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(228);
      if (lookahead == '.') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(233);
      if (lookahead == '.') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == ':') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == ':') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == ':') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == ':') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == ':') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == ':') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == ':') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'i') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'a') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'd') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 's') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 't') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'x') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == 'y') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ':') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '_') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(44);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(45);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(46);
      if (lookahead == '_') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(106);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(298);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(308);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(309);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_regex_escape_sequence_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\r') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      if (lookahead == '\\') ADVANCE(318);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__not_escapesequence);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(3);
      if (sym_string_escape_sequence_character_set_1(lookahead)) ADVANCE(316);
      if (lookahead == 'U') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(116);
      if (lookahead == 'x') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 127, .external_lex_state = 2},
  [2] = {.lex_state = 128, .external_lex_state = 2},
  [3] = {.lex_state = 128, .external_lex_state = 2},
  [4] = {.lex_state = 128, .external_lex_state = 2},
  [5] = {.lex_state = 128, .external_lex_state = 2},
  [6] = {.lex_state = 23, .external_lex_state = 3},
  [7] = {.lex_state = 22, .external_lex_state = 4},
  [8] = {.lex_state = 24, .external_lex_state = 2},
  [9] = {.lex_state = 24, .external_lex_state = 2},
  [10] = {.lex_state = 22, .external_lex_state = 4},
  [11] = {.lex_state = 22, .external_lex_state = 4},
  [12] = {.lex_state = 22, .external_lex_state = 5},
  [13] = {.lex_state = 24, .external_lex_state = 2},
  [14] = {.lex_state = 22, .external_lex_state = 5},
  [15] = {.lex_state = 22, .external_lex_state = 5},
  [16] = {.lex_state = 24, .external_lex_state = 2},
  [17] = {.lex_state = 19, .external_lex_state = 2},
  [18] = {.lex_state = 19, .external_lex_state = 6},
  [19] = {.lex_state = 19, .external_lex_state = 2},
  [20] = {.lex_state = 19, .external_lex_state = 2},
  [21] = {.lex_state = 19, .external_lex_state = 2},
  [22] = {.lex_state = 19, .external_lex_state = 2},
  [23] = {.lex_state = 19, .external_lex_state = 2},
  [24] = {.lex_state = 19, .external_lex_state = 7},
  [25] = {.lex_state = 19, .external_lex_state = 2},
  [26] = {.lex_state = 22, .external_lex_state = 8},
  [27] = {.lex_state = 22, .external_lex_state = 8},
  [28] = {.lex_state = 22, .external_lex_state = 8},
  [29] = {.lex_state = 19, .external_lex_state = 7},
  [30] = {.lex_state = 19, .external_lex_state = 6},
  [31] = {.lex_state = 22, .external_lex_state = 8},
  [32] = {.lex_state = 22, .external_lex_state = 8},
  [33] = {.lex_state = 22, .external_lex_state = 8},
  [34] = {.lex_state = 19, .external_lex_state = 2},
  [35] = {.lex_state = 19, .external_lex_state = 7},
  [36] = {.lex_state = 19, .external_lex_state = 2},
  [37] = {.lex_state = 22, .external_lex_state = 8},
  [38] = {.lex_state = 19, .external_lex_state = 2},
  [39] = {.lex_state = 19, .external_lex_state = 2},
  [40] = {.lex_state = 22, .external_lex_state = 8},
  [41] = {.lex_state = 19, .external_lex_state = 2},
  [42] = {.lex_state = 19, .external_lex_state = 6},
  [43] = {.lex_state = 22, .external_lex_state = 8},
  [44] = {.lex_state = 22, .external_lex_state = 9},
  [45] = {.lex_state = 22, .external_lex_state = 9},
  [46] = {.lex_state = 22, .external_lex_state = 9},
  [47] = {.lex_state = 22, .external_lex_state = 9},
  [48] = {.lex_state = 22, .external_lex_state = 9},
  [49] = {.lex_state = 22, .external_lex_state = 9},
  [50] = {.lex_state = 22, .external_lex_state = 9},
  [51] = {.lex_state = 22, .external_lex_state = 9},
  [52] = {.lex_state = 22, .external_lex_state = 9},
  [53] = {.lex_state = 22, .external_lex_state = 9},
  [54] = {.lex_state = 22, .external_lex_state = 9},
  [55] = {.lex_state = 22, .external_lex_state = 9},
  [56] = {.lex_state = 22, .external_lex_state = 9},
  [57] = {.lex_state = 22, .external_lex_state = 9},
  [58] = {.lex_state = 25, .external_lex_state = 2},
  [59] = {.lex_state = 25, .external_lex_state = 2},
  [60] = {.lex_state = 19, .external_lex_state = 2},
  [61] = {.lex_state = 25, .external_lex_state = 2},
  [62] = {.lex_state = 19, .external_lex_state = 2},
  [63] = {.lex_state = 25, .external_lex_state = 2},
  [64] = {.lex_state = 26, .external_lex_state = 2},
  [65] = {.lex_state = 19, .external_lex_state = 2},
  [66] = {.lex_state = 24, .external_lex_state = 2},
  [67] = {.lex_state = 23, .external_lex_state = 10},
  [68] = {.lex_state = 23, .external_lex_state = 10},
  [69] = {.lex_state = 23, .external_lex_state = 10},
  [70] = {.lex_state = 23, .external_lex_state = 10},
  [71] = {.lex_state = 23, .external_lex_state = 10},
  [72] = {.lex_state = 23, .external_lex_state = 10},
  [73] = {.lex_state = 23, .external_lex_state = 10},
  [74] = {.lex_state = 128, .external_lex_state = 2},
  [75] = {.lex_state = 19, .external_lex_state = 7},
  [76] = {.lex_state = 128, .external_lex_state = 2},
  [77] = {.lex_state = 19, .external_lex_state = 2},
  [78] = {.lex_state = 20, .external_lex_state = 11},
  [79] = {.lex_state = 19, .external_lex_state = 2},
  [80] = {.lex_state = 128, .external_lex_state = 2},
  [81] = {.lex_state = 19, .external_lex_state = 6},
  [82] = {.lex_state = 19, .external_lex_state = 2},
  [83] = {.lex_state = 19, .external_lex_state = 2},
  [84] = {.lex_state = 19, .external_lex_state = 2},
  [85] = {.lex_state = 19, .external_lex_state = 2},
  [86] = {.lex_state = 19, .external_lex_state = 6},
  [87] = {.lex_state = 19, .external_lex_state = 7},
  [88] = {.lex_state = 128, .external_lex_state = 2},
  [89] = {.lex_state = 128, .external_lex_state = 2},
  [90] = {.lex_state = 19, .external_lex_state = 7},
  [91] = {.lex_state = 19, .external_lex_state = 7},
  [92] = {.lex_state = 128, .external_lex_state = 2},
  [93] = {.lex_state = 128, .external_lex_state = 2},
  [94] = {.lex_state = 128, .external_lex_state = 2},
  [95] = {.lex_state = 128, .external_lex_state = 2},
  [96] = {.lex_state = 19, .external_lex_state = 7},
  [97] = {.lex_state = 19, .external_lex_state = 6},
  [98] = {.lex_state = 19, .external_lex_state = 6},
  [99] = {.lex_state = 19, .external_lex_state = 2},
  [100] = {.lex_state = 20, .external_lex_state = 7},
  [101] = {.lex_state = 19, .external_lex_state = 7},
  [102] = {.lex_state = 19, .external_lex_state = 7},
  [103] = {.lex_state = 19, .external_lex_state = 6},
  [104] = {.lex_state = 128, .external_lex_state = 2},
  [105] = {.lex_state = 128, .external_lex_state = 2},
  [106] = {.lex_state = 19, .external_lex_state = 6},
  [107] = {.lex_state = 19, .external_lex_state = 6},
  [108] = {.lex_state = 0, .external_lex_state = 7},
  [109] = {.lex_state = 0, .external_lex_state = 7},
  [110] = {.lex_state = 0, .external_lex_state = 7},
  [111] = {.lex_state = 20, .external_lex_state = 12},
  [112] = {.lex_state = 20, .external_lex_state = 11},
  [113] = {.lex_state = 0, .external_lex_state = 7},
  [114] = {.lex_state = 0, .external_lex_state = 7},
  [115] = {.lex_state = 0, .external_lex_state = 7},
  [116] = {.lex_state = 0, .external_lex_state = 7},
  [117] = {.lex_state = 23, .external_lex_state = 10},
  [118] = {.lex_state = 0, .external_lex_state = 7},
  [119] = {.lex_state = 23, .external_lex_state = 10},
  [120] = {.lex_state = 0, .external_lex_state = 7},
  [121] = {.lex_state = 0, .external_lex_state = 7},
  [122] = {.lex_state = 23, .external_lex_state = 10},
  [123] = {.lex_state = 23, .external_lex_state = 10},
  [124] = {.lex_state = 0, .external_lex_state = 7},
  [125] = {.lex_state = 0, .external_lex_state = 7},
  [126] = {.lex_state = 0, .external_lex_state = 7},
  [127] = {.lex_state = 0, .external_lex_state = 7},
  [128] = {.lex_state = 0, .external_lex_state = 7},
  [129] = {.lex_state = 0, .external_lex_state = 7},
  [130] = {.lex_state = 22, .external_lex_state = 5},
  [131] = {.lex_state = 0, .external_lex_state = 7},
  [132] = {.lex_state = 0, .external_lex_state = 11},
  [133] = {.lex_state = 20, .external_lex_state = 12},
  [134] = {.lex_state = 0, .external_lex_state = 7},
  [135] = {.lex_state = 0, .external_lex_state = 11},
  [136] = {.lex_state = 0, .external_lex_state = 11},
  [137] = {.lex_state = 0, .external_lex_state = 7},
  [138] = {.lex_state = 0, .external_lex_state = 11},
  [139] = {.lex_state = 20, .external_lex_state = 12},
  [140] = {.lex_state = 20, .external_lex_state = 12},
  [141] = {.lex_state = 20, .external_lex_state = 12},
  [142] = {.lex_state = 20, .external_lex_state = 12},
  [143] = {.lex_state = 20, .external_lex_state = 12},
  [144] = {.lex_state = 20, .external_lex_state = 12},
  [145] = {.lex_state = 20, .external_lex_state = 12},
  [146] = {.lex_state = 0, .external_lex_state = 11},
  [147] = {.lex_state = 20, .external_lex_state = 12},
  [148] = {.lex_state = 20, .external_lex_state = 12},
  [149] = {.lex_state = 0, .external_lex_state = 11},
  [150] = {.lex_state = 20, .external_lex_state = 12},
  [151] = {.lex_state = 20, .external_lex_state = 12},
  [152] = {.lex_state = 20, .external_lex_state = 12},
  [153] = {.lex_state = 0, .external_lex_state = 11},
  [154] = {.lex_state = 0, .external_lex_state = 11},
  [155] = {.lex_state = 0, .external_lex_state = 11},
  [156] = {.lex_state = 0, .external_lex_state = 7},
  [157] = {.lex_state = 0, .external_lex_state = 11},
  [158] = {.lex_state = 0, .external_lex_state = 11},
  [159] = {.lex_state = 0, .external_lex_state = 11},
  [160] = {.lex_state = 0, .external_lex_state = 11},
  [161] = {.lex_state = 0, .external_lex_state = 11},
  [162] = {.lex_state = 0, .external_lex_state = 11},
  [163] = {.lex_state = 20, .external_lex_state = 12},
  [164] = {.lex_state = 0, .external_lex_state = 7},
  [165] = {.lex_state = 0, .external_lex_state = 7},
  [166] = {.lex_state = 0, .external_lex_state = 7},
  [167] = {.lex_state = 0, .external_lex_state = 7},
  [168] = {.lex_state = 0, .external_lex_state = 6},
  [169] = {.lex_state = 0, .external_lex_state = 7},
  [170] = {.lex_state = 0, .external_lex_state = 7},
  [171] = {.lex_state = 0, .external_lex_state = 7},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 6},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 7},
  [179] = {.lex_state = 0, .external_lex_state = 6},
  [180] = {.lex_state = 0, .external_lex_state = 7},
  [181] = {.lex_state = 0, .external_lex_state = 6},
  [182] = {.lex_state = 0, .external_lex_state = 6},
  [183] = {.lex_state = 0, .external_lex_state = 6},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 7},
  [186] = {.lex_state = 0, .external_lex_state = 6},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 7},
  [190] = {.lex_state = 0, .external_lex_state = 7},
  [191] = {.lex_state = 0, .external_lex_state = 6},
  [192] = {.lex_state = 0, .external_lex_state = 11},
  [193] = {.lex_state = 0, .external_lex_state = 6},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 11},
  [196] = {.lex_state = 127, .external_lex_state = 12},
  [197] = {.lex_state = 27, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 11},
  [199] = {.lex_state = 0, .external_lex_state = 11},
  [200] = {.lex_state = 127, .external_lex_state = 12},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 6},
  [203] = {.lex_state = 0, .external_lex_state = 7},
  [204] = {.lex_state = 0, .external_lex_state = 7},
  [205] = {.lex_state = 0, .external_lex_state = 7},
  [206] = {.lex_state = 0, .external_lex_state = 7},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 7},
  [210] = {.lex_state = 0, .external_lex_state = 11},
  [211] = {.lex_state = 0, .external_lex_state = 7},
  [212] = {.lex_state = 231, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 7},
  [214] = {.lex_state = 0, .external_lex_state = 6},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 127, .external_lex_state = 12},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 312, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 7},
  [221] = {.lex_state = 0, .external_lex_state = 7},
  [222] = {.lex_state = 0, .external_lex_state = 11},
  [223] = {.lex_state = 0, .external_lex_state = 11},
  [224] = {.lex_state = 0, .external_lex_state = 11},
  [225] = {.lex_state = 0, .external_lex_state = 7},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 7},
  [228] = {.lex_state = 0, .external_lex_state = 11},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 7},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 7},
  [233] = {.lex_state = 27, .external_lex_state = 2},
  [234] = {.lex_state = 27, .external_lex_state = 2},
  [235] = {.lex_state = 231, .external_lex_state = 2},
  [236] = {.lex_state = 27, .external_lex_state = 2},
  [237] = {.lex_state = 231, .external_lex_state = 2},
  [238] = {.lex_state = 27, .external_lex_state = 2},
  [239] = {.lex_state = 231, .external_lex_state = 2},
  [240] = {.lex_state = 27, .external_lex_state = 2},
  [241] = {.lex_state = 27, .external_lex_state = 2},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 231, .external_lex_state = 2},
  [245] = {.lex_state = 312, .external_lex_state = 2},
  [246] = {.lex_state = 231, .external_lex_state = 2},
  [247] = {.lex_state = 231, .external_lex_state = 2},
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
    [ts_external_token_RBRACK] = true,
  },
  [7] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_os_COLON] = ACTIONS(1),
    [anon_sym_tag_COLON] = ACTIONS(1),
    [anon_sym_mode_COLON] = ACTIONS(1),
    [anon_sym_app_COLON] = ACTIONS(1),
    [anon_sym_app_DOTname_COLON] = ACTIONS(1),
    [anon_sym_app_DOTexe_COLON] = ACTIONS(1),
    [anon_sym_app_DOTbundle_COLON] = ACTIONS(1),
    [anon_sym_title_COLON] = ACTIONS(1),
    [anon_sym_code_DOTlanguage_COLON] = ACTIONS(1),
    [anon_sym_language_COLON] = ACTIONS(1),
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
    [sym_source_file] = STATE(229),
    [sym_context] = STATE(5),
    [sym__optional_or] = STATE(226),
    [sym_or] = STATE(226),
    [sym__optional_and] = STATE(13),
    [sym_and] = STATE(13),
    [sym__optional_not] = STATE(58),
    [sym_not] = STATE(58),
    [sym_match] = STATE(58),
    [sym__generic_match] = STATE(223),
    [sym__prioritized_match] = STATE(222),
    [sym_include_tag] = STATE(3),
    [sym_settings] = STATE(3),
    [sym_key_binding] = STATE(3),
    [sym_command] = STATE(3),
    [sym_rule] = STATE(216),
    [sym__optional_choice] = STATE(215),
    [sym_choice] = STATE(215),
    [sym__optional_anchor] = STATE(172),
    [sym__optional_seq] = STATE(175),
    [sym_seq] = STATE(175),
    [sym__primary_rule] = STATE(23),
    [sym_list] = STATE(23),
    [sym_capture] = STATE(23),
    [sym_optional] = STATE(23),
    [sym_repeat] = STATE(23),
    [sym_repeat1] = STATE(23),
    [sym_parenthesized_rule] = STATE(23),
    [sym_key_action] = STATE(207),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(9),
    [anon_sym_os_COLON] = ACTIONS(11),
    [anon_sym_tag_COLON] = ACTIONS(11),
    [anon_sym_mode_COLON] = ACTIONS(11),
    [anon_sym_app_COLON] = ACTIONS(11),
    [anon_sym_app_DOTname_COLON] = ACTIONS(11),
    [anon_sym_app_DOTexe_COLON] = ACTIONS(11),
    [anon_sym_app_DOTbundle_COLON] = ACTIONS(11),
    [anon_sym_title_COLON] = ACTIONS(11),
    [anon_sym_code_DOTlanguage_COLON] = ACTIONS(11),
    [anon_sym_language_COLON] = ACTIONS(11),
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
    STATE(172), 1,
      sym__optional_anchor,
    STATE(207), 1,
      sym_key_action,
    STATE(216), 1,
      sym_rule,
    STATE(175), 2,
      sym__optional_seq,
      sym_seq,
    STATE(215), 2,
      sym__optional_choice,
      sym_choice,
    STATE(2), 5,
      sym_include_tag,
      sym_settings,
      sym_key_binding,
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
    STATE(172), 1,
      sym__optional_anchor,
    STATE(207), 1,
      sym_key_action,
    STATE(216), 1,
      sym_rule,
    STATE(175), 2,
      sym__optional_seq,
      sym_seq,
    STATE(215), 2,
      sym__optional_choice,
      sym_choice,
    STATE(2), 5,
      sym_include_tag,
      sym_settings,
      sym_key_binding,
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
    STATE(172), 1,
      sym__optional_anchor,
    STATE(207), 1,
      sym_key_action,
    STATE(216), 1,
      sym_rule,
    STATE(175), 2,
      sym__optional_seq,
      sym_seq,
    STATE(215), 2,
      sym__optional_choice,
      sym_choice,
    STATE(2), 5,
      sym_include_tag,
      sym_settings,
      sym_key_binding,
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
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(172), 1,
      sym__optional_anchor,
    STATE(207), 1,
      sym_key_action,
    STATE(216), 1,
      sym_rule,
    STATE(175), 2,
      sym__optional_seq,
      sym_seq,
    STATE(215), 2,
      sym__optional_choice,
      sym_choice,
    STATE(4), 5,
      sym_include_tag,
      sym_settings,
      sym_key_binding,
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
    STATE(163), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [313] = 14,
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
      sym__newline,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(100), 1,
      sym__string_start,
    STATE(74), 1,
      sym__statement_suite,
    STATE(76), 1,
      sym__simple_statement,
    STATE(228), 2,
      sym_assignment,
      sym_expression,
    STATE(135), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [364] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_DASH,
    STATE(222), 1,
      sym__prioritized_match,
    STATE(223), 1,
      sym__generic_match,
    STATE(9), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(58), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(11), 10,
      anon_sym_os_COLON,
      anon_sym_tag_COLON,
      anon_sym_mode_COLON,
      anon_sym_app_COLON,
      anon_sym_app_DOTname_COLON,
      anon_sym_app_DOTexe_COLON,
      anon_sym_app_DOTbundle_COLON,
      anon_sym_title_COLON,
      anon_sym_code_DOTlanguage_COLON,
      anon_sym_language_COLON,
  [405] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      anon_sym_not,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(222), 1,
      sym__prioritized_match,
    STATE(223), 1,
      sym__generic_match,
    STATE(9), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(58), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(109), 10,
      anon_sym_os_COLON,
      anon_sym_tag_COLON,
      anon_sym_mode_COLON,
      anon_sym_app_COLON,
      anon_sym_app_DOTname_COLON,
      anon_sym_app_DOTexe_COLON,
      anon_sym_app_DOTbundle_COLON,
      anon_sym_title_COLON,
      anon_sym_code_DOTlanguage_COLON,
      anon_sym_language_COLON,
  [446] = 14,
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
      sym__newline,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(100), 1,
      sym__string_start,
    STATE(76), 1,
      sym__simple_statement,
    STATE(89), 1,
      sym__statement_suite,
    STATE(228), 2,
      sym_assignment,
      sym_expression,
    STATE(135), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [497] = 14,
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
      sym__newline,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(100), 1,
      sym__string_start,
    STATE(76), 1,
      sym__simple_statement,
    STATE(92), 1,
      sym__statement_suite,
    STATE(228), 2,
      sym_assignment,
      sym_expression,
    STATE(135), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [548] = 13,
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
    ACTIONS(100), 1,
      sym__string_start,
    ACTIONS(115), 1,
      sym__dedent,
    STATE(95), 1,
      sym_block,
    STATE(14), 2,
      sym__simple_statement,
      aux_sym_block_repeat1,
    STATE(192), 2,
      sym_assignment,
      sym_expression,
    STATE(135), 8,
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
    STATE(222), 1,
      sym__prioritized_match,
    STATE(223), 1,
      sym__generic_match,
    STATE(8), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(58), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(11), 10,
      anon_sym_os_COLON,
      anon_sym_tag_COLON,
      anon_sym_mode_COLON,
      anon_sym_app_COLON,
      anon_sym_app_DOTname_COLON,
      anon_sym_app_DOTexe_COLON,
      anon_sym_app_DOTbundle_COLON,
      anon_sym_title_COLON,
      anon_sym_code_DOTlanguage_COLON,
      anon_sym_language_COLON,
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
    ACTIONS(100), 1,
      sym__string_start,
    ACTIONS(119), 1,
      sym__dedent,
    STATE(15), 2,
      sym__simple_statement,
      aux_sym_block_repeat1,
    STATE(192), 2,
      sym_assignment,
      sym_expression,
    STATE(135), 8,
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
    STATE(192), 2,
      sym_assignment,
      sym_expression,
    STATE(135), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [730] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(222), 1,
      sym__prioritized_match,
    STATE(223), 1,
      sym__generic_match,
    STATE(66), 2,
      sym__optional_and,
      sym_and,
    STATE(58), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(11), 10,
      anon_sym_os_COLON,
      anon_sym_tag_COLON,
      anon_sym_mode_COLON,
      anon_sym_app_COLON,
      anon_sym_app_DOTname_COLON,
      anon_sym_app_DOTexe_COLON,
      anon_sym_app_DOTbundle_COLON,
      anon_sym_title_COLON,
      anon_sym_code_DOTlanguage_COLON,
      anon_sym_language_COLON,
  [767] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_start_anchor,
    ACTIONS(146), 1,
      sym_word,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_LT,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    STATE(170), 1,
      sym__optional_anchor,
    STATE(169), 2,
      sym__optional_seq,
      sym_seq,
    STATE(220), 2,
      sym__optional_choice,
      sym_choice,
    STATE(24), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [809] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_word,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      aux_sym_seq_repeat1,
    ACTIONS(156), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(106), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [851] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_start_anchor,
    ACTIONS(146), 1,
      sym_word,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_LT,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    STATE(170), 1,
      sym__optional_anchor,
    STATE(169), 2,
      sym__optional_seq,
      sym_seq,
    STATE(205), 2,
      sym__optional_choice,
      sym_choice,
    STATE(24), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [893] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      sym_start_anchor,
    ACTIONS(174), 1,
      sym_word,
    STATE(176), 1,
      sym__optional_anchor,
    STATE(179), 2,
      sym__optional_seq,
      sym_seq,
    STATE(214), 2,
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
  [935] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      sym_start_anchor,
    ACTIONS(174), 1,
      sym_word,
    STATE(176), 1,
      sym__optional_anchor,
    STATE(179), 2,
      sym__optional_seq,
      sym_seq,
    STATE(202), 2,
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
  [977] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_start_anchor,
    ACTIONS(146), 1,
      sym_word,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_LT,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    STATE(170), 1,
      sym__optional_anchor,
    STATE(169), 2,
      sym__optional_seq,
      sym_seq,
    STATE(203), 2,
      sym__optional_choice,
      sym_choice,
    STATE(24), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1019] = 11,
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
    ACTIONS(176), 1,
      sym_word,
    ACTIONS(178), 1,
      anon_sym_STAR,
    ACTIONS(180), 1,
      anon_sym_PLUS,
    STATE(38), 1,
      aux_sym_seq_repeat1,
    ACTIONS(156), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(79), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1061] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_LT,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      sym_word,
    ACTIONS(184), 1,
      anon_sym_STAR,
    ACTIONS(186), 1,
      anon_sym_PLUS,
    STATE(29), 1,
      aux_sym_seq_repeat1,
    ACTIONS(156), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(101), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1103] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      sym_start_anchor,
    ACTIONS(174), 1,
      sym_word,
    STATE(176), 1,
      sym__optional_anchor,
    STATE(179), 2,
      sym__optional_seq,
      sym_seq,
    STATE(193), 2,
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
  [1145] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    ACTIONS(192), 1,
      anon_sym_key_LPAREN,
    ACTIONS(194), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      sym_integer,
    ACTIONS(202), 1,
      sym_float,
    ACTIONS(204), 1,
      sym__string_start,
    STATE(109), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1186] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_key_LPAREN,
    ACTIONS(194), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym__string_start,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      sym_integer,
    ACTIONS(212), 1,
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
  [1227] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_key_LPAREN,
    ACTIONS(194), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym__string_start,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      sym_integer,
    ACTIONS(220), 1,
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
  [1268] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_LT,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      sym_word,
    STATE(35), 1,
      aux_sym_seq_repeat1,
    ACTIONS(222), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(101), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1304] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_word,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      aux_sym_seq_repeat1,
    ACTIONS(222), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(106), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1340] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_key_LPAREN,
    ACTIONS(194), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym__string_start,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    ACTIONS(226), 1,
      sym_integer,
    ACTIONS(228), 1,
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
  [1378] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_key_LPAREN,
    ACTIONS(194), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym__string_start,
    ACTIONS(226), 1,
      sym_integer,
    ACTIONS(228), 1,
      sym_float,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(121), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1416] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_key_LPAREN,
    ACTIONS(194), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym__string_start,
    ACTIONS(226), 1,
      sym_integer,
    ACTIONS(228), 1,
      sym_float,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    STATE(121), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1454] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym_word,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_LT,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      aux_sym_seq_repeat1,
    ACTIONS(234), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(79), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1490] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_word,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      aux_sym_seq_repeat1,
    ACTIONS(234), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(101), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1526] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_start_anchor,
    ACTIONS(146), 1,
      sym_word,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_LT,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym__optional_anchor,
    STATE(169), 2,
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
  [1564] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_key_LPAREN,
    ACTIONS(194), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym__string_start,
    ACTIONS(226), 1,
      sym_integer,
    ACTIONS(228), 1,
      sym_float,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(121), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1602] = 9,
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
    ACTIONS(176), 1,
      sym_word,
    STATE(34), 1,
      aux_sym_seq_repeat1,
    ACTIONS(222), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(79), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1638] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      sym_start_anchor,
    ACTIONS(174), 1,
      sym_word,
    STATE(191), 1,
      sym__optional_anchor,
    STATE(179), 2,
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
  [1676] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_key_LPAREN,
    ACTIONS(194), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym__string_start,
    ACTIONS(226), 1,
      sym_integer,
    ACTIONS(228), 1,
      sym_float,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(121), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1714] = 10,
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
    ACTIONS(270), 1,
      sym_word,
    STATE(188), 1,
      sym__optional_anchor,
    STATE(175), 2,
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
  [1752] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_word,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_LT,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      aux_sym_seq_repeat1,
    ACTIONS(234), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(106), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1788] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_key_LPAREN,
    ACTIONS(194), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym__string_start,
    ACTIONS(226), 1,
      sym_integer,
    ACTIONS(228), 1,
      sym_float,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(121), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1826] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_key_LPAREN,
    ACTIONS(194), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym__string_start,
    ACTIONS(289), 1,
      sym_integer,
    ACTIONS(291), 1,
      sym_float,
    STATE(127), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1861] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym__string_start,
    ACTIONS(293), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_key_LPAREN,
    ACTIONS(297), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(299), 1,
      sym_integer,
    ACTIONS(301), 1,
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
  [1896] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_key_LPAREN,
    ACTIONS(88), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(100), 1,
      sym__string_start,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_integer,
    ACTIONS(307), 1,
      sym_float,
    STATE(155), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1931] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym__string_start,
    ACTIONS(293), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_key_LPAREN,
    ACTIONS(297), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(309), 1,
      sym_integer,
    ACTIONS(311), 1,
      sym_float,
    STATE(143), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1966] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym__string_start,
    ACTIONS(293), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_key_LPAREN,
    ACTIONS(297), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(313), 1,
      sym_integer,
    ACTIONS(315), 1,
      sym_float,
    STATE(144), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2001] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_key_LPAREN,
    ACTIONS(194), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym__string_start,
    ACTIONS(317), 1,
      sym_integer,
    ACTIONS(319), 1,
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
  [2036] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_key_LPAREN,
    ACTIONS(88), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(100), 1,
      sym__string_start,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(321), 1,
      sym_integer,
    ACTIONS(323), 1,
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
  [2071] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_key_LPAREN,
    ACTIONS(194), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym__string_start,
    ACTIONS(325), 1,
      sym_integer,
    ACTIONS(327), 1,
      sym_float,
    STATE(129), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2106] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_key_LPAREN,
    ACTIONS(194), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym__string_start,
    ACTIONS(226), 1,
      sym_integer,
    ACTIONS(228), 1,
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
  [2141] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_key_LPAREN,
    ACTIONS(194), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym__string_start,
    ACTIONS(329), 1,
      sym_integer,
    ACTIONS(331), 1,
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
  [2176] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_key_LPAREN,
    ACTIONS(194), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym__string_start,
    ACTIONS(333), 1,
      sym_integer,
    ACTIONS(335), 1,
      sym_float,
    STATE(125), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2211] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_key_LPAREN,
    ACTIONS(88), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(100), 1,
      sym__string_start,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(337), 1,
      sym_integer,
    ACTIONS(339), 1,
      sym_float,
    STATE(149), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2246] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_key_LPAREN,
    ACTIONS(194), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym__string_start,
    ACTIONS(341), 1,
      sym_integer,
    ACTIONS(343), 1,
      sym_float,
    STATE(156), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2281] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_key_LPAREN,
    ACTIONS(88), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(100), 1,
      sym__string_start,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(345), 1,
      sym_integer,
    ACTIONS(347), 1,
      sym_float,
    STATE(154), 8,
      sym__expression,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_and,
    ACTIONS(353), 2,
      anon_sym_not,
      sym_identifier,
    ACTIONS(349), 11,
      anon_sym_DASH,
      anon_sym_os_COLON,
      anon_sym_tag_COLON,
      anon_sym_mode_COLON,
      anon_sym_app_COLON,
      anon_sym_app_DOTname_COLON,
      anon_sym_app_DOTexe_COLON,
      anon_sym_app_DOTbundle_COLON,
      anon_sym_title_COLON,
      anon_sym_code_DOTlanguage_COLON,
      anon_sym_language_COLON,
  [2340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 3,
      anon_sym_and,
      anon_sym_not,
      sym_identifier,
    ACTIONS(355), 11,
      anon_sym_DASH,
      anon_sym_os_COLON,
      anon_sym_tag_COLON,
      anon_sym_mode_COLON,
      anon_sym_app_COLON,
      anon_sym_app_DOTname_COLON,
      anon_sym_app_DOTexe_COLON,
      anon_sym_app_DOTbundle_COLON,
      anon_sym_title_COLON,
      anon_sym_code_DOTlanguage_COLON,
      anon_sym_language_COLON,
  [2362] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_word,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_LT,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    STATE(178), 2,
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
  [2394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 3,
      anon_sym_and,
      anon_sym_not,
      sym_identifier,
    ACTIONS(359), 11,
      anon_sym_DASH,
      anon_sym_os_COLON,
      anon_sym_tag_COLON,
      anon_sym_mode_COLON,
      anon_sym_app_COLON,
      anon_sym_app_DOTname_COLON,
      anon_sym_app_DOTexe_COLON,
      anon_sym_app_DOTbundle_COLON,
      anon_sym_title_COLON,
      anon_sym_code_DOTlanguage_COLON,
      anon_sym_language_COLON,
  [2416] = 8,
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
    ACTIONS(270), 1,
      sym_word,
    STATE(177), 2,
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
  [2448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 3,
      anon_sym_and,
      anon_sym_not,
      sym_identifier,
    ACTIONS(359), 11,
      anon_sym_DASH,
      anon_sym_os_COLON,
      anon_sym_tag_COLON,
      anon_sym_mode_COLON,
      anon_sym_app_COLON,
      anon_sym_app_DOTname_COLON,
      anon_sym_app_DOTexe_COLON,
      anon_sym_app_DOTbundle_COLON,
      anon_sym_title_COLON,
      anon_sym_code_DOTlanguage_COLON,
      anon_sym_language_COLON,
  [2470] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(59), 1,
      sym_match,
    STATE(222), 1,
      sym__prioritized_match,
    STATE(223), 1,
      sym__generic_match,
    ACTIONS(11), 10,
      anon_sym_os_COLON,
      anon_sym_tag_COLON,
      anon_sym_mode_COLON,
      anon_sym_app_COLON,
      anon_sym_app_DOTname_COLON,
      anon_sym_app_DOTexe_COLON,
      anon_sym_app_DOTbundle_COLON,
      anon_sym_title_COLON,
      anon_sym_code_DOTlanguage_COLON,
      anon_sym_language_COLON,
  [2498] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      sym_word,
    STATE(181), 2,
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
  [2530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_not,
      sym_identifier,
    ACTIONS(363), 11,
      anon_sym_DASH,
      anon_sym_os_COLON,
      anon_sym_tag_COLON,
      anon_sym_mode_COLON,
      anon_sym_app_COLON,
      anon_sym_app_DOTname_COLON,
      anon_sym_app_DOTexe_COLON,
      anon_sym_app_DOTbundle_COLON,
      anon_sym_title_COLON,
      anon_sym_code_DOTlanguage_COLON,
      anon_sym_language_COLON,
  [2551] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    ACTIONS(373), 1,
      sym_string_escape_sequence,
    ACTIONS(375), 1,
      sym__not_escapesequence,
    ACTIONS(377), 1,
      sym_string_content,
    ACTIONS(379), 1,
      sym__string_end,
    ACTIONS(371), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(71), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(119), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2585] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    ACTIONS(375), 1,
      sym__not_escapesequence,
    ACTIONS(381), 1,
      sym_string_escape_sequence,
    ACTIONS(383), 1,
      sym_string_content,
    ACTIONS(385), 1,
      sym__string_end,
    ACTIONS(371), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(69), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(119), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2619] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    ACTIONS(373), 1,
      sym_string_escape_sequence,
    ACTIONS(375), 1,
      sym__not_escapesequence,
    ACTIONS(377), 1,
      sym_string_content,
    ACTIONS(387), 1,
      sym__string_end,
    ACTIONS(371), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(71), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(119), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2653] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    ACTIONS(375), 1,
      sym__not_escapesequence,
    ACTIONS(389), 1,
      sym_string_escape_sequence,
    ACTIONS(391), 1,
      sym_string_content,
    ACTIONS(393), 1,
      sym__string_end,
    ACTIONS(371), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(67), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(119), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2687] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    ACTIONS(404), 1,
      sym_string_escape_sequence,
    ACTIONS(407), 1,
      sym__not_escapesequence,
    ACTIONS(410), 1,
      sym_string_content,
    ACTIONS(413), 1,
      sym__string_end,
    ACTIONS(401), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(71), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(119), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2721] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    ACTIONS(373), 1,
      sym_string_escape_sequence,
    ACTIONS(375), 1,
      sym__not_escapesequence,
    ACTIONS(377), 1,
      sym_string_content,
    ACTIONS(415), 1,
      sym__string_end,
    ACTIONS(371), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(71), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(119), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2755] = 10,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    ACTIONS(375), 1,
      sym__not_escapesequence,
    ACTIONS(417), 1,
      sym_string_escape_sequence,
    ACTIONS(419), 1,
      sym_string_content,
    ACTIONS(421), 1,
      sym__string_end,
    ACTIONS(371), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    STATE(72), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
    STATE(119), 2,
      sym__escape_interpolation,
      sym__not_interpolation,
  [2789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_word,
    ACTIONS(423), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2807] = 2,
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
  [2823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_word,
    ACTIONS(429), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 10,
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
  [2857] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_EQ,
    ACTIONS(439), 1,
      anon_sym_LPAREN2,
    STATE(162), 1,
      sym_argument_list,
    ACTIONS(435), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_STAR,
    ACTIONS(180), 1,
      anon_sym_PLUS,
    ACTIONS(441), 8,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [2899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_word,
    ACTIONS(443), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 10,
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
  [2933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 10,
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
  [2949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 10,
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
  [2965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 10,
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
  [2981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 10,
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
  [2997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 10,
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
  [3013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 10,
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
  [3029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_word,
    ACTIONS(455), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [3047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym_word,
    ACTIONS(459), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [3065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 10,
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
  [3081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 10,
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
  [3097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_word,
    ACTIONS(463), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [3115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_word,
    ACTIONS(467), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [3133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_word,
    ACTIONS(471), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [3151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_word,
    ACTIONS(475), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [3169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 10,
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
  [3185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 10,
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
  [3201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 10,
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
  [3217] = 2,
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
  [3233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_LPAREN2,
    STATE(128), 1,
      sym_argument_list,
    ACTIONS(435), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_STAR,
    ACTIONS(186), 1,
      anon_sym_PLUS,
    ACTIONS(441), 8,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 10,
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
  [3289] = 2,
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
  [3305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_word,
    ACTIONS(481), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [3323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym_word,
    ACTIONS(485), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [3341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(168), 1,
      anon_sym_PLUS,
    ACTIONS(441), 8,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 10,
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
  [3377] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    ACTIONS(495), 1,
      anon_sym_or,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(489), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(491), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3402] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_or,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(489), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(491), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3427] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_or,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(489), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(491), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN2,
    STATE(151), 1,
      sym_argument_list,
    ACTIONS(435), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_LPAREN2,
    STATE(162), 1,
      sym_argument_list,
    ACTIONS(435), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3504] = 2,
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
  [3518] = 2,
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
  [3532] = 2,
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
  [3546] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(519), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(517), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3562] = 2,
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
  [3576] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(525), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(523), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3592] = 2,
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
  [3606] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_or,
    ACTIONS(489), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(529), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(491), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3626] = 3,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(533), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(531), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3642] = 3,
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
  [3658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(491), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(537), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [3690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(537), 5,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [3720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 8,
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
    ACTIONS(537), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(481), 6,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [3764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3791] = 2,
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
  [3804] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_or,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    ACTIONS(489), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(491), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3823] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_or,
    ACTIONS(553), 1,
      sym__newline,
    ACTIONS(547), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(549), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3855] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_or,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    ACTIONS(489), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(491), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3900] = 2,
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
  [3913] = 2,
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
  [3926] = 2,
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
  [3939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_RBRACE,
      anon_sym_or,
    ACTIONS(557), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(559), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(537), 4,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_or,
  [3984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 2,
      sym__newline,
      anon_sym_or,
    ACTIONS(547), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(549), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4066] = 2,
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
  [4079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(537), 4,
      sym__newline,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
  [4120] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_or,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    ACTIONS(489), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(491), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4152] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_or,
    ACTIONS(563), 1,
      sym__newline,
    ACTIONS(547), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(549), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4223] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    ACTIONS(567), 1,
      anon_sym_or,
    ACTIONS(557), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(559), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_argument_list_repeat1,
  [4255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_argument_list_repeat1,
  [4268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_argument_list_repeat1,
  [4281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_PIPE,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      aux_sym_choice_repeat1,
  [4294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_PIPE,
    ACTIONS(583), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      aux_sym_choice_repeat1,
  [4307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      sym_end_anchor,
    ACTIONS(585), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_PIPE,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      aux_sym_choice_repeat1,
  [4331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_argument_list_repeat1,
  [4344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COLON,
    ACTIONS(593), 1,
      anon_sym_PIPE,
    STATE(174), 1,
      aux_sym_choice_repeat1,
  [4357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_COLON,
    ACTIONS(595), 1,
      anon_sym_PIPE,
    STATE(173), 1,
      aux_sym_choice_repeat1,
  [4370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_COLON,
    ACTIONS(593), 1,
      anon_sym_PIPE,
    STATE(173), 1,
      aux_sym_choice_repeat1,
  [4383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym_end_anchor,
    ACTIONS(585), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RBRACK,
    ACTIONS(600), 1,
      anon_sym_PIPE,
    STATE(182), 1,
      aux_sym_choice_repeat1,
  [4407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym_end_anchor,
    ACTIONS(602), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym_end_anchor,
    ACTIONS(602), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_end_anchor,
    ACTIONS(585), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    ACTIONS(610), 1,
      anon_sym_PIPE,
    STATE(180), 1,
      aux_sym_choice_repeat1,
  [4453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_end_anchor,
    ACTIONS(602), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_RBRACK,
    ACTIONS(600), 1,
      anon_sym_PIPE,
    STATE(168), 1,
      aux_sym_choice_repeat1,
  [4477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [4525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [4541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [4549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      sym__newline,
  [4556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RBRACK,
  [4563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_COLON,
  [4570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym__newline,
  [4577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
  [4584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym_identifier,
  [4591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym__newline,
  [4598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym__newline,
  [4605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
  [4612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_GT,
  [4619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RBRACK,
  [4626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
  [4633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
  [4640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
  [4647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
  [4654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_COLON,
  [4661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_GT,
  [4668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
  [4675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      sym__newline,
  [4682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
  [4689] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(653), 1,
      aux_sym_key_action_token1,
  [4696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
  [4703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_RBRACK,
  [4710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_COLON,
  [4717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_COLON,
  [4724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
  [4731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_GT,
  [4738] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_implicit_string,
  [4745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
  [4752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
  [4759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      sym__newline,
  [4766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      sym__newline,
  [4773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      sym__newline,
  [4780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
  [4787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_DASH,
  [4794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
  [4801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym__newline,
  [4808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      ts_builtin_sym_end,
  [4815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
  [4822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_COLON,
  [4829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
  [4836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      sym_identifier,
  [4843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      sym_identifier,
  [4850] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(695), 1,
      aux_sym_key_action_token1,
  [4857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      sym_identifier,
  [4864] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(699), 1,
      aux_sym_key_action_token1,
  [4871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym_identifier,
  [4878] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(703), 1,
      aux_sym_key_action_token1,
  [4885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym_identifier,
  [4892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      sym_identifier,
  [4899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_COLON,
  [4906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_COLON,
  [4913] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(713), 1,
      aux_sym_key_action_token1,
  [4920] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(715), 1,
      sym_implicit_string,
  [4927] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(717), 1,
      aux_sym_key_action_token1,
  [4934] = 2,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(719), 1,
      aux_sym_key_action_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 134,
  [SMALL_STATE(5)] = 201,
  [SMALL_STATE(6)] = 268,
  [SMALL_STATE(7)] = 313,
  [SMALL_STATE(8)] = 364,
  [SMALL_STATE(9)] = 405,
  [SMALL_STATE(10)] = 446,
  [SMALL_STATE(11)] = 497,
  [SMALL_STATE(12)] = 548,
  [SMALL_STATE(13)] = 597,
  [SMALL_STATE(14)] = 638,
  [SMALL_STATE(15)] = 684,
  [SMALL_STATE(16)] = 730,
  [SMALL_STATE(17)] = 767,
  [SMALL_STATE(18)] = 809,
  [SMALL_STATE(19)] = 851,
  [SMALL_STATE(20)] = 893,
  [SMALL_STATE(21)] = 935,
  [SMALL_STATE(22)] = 977,
  [SMALL_STATE(23)] = 1019,
  [SMALL_STATE(24)] = 1061,
  [SMALL_STATE(25)] = 1103,
  [SMALL_STATE(26)] = 1145,
  [SMALL_STATE(27)] = 1186,
  [SMALL_STATE(28)] = 1227,
  [SMALL_STATE(29)] = 1268,
  [SMALL_STATE(30)] = 1304,
  [SMALL_STATE(31)] = 1340,
  [SMALL_STATE(32)] = 1378,
  [SMALL_STATE(33)] = 1416,
  [SMALL_STATE(34)] = 1454,
  [SMALL_STATE(35)] = 1490,
  [SMALL_STATE(36)] = 1526,
  [SMALL_STATE(37)] = 1564,
  [SMALL_STATE(38)] = 1602,
  [SMALL_STATE(39)] = 1638,
  [SMALL_STATE(40)] = 1676,
  [SMALL_STATE(41)] = 1714,
  [SMALL_STATE(42)] = 1752,
  [SMALL_STATE(43)] = 1788,
  [SMALL_STATE(44)] = 1826,
  [SMALL_STATE(45)] = 1861,
  [SMALL_STATE(46)] = 1896,
  [SMALL_STATE(47)] = 1931,
  [SMALL_STATE(48)] = 1966,
  [SMALL_STATE(49)] = 2001,
  [SMALL_STATE(50)] = 2036,
  [SMALL_STATE(51)] = 2071,
  [SMALL_STATE(52)] = 2106,
  [SMALL_STATE(53)] = 2141,
  [SMALL_STATE(54)] = 2176,
  [SMALL_STATE(55)] = 2211,
  [SMALL_STATE(56)] = 2246,
  [SMALL_STATE(57)] = 2281,
  [SMALL_STATE(58)] = 2316,
  [SMALL_STATE(59)] = 2340,
  [SMALL_STATE(60)] = 2362,
  [SMALL_STATE(61)] = 2394,
  [SMALL_STATE(62)] = 2416,
  [SMALL_STATE(63)] = 2448,
  [SMALL_STATE(64)] = 2470,
  [SMALL_STATE(65)] = 2498,
  [SMALL_STATE(66)] = 2530,
  [SMALL_STATE(67)] = 2551,
  [SMALL_STATE(68)] = 2585,
  [SMALL_STATE(69)] = 2619,
  [SMALL_STATE(70)] = 2653,
  [SMALL_STATE(71)] = 2687,
  [SMALL_STATE(72)] = 2721,
  [SMALL_STATE(73)] = 2755,
  [SMALL_STATE(74)] = 2789,
  [SMALL_STATE(75)] = 2807,
  [SMALL_STATE(76)] = 2823,
  [SMALL_STATE(77)] = 2841,
  [SMALL_STATE(78)] = 2857,
  [SMALL_STATE(79)] = 2879,
  [SMALL_STATE(80)] = 2899,
  [SMALL_STATE(81)] = 2917,
  [SMALL_STATE(82)] = 2933,
  [SMALL_STATE(83)] = 2949,
  [SMALL_STATE(84)] = 2965,
  [SMALL_STATE(85)] = 2981,
  [SMALL_STATE(86)] = 2997,
  [SMALL_STATE(87)] = 3013,
  [SMALL_STATE(88)] = 3029,
  [SMALL_STATE(89)] = 3047,
  [SMALL_STATE(90)] = 3065,
  [SMALL_STATE(91)] = 3081,
  [SMALL_STATE(92)] = 3097,
  [SMALL_STATE(93)] = 3115,
  [SMALL_STATE(94)] = 3133,
  [SMALL_STATE(95)] = 3151,
  [SMALL_STATE(96)] = 3169,
  [SMALL_STATE(97)] = 3185,
  [SMALL_STATE(98)] = 3201,
  [SMALL_STATE(99)] = 3217,
  [SMALL_STATE(100)] = 3233,
  [SMALL_STATE(101)] = 3253,
  [SMALL_STATE(102)] = 3273,
  [SMALL_STATE(103)] = 3289,
  [SMALL_STATE(104)] = 3305,
  [SMALL_STATE(105)] = 3323,
  [SMALL_STATE(106)] = 3341,
  [SMALL_STATE(107)] = 3361,
  [SMALL_STATE(108)] = 3377,
  [SMALL_STATE(109)] = 3402,
  [SMALL_STATE(110)] = 3427,
  [SMALL_STATE(111)] = 3452,
  [SMALL_STATE(112)] = 3471,
  [SMALL_STATE(113)] = 3490,
  [SMALL_STATE(114)] = 3504,
  [SMALL_STATE(115)] = 3518,
  [SMALL_STATE(116)] = 3532,
  [SMALL_STATE(117)] = 3546,
  [SMALL_STATE(118)] = 3562,
  [SMALL_STATE(119)] = 3576,
  [SMALL_STATE(120)] = 3592,
  [SMALL_STATE(121)] = 3606,
  [SMALL_STATE(122)] = 3626,
  [SMALL_STATE(123)] = 3642,
  [SMALL_STATE(124)] = 3658,
  [SMALL_STATE(125)] = 3672,
  [SMALL_STATE(126)] = 3690,
  [SMALL_STATE(127)] = 3704,
  [SMALL_STATE(128)] = 3720,
  [SMALL_STATE(129)] = 3734,
  [SMALL_STATE(130)] = 3748,
  [SMALL_STATE(131)] = 3764,
  [SMALL_STATE(132)] = 3778,
  [SMALL_STATE(133)] = 3791,
  [SMALL_STATE(134)] = 3804,
  [SMALL_STATE(135)] = 3823,
  [SMALL_STATE(136)] = 3842,
  [SMALL_STATE(137)] = 3855,
  [SMALL_STATE(138)] = 3874,
  [SMALL_STATE(139)] = 3887,
  [SMALL_STATE(140)] = 3900,
  [SMALL_STATE(141)] = 3913,
  [SMALL_STATE(142)] = 3926,
  [SMALL_STATE(143)] = 3939,
  [SMALL_STATE(144)] = 3956,
  [SMALL_STATE(145)] = 3969,
  [SMALL_STATE(146)] = 3984,
  [SMALL_STATE(147)] = 3997,
  [SMALL_STATE(148)] = 4010,
  [SMALL_STATE(149)] = 4023,
  [SMALL_STATE(150)] = 4040,
  [SMALL_STATE(151)] = 4053,
  [SMALL_STATE(152)] = 4066,
  [SMALL_STATE(153)] = 4079,
  [SMALL_STATE(154)] = 4092,
  [SMALL_STATE(155)] = 4105,
  [SMALL_STATE(156)] = 4120,
  [SMALL_STATE(157)] = 4139,
  [SMALL_STATE(158)] = 4152,
  [SMALL_STATE(159)] = 4171,
  [SMALL_STATE(160)] = 4184,
  [SMALL_STATE(161)] = 4197,
  [SMALL_STATE(162)] = 4210,
  [SMALL_STATE(163)] = 4223,
  [SMALL_STATE(164)] = 4242,
  [SMALL_STATE(165)] = 4255,
  [SMALL_STATE(166)] = 4268,
  [SMALL_STATE(167)] = 4281,
  [SMALL_STATE(168)] = 4294,
  [SMALL_STATE(169)] = 4307,
  [SMALL_STATE(170)] = 4318,
  [SMALL_STATE(171)] = 4331,
  [SMALL_STATE(172)] = 4344,
  [SMALL_STATE(173)] = 4357,
  [SMALL_STATE(174)] = 4370,
  [SMALL_STATE(175)] = 4383,
  [SMALL_STATE(176)] = 4394,
  [SMALL_STATE(177)] = 4407,
  [SMALL_STATE(178)] = 4418,
  [SMALL_STATE(179)] = 4429,
  [SMALL_STATE(180)] = 4440,
  [SMALL_STATE(181)] = 4453,
  [SMALL_STATE(182)] = 4464,
  [SMALL_STATE(183)] = 4477,
  [SMALL_STATE(184)] = 4485,
  [SMALL_STATE(185)] = 4493,
  [SMALL_STATE(186)] = 4501,
  [SMALL_STATE(187)] = 4509,
  [SMALL_STATE(188)] = 4517,
  [SMALL_STATE(189)] = 4525,
  [SMALL_STATE(190)] = 4533,
  [SMALL_STATE(191)] = 4541,
  [SMALL_STATE(192)] = 4549,
  [SMALL_STATE(193)] = 4556,
  [SMALL_STATE(194)] = 4563,
  [SMALL_STATE(195)] = 4570,
  [SMALL_STATE(196)] = 4577,
  [SMALL_STATE(197)] = 4584,
  [SMALL_STATE(198)] = 4591,
  [SMALL_STATE(199)] = 4598,
  [SMALL_STATE(200)] = 4605,
  [SMALL_STATE(201)] = 4612,
  [SMALL_STATE(202)] = 4619,
  [SMALL_STATE(203)] = 4626,
  [SMALL_STATE(204)] = 4633,
  [SMALL_STATE(205)] = 4640,
  [SMALL_STATE(206)] = 4647,
  [SMALL_STATE(207)] = 4654,
  [SMALL_STATE(208)] = 4661,
  [SMALL_STATE(209)] = 4668,
  [SMALL_STATE(210)] = 4675,
  [SMALL_STATE(211)] = 4682,
  [SMALL_STATE(212)] = 4689,
  [SMALL_STATE(213)] = 4696,
  [SMALL_STATE(214)] = 4703,
  [SMALL_STATE(215)] = 4710,
  [SMALL_STATE(216)] = 4717,
  [SMALL_STATE(217)] = 4724,
  [SMALL_STATE(218)] = 4731,
  [SMALL_STATE(219)] = 4738,
  [SMALL_STATE(220)] = 4745,
  [SMALL_STATE(221)] = 4752,
  [SMALL_STATE(222)] = 4759,
  [SMALL_STATE(223)] = 4766,
  [SMALL_STATE(224)] = 4773,
  [SMALL_STATE(225)] = 4780,
  [SMALL_STATE(226)] = 4787,
  [SMALL_STATE(227)] = 4794,
  [SMALL_STATE(228)] = 4801,
  [SMALL_STATE(229)] = 4808,
  [SMALL_STATE(230)] = 4815,
  [SMALL_STATE(231)] = 4822,
  [SMALL_STATE(232)] = 4829,
  [SMALL_STATE(233)] = 4836,
  [SMALL_STATE(234)] = 4843,
  [SMALL_STATE(235)] = 4850,
  [SMALL_STATE(236)] = 4857,
  [SMALL_STATE(237)] = 4864,
  [SMALL_STATE(238)] = 4871,
  [SMALL_STATE(239)] = 4878,
  [SMALL_STATE(240)] = 4885,
  [SMALL_STATE(241)] = 4892,
  [SMALL_STATE(242)] = 4899,
  [SMALL_STATE(243)] = 4906,
  [SMALL_STATE(244)] = 4913,
  [SMALL_STATE(245)] = 4920,
  [SMALL_STATE(246)] = 4927,
  [SMALL_STATE(247)] = 4934,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(243),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(242),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(238),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(236),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(235),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__not_interpolation, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_interpolation, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(64),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(245),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(231),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_or, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(56),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(237),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(212),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(78),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(135),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(135),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_seq, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(79),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(238),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(236),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(20),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(19),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(101),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(240),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(241),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(25),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(17),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(106),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(233),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(234),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(21),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(22),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_and, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__optional_and, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 2, .production_id = 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 2, .production_id = 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(6),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(123),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(122),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(71),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(119),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(71),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_suite, 1, .production_id = 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_suite, 1, .production_id = 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat1, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 4),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_rule, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 6),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 3, .production_id = 7),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 10),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, .production_id = 10),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding, 3, .production_id = 11),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_binding, 3, .production_id = 11),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_tag, 4, .production_id = 12),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_tag, 4, .production_id = 12),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_suite, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_suite, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statement, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statement, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep_action, 3, .production_id = 8),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 13),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1, .production_id = 13),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_interpolation, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_interpolation, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_action, 3, .production_id = 8),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 16),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, .production_id = 14),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, .production_id = 5),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 15),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(52),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(39),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_choice, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(41),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(36),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prioritized_match, 2, .production_id = 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__generic_match, 3, .production_id = 9),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [683] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
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
