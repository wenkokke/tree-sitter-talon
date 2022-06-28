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
#define STATE_COUNT 308
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
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
  anon_sym_SEMI = 33,
  anon_sym_SLASH = 34,
  anon_sym_PERCENT = 35,
  anon_sym_or = 36,
  anon_sym_key = 37,
  aux_sym_key_action_token1 = 38,
  anon_sym_sleep = 39,
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
  sym__string_content = 54,
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
  sym_priority_key = 68,
  sym_include_tag = 69,
  sym_settings = 70,
  sym_settings_block = 71,
  sym_settings_assignment = 72,
  sym_command = 73,
  sym_command_block = 74,
  sym_rule = 75,
  sym__optional_choice = 76,
  sym_choice = 77,
  sym__optional_anchor = 78,
  sym__optional_seq = 79,
  sym_seq = 80,
  sym__primary_rule = 81,
  sym_list = 82,
  sym_capture = 83,
  sym_optional = 84,
  sym_repeat = 85,
  sym_repeat1 = 86,
  sym_parenthesized_rule = 87,
  sym__simple_statements = 88,
  sym__simple_statement = 89,
  sym_assignment_statement = 90,
  sym_expression_statement = 91,
  sym__expression = 92,
  sym_parenthesized_expression = 93,
  sym_binary_operator = 94,
  sym_key_action = 95,
  sym_sleep_action = 96,
  sym_action = 97,
  sym_argument_list = 98,
  sym_value = 99,
  sym_number = 100,
  sym_string = 101,
  sym_interpolation = 102,
  sym__escape_interpolation = 103,
  sym__not_interpolation = 104,
  aux_sym_source_file_repeat1 = 105,
  aux_sym_or_repeat1 = 106,
  aux_sym_settings_block_repeat1 = 107,
  aux_sym_command_block_repeat1 = 108,
  aux_sym_choice_repeat1 = 109,
  aux_sym_seq_repeat1 = 110,
  aux_sym__simple_statements_repeat1 = 111,
  aux_sym_argument_list_repeat1 = 112,
  aux_sym_string_repeat1 = 113,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_DASH] = "-",
  [anon_sym_and] = "and",
  [anon_sym_not] = "not",
  [anon_sym_COLON] = ":",
  [anon_sym_os] = "os",
  [anon_sym_tag] = "tag",
  [anon_sym_mode] = "mode",
  [anon_sym_app] = "app",
  [anon_sym_app_DOTname] = "app.name",
  [anon_sym_app_DOTexe] = "app.exe",
  [anon_sym_app_DOTbundle] = "app.bundle",
  [anon_sym_title] = "title",
  [anon_sym_code_DOTlanguage] = "code.language",
  [anon_sym_language] = "language",
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
  [anon_sym_SEMI] = ";",
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
  [sym_priority_key] = "identifier",
  [sym_include_tag] = "include_tag",
  [sym_settings] = "settings",
  [sym_settings_block] = "settings_block",
  [sym_settings_assignment] = "settings_assignment",
  [sym_command] = "command",
  [sym_command_block] = "command_block",
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
  [sym_assignment_statement] = "assignment_statement",
  [sym_expression_statement] = "expression_statement",
  [sym__expression] = "_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_binary_operator] = "binary_operator",
  [sym_key_action] = "key_action",
  [sym_sleep_action] = "sleep_action",
  [sym_action] = "action",
  [sym_argument_list] = "argument_list",
  [sym_value] = "value",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [sym__escape_interpolation] = "_escape_interpolation",
  [sym__not_interpolation] = "_not_interpolation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_or_repeat1] = "or_repeat1",
  [aux_sym_settings_block_repeat1] = "settings_block_repeat1",
  [aux_sym_command_block_repeat1] = "command_block_repeat1",
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
  [anon_sym_os] = anon_sym_os,
  [anon_sym_tag] = anon_sym_tag,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_app] = anon_sym_app,
  [anon_sym_app_DOTname] = anon_sym_app_DOTname,
  [anon_sym_app_DOTexe] = anon_sym_app_DOTexe,
  [anon_sym_app_DOTbundle] = anon_sym_app_DOTbundle,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_code_DOTlanguage] = anon_sym_code_DOTlanguage,
  [anon_sym_language] = anon_sym_language,
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
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [sym_priority_key] = sym_identifier,
  [sym_include_tag] = sym_include_tag,
  [sym_settings] = sym_settings,
  [sym_settings_block] = sym_settings_block,
  [sym_settings_assignment] = sym_settings_assignment,
  [sym_command] = sym_command,
  [sym_command_block] = sym_command_block,
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
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym__expression] = sym__expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_binary_operator] = sym_binary_operator,
  [sym_key_action] = sym_key_action,
  [sym_sleep_action] = sym_sleep_action,
  [sym_action] = sym_action,
  [sym_argument_list] = sym_argument_list,
  [sym_value] = sym_value,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [sym__escape_interpolation] = sym__escape_interpolation,
  [sym__not_interpolation] = sym__not_interpolation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_or_repeat1] = aux_sym_or_repeat1,
  [aux_sym_settings_block_repeat1] = aux_sym_settings_block_repeat1,
  [aux_sym_command_block_repeat1] = aux_sym_command_block_repeat1,
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
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_app] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_app_DOTname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_app_DOTexe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_app_DOTbundle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_code_DOTlanguage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_language] = {
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
  [anon_sym_SEMI] = {
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
  [sym_priority_key] = {
    .visible = true,
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
  [sym_settings_block] = {
    .visible = true,
    .named = true,
  },
  [sym_settings_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_command_block] = {
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
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
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
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
  [aux_sym_settings_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_block_repeat1] = {
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
  [3] = {.index = 0, .length = 2},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_pattern, 2},
  [2] =
    {field_action, 0},
    {field_arguments, 1},
  [4] =
    {field_left, 0},
    {field_right, 2},
  [6] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = sym_settings_block,
  },
  [2] = {
    [2] = sym_command_block,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_settings_assignment, 2,
    sym_settings_assignment,
    sym_settings_block,
  sym__expression, 2,
    sym__expression,
    sym_command_block,
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
      if (eof) ADVANCE(118);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '%') ADVANCE(221);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(215);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ',') ADVANCE(232);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead == '0') ADVANCE(285);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(219);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == '^') ADVANCE(159);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'k') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == '{') ADVANCE(208);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '}') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(284);
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
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(295);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(302);
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
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '%') ADVANCE(221);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(215);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ',') ADVANCE(232);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead == '0') ADVANCE(285);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(219);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == '^') ADVANCE(159);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'k') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == '{') ADVANCE(208);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '}') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '$') ADVANCE(160);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(215);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == '^') ADVANCE(159);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '|') ADVANCE(158);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '%') ADVANCE(221);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '*') ADVANCE(215);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == '}') ADVANCE(209);
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
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == ',') ADVANCE(232);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '0') ADVANCE(285);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == 'k') ADVANCE(247);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '0') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(303);
      if (lookahead == 'k') ADVANCE(247);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == '{') ADVANCE(208);
      if (lookahead == '}') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(269);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(269);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(120);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
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
          lookahead == '1') ADVANCE(287);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(288);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
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
      if (lookahead == 'b') ADVANCE(276);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == 'n') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(123);
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
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(150);
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
      if (lookahead == 'g') ADVANCE(132);
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
      if (lookahead == 'l') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
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
      if (lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(125);
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
      if (lookahead == 'y') ADVANCE(224);
      END_STATE();
    case 92:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 93:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(287);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(288);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 109:
      if (eof) ADVANCE(118);
      if (lookahead == '\n') SKIP(116)
      END_STATE();
    case 110:
      if (eof) ADVANCE(118);
      if (lookahead == '\n') SKIP(116)
      if (lookahead == '\r') SKIP(109)
      END_STATE();
    case 111:
      if (eof) ADVANCE(118);
      if (lookahead == '\n') SKIP(117)
      END_STATE();
    case 112:
      if (eof) ADVANCE(118);
      if (lookahead == '\n') SKIP(117)
      if (lookahead == '\r') SKIP(111)
      END_STATE();
    case 113:
      if (eof) ADVANCE(118);
      if (lookahead == '\n') SKIP(115)
      END_STATE();
    case 114:
      if (eof) ADVANCE(118);
      if (lookahead == '\n') SKIP(115)
      if (lookahead == '\r') SKIP(113)
      END_STATE();
    case 115:
      if (eof) ADVANCE(118);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '%') ADVANCE(221);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '*') ADVANCE(215);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') SKIP(114)
      if (lookahead == '^') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(115)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 116:
      if (eof) ADVANCE(118);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') SKIP(110)
      if (lookahead == '^') ADVANCE(159);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'c') ADVANCE(182);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'm') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '}') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(116)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 117:
      if (eof) ADVANCE(118);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') SKIP(112)
      if (lookahead == '^') ADVANCE(159);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(117)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_os);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '(') ADVANCE(28);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_app);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_app);
      if (lookahead == '.') ADVANCE(41);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_app);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_app_DOTname);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_app_DOTname);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_app_DOTexe);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_app_DOTexe);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_app_DOTbundle);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_app_DOTbundle);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_code_DOTlanguage);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_code_DOTlanguage);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_language);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_language);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_language);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_tag_LPAREN_RPAREN);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_settings_LPAREN_RPAREN);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_start_anchor);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_end_anchor);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 't') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 't') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(161);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(203);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(299);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(300);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_SEMI);
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
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead == '\r') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_sleep);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_sleep);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 'p') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 't') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'y') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '_') ADVANCE(286);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(32);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(33);
      if (lookahead == '_') ADVANCE(286);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(283);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(94);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(293);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(294);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_regex_escape_sequence_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\r') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(298);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      if (lookahead == '\\') ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__not_escapesequence);
      if (lookahead == '\n') ADVANCE(302);
      if (lookahead == '\r') ADVANCE(3);
      if (sym_string_escape_sequence_character_set_1(lookahead)) ADVANCE(301);
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
  [1] = {.lex_state = 116, .external_lex_state = 2},
  [2] = {.lex_state = 117, .external_lex_state = 2},
  [3] = {.lex_state = 117, .external_lex_state = 2},
  [4] = {.lex_state = 117, .external_lex_state = 2},
  [5] = {.lex_state = 117, .external_lex_state = 2},
  [6] = {.lex_state = 22, .external_lex_state = 3},
  [7] = {.lex_state = 21, .external_lex_state = 4},
  [8] = {.lex_state = 21, .external_lex_state = 4},
  [9] = {.lex_state = 21, .external_lex_state = 4},
  [10] = {.lex_state = 23, .external_lex_state = 2},
  [11] = {.lex_state = 23, .external_lex_state = 2},
  [12] = {.lex_state = 23, .external_lex_state = 2},
  [13] = {.lex_state = 19, .external_lex_state = 2},
  [14] = {.lex_state = 21, .external_lex_state = 5},
  [15] = {.lex_state = 19, .external_lex_state = 6},
  [16] = {.lex_state = 19, .external_lex_state = 2},
  [17] = {.lex_state = 21, .external_lex_state = 5},
  [18] = {.lex_state = 19, .external_lex_state = 2},
  [19] = {.lex_state = 19, .external_lex_state = 7},
  [20] = {.lex_state = 19, .external_lex_state = 2},
  [21] = {.lex_state = 19, .external_lex_state = 2},
  [22] = {.lex_state = 19, .external_lex_state = 2},
  [23] = {.lex_state = 23, .external_lex_state = 2},
  [24] = {.lex_state = 19, .external_lex_state = 2},
  [25] = {.lex_state = 21, .external_lex_state = 8},
  [26] = {.lex_state = 21, .external_lex_state = 9},
  [27] = {.lex_state = 19, .external_lex_state = 2},
  [28] = {.lex_state = 19, .external_lex_state = 6},
  [29] = {.lex_state = 19, .external_lex_state = 6},
  [30] = {.lex_state = 21, .external_lex_state = 9},
  [31] = {.lex_state = 19, .external_lex_state = 7},
  [32] = {.lex_state = 19, .external_lex_state = 2},
  [33] = {.lex_state = 19, .external_lex_state = 2},
  [34] = {.lex_state = 115, .external_lex_state = 2},
  [35] = {.lex_state = 19, .external_lex_state = 2},
  [36] = {.lex_state = 19, .external_lex_state = 2},
  [37] = {.lex_state = 21, .external_lex_state = 9},
  [38] = {.lex_state = 19, .external_lex_state = 7},
  [39] = {.lex_state = 21, .external_lex_state = 9},
  [40] = {.lex_state = 115, .external_lex_state = 2},
  [41] = {.lex_state = 115, .external_lex_state = 2},
  [42] = {.lex_state = 21, .external_lex_state = 9},
  [43] = {.lex_state = 21, .external_lex_state = 9},
  [44] = {.lex_state = 21, .external_lex_state = 9},
  [45] = {.lex_state = 21, .external_lex_state = 5},
  [46] = {.lex_state = 115, .external_lex_state = 2},
  [47] = {.lex_state = 115, .external_lex_state = 2},
  [48] = {.lex_state = 115, .external_lex_state = 2},
  [49] = {.lex_state = 21, .external_lex_state = 9},
  [50] = {.lex_state = 115, .external_lex_state = 2},
  [51] = {.lex_state = 21, .external_lex_state = 9},
  [52] = {.lex_state = 21, .external_lex_state = 9},
  [53] = {.lex_state = 115, .external_lex_state = 2},
  [54] = {.lex_state = 115, .external_lex_state = 2},
  [55] = {.lex_state = 115, .external_lex_state = 2},
  [56] = {.lex_state = 115, .external_lex_state = 2},
  [57] = {.lex_state = 21, .external_lex_state = 9},
  [58] = {.lex_state = 115, .external_lex_state = 2},
  [59] = {.lex_state = 115, .external_lex_state = 2},
  [60] = {.lex_state = 115, .external_lex_state = 2},
  [61] = {.lex_state = 115, .external_lex_state = 2},
  [62] = {.lex_state = 21, .external_lex_state = 9},
  [63] = {.lex_state = 115, .external_lex_state = 2},
  [64] = {.lex_state = 21, .external_lex_state = 8},
  [65] = {.lex_state = 21, .external_lex_state = 8},
  [66] = {.lex_state = 21, .external_lex_state = 8},
  [67] = {.lex_state = 21, .external_lex_state = 8},
  [68] = {.lex_state = 21, .external_lex_state = 8},
  [69] = {.lex_state = 21, .external_lex_state = 8},
  [70] = {.lex_state = 21, .external_lex_state = 8},
  [71] = {.lex_state = 19, .external_lex_state = 2},
  [72] = {.lex_state = 21, .external_lex_state = 8},
  [73] = {.lex_state = 21, .external_lex_state = 8},
  [74] = {.lex_state = 21, .external_lex_state = 8},
  [75] = {.lex_state = 21, .external_lex_state = 8},
  [76] = {.lex_state = 24, .external_lex_state = 2},
  [77] = {.lex_state = 21, .external_lex_state = 8},
  [78] = {.lex_state = 21, .external_lex_state = 8},
  [79] = {.lex_state = 21, .external_lex_state = 8},
  [80] = {.lex_state = 19, .external_lex_state = 2},
  [81] = {.lex_state = 21, .external_lex_state = 8},
  [82] = {.lex_state = 21, .external_lex_state = 8},
  [83] = {.lex_state = 19, .external_lex_state = 2},
  [84] = {.lex_state = 24, .external_lex_state = 2},
  [85] = {.lex_state = 24, .external_lex_state = 2},
  [86] = {.lex_state = 21, .external_lex_state = 8},
  [87] = {.lex_state = 21, .external_lex_state = 8},
  [88] = {.lex_state = 23, .external_lex_state = 2},
  [89] = {.lex_state = 25, .external_lex_state = 2},
  [90] = {.lex_state = 22, .external_lex_state = 10},
  [91] = {.lex_state = 22, .external_lex_state = 10},
  [92] = {.lex_state = 22, .external_lex_state = 10},
  [93] = {.lex_state = 22, .external_lex_state = 10},
  [94] = {.lex_state = 22, .external_lex_state = 10},
  [95] = {.lex_state = 22, .external_lex_state = 10},
  [96] = {.lex_state = 22, .external_lex_state = 10},
  [97] = {.lex_state = 22, .external_lex_state = 10},
  [98] = {.lex_state = 22, .external_lex_state = 10},
  [99] = {.lex_state = 22, .external_lex_state = 10},
  [100] = {.lex_state = 22, .external_lex_state = 10},
  [101] = {.lex_state = 22, .external_lex_state = 10},
  [102] = {.lex_state = 22, .external_lex_state = 10},
  [103] = {.lex_state = 0, .external_lex_state = 11},
  [104] = {.lex_state = 19, .external_lex_state = 6},
  [105] = {.lex_state = 19, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 6},
  [107] = {.lex_state = 19, .external_lex_state = 7},
  [108] = {.lex_state = 19, .external_lex_state = 7},
  [109] = {.lex_state = 19, .external_lex_state = 7},
  [110] = {.lex_state = 19, .external_lex_state = 7},
  [111] = {.lex_state = 19, .external_lex_state = 2},
  [112] = {.lex_state = 19, .external_lex_state = 6},
  [113] = {.lex_state = 19, .external_lex_state = 7},
  [114] = {.lex_state = 19, .external_lex_state = 7},
  [115] = {.lex_state = 19, .external_lex_state = 6},
  [116] = {.lex_state = 19, .external_lex_state = 7},
  [117] = {.lex_state = 19, .external_lex_state = 6},
  [118] = {.lex_state = 19, .external_lex_state = 6},
  [119] = {.lex_state = 19, .external_lex_state = 6},
  [120] = {.lex_state = 19, .external_lex_state = 2},
  [121] = {.lex_state = 19, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 11},
  [123] = {.lex_state = 19, .external_lex_state = 6},
  [124] = {.lex_state = 19, .external_lex_state = 2},
  [125] = {.lex_state = 19, .external_lex_state = 2},
  [126] = {.lex_state = 19, .external_lex_state = 2},
  [127] = {.lex_state = 117, .external_lex_state = 2},
  [128] = {.lex_state = 117, .external_lex_state = 2},
  [129] = {.lex_state = 117, .external_lex_state = 2},
  [130] = {.lex_state = 117, .external_lex_state = 2},
  [131] = {.lex_state = 117, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 6},
  [133] = {.lex_state = 117, .external_lex_state = 2},
  [134] = {.lex_state = 117, .external_lex_state = 2},
  [135] = {.lex_state = 117, .external_lex_state = 2},
  [136] = {.lex_state = 117, .external_lex_state = 2},
  [137] = {.lex_state = 117, .external_lex_state = 2},
  [138] = {.lex_state = 117, .external_lex_state = 2},
  [139] = {.lex_state = 117, .external_lex_state = 2},
  [140] = {.lex_state = 20, .external_lex_state = 12},
  [141] = {.lex_state = 117, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 6},
  [143] = {.lex_state = 117, .external_lex_state = 2},
  [144] = {.lex_state = 117, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 6},
  [146] = {.lex_state = 0, .external_lex_state = 6},
  [147] = {.lex_state = 0, .external_lex_state = 6},
  [148] = {.lex_state = 0, .external_lex_state = 11},
  [149] = {.lex_state = 0, .external_lex_state = 11},
  [150] = {.lex_state = 0, .external_lex_state = 11},
  [151] = {.lex_state = 0, .external_lex_state = 11},
  [152] = {.lex_state = 0, .external_lex_state = 11},
  [153] = {.lex_state = 21, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 11},
  [155] = {.lex_state = 0, .external_lex_state = 11},
  [156] = {.lex_state = 0, .external_lex_state = 11},
  [157] = {.lex_state = 0, .external_lex_state = 11},
  [158] = {.lex_state = 0, .external_lex_state = 6},
  [159] = {.lex_state = 0, .external_lex_state = 6},
  [160] = {.lex_state = 0, .external_lex_state = 6},
  [161] = {.lex_state = 0, .external_lex_state = 11},
  [162] = {.lex_state = 0, .external_lex_state = 11},
  [163] = {.lex_state = 0, .external_lex_state = 11},
  [164] = {.lex_state = 0, .external_lex_state = 11},
  [165] = {.lex_state = 0, .external_lex_state = 11},
  [166] = {.lex_state = 0, .external_lex_state = 6},
  [167] = {.lex_state = 0, .external_lex_state = 6},
  [168] = {.lex_state = 0, .external_lex_state = 6},
  [169] = {.lex_state = 0, .external_lex_state = 6},
  [170] = {.lex_state = 0, .external_lex_state = 6},
  [171] = {.lex_state = 0, .external_lex_state = 6},
  [172] = {.lex_state = 0, .external_lex_state = 6},
  [173] = {.lex_state = 0, .external_lex_state = 6},
  [174] = {.lex_state = 0, .external_lex_state = 6},
  [175] = {.lex_state = 0, .external_lex_state = 6},
  [176] = {.lex_state = 0, .external_lex_state = 6},
  [177] = {.lex_state = 21, .external_lex_state = 4},
  [178] = {.lex_state = 21, .external_lex_state = 4},
  [179] = {.lex_state = 0, .external_lex_state = 11},
  [180] = {.lex_state = 0, .external_lex_state = 11},
  [181] = {.lex_state = 22, .external_lex_state = 10},
  [182] = {.lex_state = 20, .external_lex_state = 12},
  [183] = {.lex_state = 0, .external_lex_state = 6},
  [184] = {.lex_state = 20, .external_lex_state = 12},
  [185] = {.lex_state = 0, .external_lex_state = 6},
  [186] = {.lex_state = 20, .external_lex_state = 12},
  [187] = {.lex_state = 20, .external_lex_state = 12},
  [188] = {.lex_state = 20, .external_lex_state = 12},
  [189] = {.lex_state = 0, .external_lex_state = 6},
  [190] = {.lex_state = 20, .external_lex_state = 12},
  [191] = {.lex_state = 0, .external_lex_state = 6},
  [192] = {.lex_state = 20, .external_lex_state = 12},
  [193] = {.lex_state = 20, .external_lex_state = 12},
  [194] = {.lex_state = 20, .external_lex_state = 12},
  [195] = {.lex_state = 20, .external_lex_state = 12},
  [196] = {.lex_state = 20, .external_lex_state = 12},
  [197] = {.lex_state = 20, .external_lex_state = 12},
  [198] = {.lex_state = 20, .external_lex_state = 12},
  [199] = {.lex_state = 20, .external_lex_state = 12},
  [200] = {.lex_state = 20, .external_lex_state = 12},
  [201] = {.lex_state = 0, .external_lex_state = 8},
  [202] = {.lex_state = 0, .external_lex_state = 8},
  [203] = {.lex_state = 26, .external_lex_state = 13},
  [204] = {.lex_state = 26, .external_lex_state = 13},
  [205] = {.lex_state = 26, .external_lex_state = 13},
  [206] = {.lex_state = 26, .external_lex_state = 14},
  [207] = {.lex_state = 0, .external_lex_state = 11},
  [208] = {.lex_state = 0, .external_lex_state = 7},
  [209] = {.lex_state = 0, .external_lex_state = 6},
  [210] = {.lex_state = 0, .external_lex_state = 11},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 7},
  [214] = {.lex_state = 0, .external_lex_state = 6},
  [215] = {.lex_state = 0, .external_lex_state = 6},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 7},
  [218] = {.lex_state = 0, .external_lex_state = 6},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 6},
  [222] = {.lex_state = 0, .external_lex_state = 7},
  [223] = {.lex_state = 0, .external_lex_state = 6},
  [224] = {.lex_state = 0, .external_lex_state = 6},
  [225] = {.lex_state = 0, .external_lex_state = 6},
  [226] = {.lex_state = 0, .external_lex_state = 6},
  [227] = {.lex_state = 0, .external_lex_state = 6},
  [228] = {.lex_state = 0, .external_lex_state = 11},
  [229] = {.lex_state = 0, .external_lex_state = 7},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 26, .external_lex_state = 13},
  [233] = {.lex_state = 26, .external_lex_state = 13},
  [234] = {.lex_state = 0, .external_lex_state = 11},
  [235] = {.lex_state = 26, .external_lex_state = 13},
  [236] = {.lex_state = 26, .external_lex_state = 13},
  [237] = {.lex_state = 0, .external_lex_state = 6},
  [238] = {.lex_state = 0, .external_lex_state = 7},
  [239] = {.lex_state = 26, .external_lex_state = 13},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 7},
  [242] = {.lex_state = 0, .external_lex_state = 6},
  [243] = {.lex_state = 0, .external_lex_state = 6},
  [244] = {.lex_state = 0, .external_lex_state = 7},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 6},
  [247] = {.lex_state = 0, .external_lex_state = 6},
  [248] = {.lex_state = 0, .external_lex_state = 6},
  [249] = {.lex_state = 0, .external_lex_state = 6},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 228, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 11},
  [253] = {.lex_state = 0, .external_lex_state = 11},
  [254] = {.lex_state = 116, .external_lex_state = 12},
  [255] = {.lex_state = 0, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 7},
  [257] = {.lex_state = 0, .external_lex_state = 6},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 0, .external_lex_state = 15},
  [260] = {.lex_state = 0, .external_lex_state = 2},
  [261] = {.lex_state = 0, .external_lex_state = 11},
  [262] = {.lex_state = 0, .external_lex_state = 6},
  [263] = {.lex_state = 0, .external_lex_state = 6},
  [264] = {.lex_state = 0, .external_lex_state = 6},
  [265] = {.lex_state = 297, .external_lex_state = 2},
  [266] = {.lex_state = 0, .external_lex_state = 6},
  [267] = {.lex_state = 0, .external_lex_state = 6},
  [268] = {.lex_state = 0, .external_lex_state = 7},
  [269] = {.lex_state = 0, .external_lex_state = 7},
  [270] = {.lex_state = 116, .external_lex_state = 12},
  [271] = {.lex_state = 0, .external_lex_state = 2},
  [272] = {.lex_state = 116, .external_lex_state = 12},
  [273] = {.lex_state = 0, .external_lex_state = 6},
  [274] = {.lex_state = 0, .external_lex_state = 6},
  [275] = {.lex_state = 0, .external_lex_state = 6},
  [276] = {.lex_state = 0, .external_lex_state = 11},
  [277] = {.lex_state = 26, .external_lex_state = 2},
  [278] = {.lex_state = 0, .external_lex_state = 6},
  [279] = {.lex_state = 0, .external_lex_state = 6},
  [280] = {.lex_state = 228, .external_lex_state = 2},
  [281] = {.lex_state = 0, .external_lex_state = 2},
  [282] = {.lex_state = 0, .external_lex_state = 2},
  [283] = {.lex_state = 0, .external_lex_state = 2},
  [284] = {.lex_state = 26, .external_lex_state = 2},
  [285] = {.lex_state = 26, .external_lex_state = 2},
  [286] = {.lex_state = 0, .external_lex_state = 2},
  [287] = {.lex_state = 0, .external_lex_state = 2},
  [288] = {.lex_state = 0, .external_lex_state = 2},
  [289] = {.lex_state = 26, .external_lex_state = 2},
  [290] = {.lex_state = 228, .external_lex_state = 2},
  [291] = {.lex_state = 228, .external_lex_state = 2},
  [292] = {.lex_state = 26, .external_lex_state = 2},
  [293] = {.lex_state = 26, .external_lex_state = 2},
  [294] = {.lex_state = 26, .external_lex_state = 2},
  [295] = {.lex_state = 0, .external_lex_state = 2},
  [296] = {.lex_state = 0, .external_lex_state = 2},
  [297] = {.lex_state = 228, .external_lex_state = 2},
  [298] = {.lex_state = 228, .external_lex_state = 2},
  [299] = {.lex_state = 0, .external_lex_state = 2},
  [300] = {.lex_state = 228, .external_lex_state = 2},
  [301] = {.lex_state = 228, .external_lex_state = 2},
  [302] = {.lex_state = 0, .external_lex_state = 2},
  [303] = {.lex_state = 0, .external_lex_state = 2},
  [304] = {.lex_state = 0, .external_lex_state = 2},
  [305] = {.lex_state = 0, .external_lex_state = 2},
  [306] = {.lex_state = 0, .external_lex_state = 2},
  [307] = {.lex_state = 0, .external_lex_state = 2},
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

static const bool ts_external_scanner_states[16][EXTERNAL_TOKEN_COUNT] = {
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
  },
  [9] = {
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
  },
  [10] = {
    [ts_external_token__string_content] = true,
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
  [13] = {
    [ts_external_token__dedent] = true,
    [ts_external_token_comment] = true,
  },
  [14] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token_comment] = true,
  },
  [15] = {
    [ts_external_token__indent] = true,
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
    [anon_sym_SEMI] = ACTIONS(1),
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
    [sym_source_file] = STATE(286),
    [sym_context] = STATE(2),
    [sym__optional_or] = STATE(283),
    [sym_or] = STATE(283),
    [sym__optional_and] = STATE(11),
    [sym_and] = STATE(11),
    [sym__optional_not] = STATE(85),
    [sym_not] = STATE(85),
    [sym_match] = STATE(85),
    [sym_priority_key] = STATE(287),
    [sym_include_tag] = STATE(4),
    [sym_settings] = STATE(4),
    [sym_command] = STATE(4),
    [sym_rule] = STATE(282),
    [sym__optional_choice] = STATE(281),
    [sym_choice] = STATE(281),
    [sym__optional_anchor] = STATE(211),
    [sym__optional_seq] = STATE(212),
    [sym_seq] = STATE(212),
    [sym__primary_rule] = STATE(21),
    [sym_list] = STATE(21),
    [sym_capture] = STATE(21),
    [sym_optional] = STATE(21),
    [sym_repeat] = STATE(21),
    [sym_repeat1] = STATE(21),
    [sym_parenthesized_rule] = STATE(21),
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
    STATE(211), 1,
      sym__optional_anchor,
    STATE(282), 1,
      sym_rule,
    STATE(212), 2,
      sym__optional_seq,
      sym_seq,
    STATE(281), 2,
      sym__optional_choice,
      sym_choice,
    STATE(5), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(21), 7,
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
    STATE(211), 1,
      sym__optional_anchor,
    STATE(282), 1,
      sym_rule,
    STATE(212), 2,
      sym__optional_seq,
      sym_seq,
    STATE(281), 2,
      sym__optional_choice,
      sym_choice,
    STATE(3), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(21), 7,
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
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(211), 1,
      sym__optional_anchor,
    STATE(282), 1,
      sym_rule,
    STATE(212), 2,
      sym__optional_seq,
      sym_seq,
    STATE(281), 2,
      sym__optional_choice,
      sym_choice,
    STATE(3), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(21), 7,
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
    STATE(211), 1,
      sym__optional_anchor,
    STATE(282), 1,
      sym_rule,
    STATE(212), 2,
      sym__optional_seq,
      sym_seq,
    STATE(281), 2,
      sym__optional_choice,
      sym_choice,
    STATE(3), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(21), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [240] = 11,
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
    STATE(193), 1,
      sym__expression,
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
    STATE(190), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [286] = 14,
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
    STATE(143), 1,
      sym_command_block,
    STATE(157), 1,
      sym__expression,
    STATE(9), 2,
      sym__simple_statements,
      aux_sym_command_block_repeat1,
    STATE(210), 3,
      sym__simple_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(148), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [337] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_key,
    ACTIONS(101), 1,
      anon_sym_sleep,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(107), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym_float,
    ACTIONS(113), 1,
      sym__dedent,
    ACTIONS(115), 1,
      sym__string_start,
    STATE(157), 1,
      sym__expression,
    STATE(8), 2,
      sym__simple_statements,
      aux_sym_command_block_repeat1,
    STATE(210), 3,
      sym__simple_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(148), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [385] = 13,
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
    ACTIONS(118), 1,
      sym__dedent,
    STATE(157), 1,
      sym__expression,
    STATE(8), 2,
      sym__simple_statements,
      aux_sym_command_block_repeat1,
    STATE(210), 3,
      sym__simple_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(148), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [433] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_DASH,
    STATE(287), 1,
      sym_priority_key,
    STATE(12), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(85), 3,
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
  [471] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_DASH,
    STATE(287), 1,
      sym_priority_key,
    STATE(10), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(85), 3,
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
  [509] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(126), 1,
      anon_sym_not,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(287), 1,
      sym_priority_key,
    STATE(12), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(85), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(129), 10,
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
  [547] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_start_anchor,
    ACTIONS(137), 1,
      sym_word,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_LT,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(222), 1,
      sym__optional_anchor,
    STATE(208), 2,
      sym__optional_seq,
      sym_seq,
    STATE(269), 2,
      sym__optional_choice,
      sym_choice,
    STATE(19), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [589] = 12,
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
    ACTIONS(147), 1,
      sym__newline,
    STATE(157), 1,
      sym__expression,
    STATE(234), 3,
      sym__simple_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(148), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [633] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_word,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_LT,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      aux_sym_seq_repeat1,
    ACTIONS(149), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(115), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [675] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_LT,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_start_anchor,
    ACTIONS(167), 1,
      sym_word,
    STATE(227), 1,
      sym__optional_anchor,
    STATE(226), 2,
      sym__optional_seq,
      sym_seq,
    STATE(266), 2,
      sym__optional_choice,
      sym_choice,
    STATE(15), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [717] = 12,
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
    ACTIONS(169), 1,
      sym__newline,
    STATE(157), 1,
      sym__expression,
    STATE(234), 3,
      sym__simple_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(148), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [761] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_start_anchor,
    ACTIONS(137), 1,
      sym_word,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_LT,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(222), 1,
      sym__optional_anchor,
    STATE(208), 2,
      sym__optional_seq,
      sym_seq,
    STATE(268), 2,
      sym__optional_choice,
      sym_choice,
    STATE(19), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [803] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_LT,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      sym_word,
    ACTIONS(173), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_PLUS,
    STATE(38), 1,
      aux_sym_seq_repeat1,
    ACTIONS(149), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(113), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [845] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_LT,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_start_anchor,
    ACTIONS(167), 1,
      sym_word,
    STATE(227), 1,
      sym__optional_anchor,
    STATE(226), 2,
      sym__optional_seq,
      sym_seq,
    STATE(267), 2,
      sym__optional_choice,
      sym_choice,
    STATE(15), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [887] = 11,
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
    ACTIONS(177), 1,
      sym_word,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    STATE(27), 1,
      aux_sym_seq_repeat1,
    ACTIONS(149), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(120), 7,
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
    ACTIONS(135), 1,
      sym_start_anchor,
    ACTIONS(137), 1,
      sym_word,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_LT,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(222), 1,
      sym__optional_anchor,
    STATE(208), 2,
      sym__optional_seq,
      sym_seq,
    STATE(256), 2,
      sym__optional_choice,
      sym_choice,
    STATE(19), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [971] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(287), 1,
      sym_priority_key,
    STATE(88), 2,
      sym__optional_and,
      sym_and,
    STATE(85), 3,
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
  [1005] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_LT,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_start_anchor,
    ACTIONS(167), 1,
      sym_word,
    STATE(227), 1,
      sym__optional_anchor,
    STATE(226), 2,
      sym__optional_seq,
      sym_seq,
    STATE(257), 2,
      sym__optional_choice,
      sym_choice,
    STATE(15), 7,
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
    STATE(157), 1,
      sym__expression,
    STATE(234), 3,
      sym__simple_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(148), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1088] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    STATE(146), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1130] = 9,
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
    ACTIONS(177), 1,
      sym_word,
    STATE(33), 1,
      aux_sym_seq_repeat1,
    ACTIONS(201), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(120), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1166] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_word,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_LT,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      aux_sym_seq_repeat1,
    ACTIONS(201), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(115), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1202] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_word,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    ACTIONS(211), 1,
      anon_sym_LT,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      aux_sym_seq_repeat1,
    ACTIONS(203), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(115), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1238] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1280] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_word,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      anon_sym_LT,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      aux_sym_seq_repeat1,
    ACTIONS(203), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(113), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1316] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_LT,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_start_anchor,
    ACTIONS(167), 1,
      sym_word,
    STATE(243), 1,
      sym__optional_anchor,
    STATE(226), 2,
      sym__optional_seq,
      sym_seq,
    STATE(15), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1354] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_word,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(245), 1,
      anon_sym_LT,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      aux_sym_seq_repeat1,
    ACTIONS(203), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(120), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1390] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_argument_list,
    ACTIONS(256), 3,
      anon_sym_DASH,
      sym_word,
      anon_sym_or,
    ACTIONS(254), 11,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1418] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_start_anchor,
    ACTIONS(137), 1,
      sym_word,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_LT,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(244), 1,
      sym__optional_anchor,
    STATE(208), 2,
      sym__optional_seq,
      sym_seq,
    STATE(19), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1456] = 10,
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
    ACTIONS(260), 1,
      sym_word,
    STATE(240), 1,
      sym__optional_anchor,
    STATE(212), 2,
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
  [1494] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1536] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_LT,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      sym_word,
    STATE(31), 1,
      aux_sym_seq_repeat1,
    ACTIONS(201), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(113), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1572] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 3,
      anon_sym_DASH,
      sym_word,
      anon_sym_or,
    ACTIONS(254), 12,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 3,
      anon_sym_DASH,
      sym_word,
      anon_sym_or,
    ACTIONS(270), 12,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1660] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1699] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1738] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1777] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_key,
    ACTIONS(284), 1,
      anon_sym_sleep,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      sym_integer,
    ACTIONS(290), 1,
      sym_float,
    ACTIONS(292), 1,
      sym__newline,
    ACTIONS(294), 1,
      sym__string_start,
    STATE(63), 1,
      sym__expression,
    STATE(40), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1816] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_PLUS,
    ACTIONS(300), 2,
      sym_word,
      anon_sym_or,
    ACTIONS(302), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(296), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [1845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 3,
      anon_sym_DASH,
      sym_word,
      anon_sym_or,
    ACTIONS(296), 12,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 3,
      anon_sym_DASH,
      sym_word,
      anon_sym_or,
    ACTIONS(302), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(296), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [1893] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 3,
      anon_sym_DASH,
      sym_word,
      anon_sym_or,
    ACTIONS(308), 12,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1955] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1994] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 3,
      anon_sym_DASH,
      sym_word,
      anon_sym_or,
    ACTIONS(316), 12,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 3,
      anon_sym_DASH,
      sym_word,
      anon_sym_or,
    ACTIONS(320), 12,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 3,
      anon_sym_DASH,
      sym_word,
      anon_sym_or,
    ACTIONS(324), 12,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 3,
      anon_sym_DASH,
      sym_word,
      anon_sym_or,
    ACTIONS(328), 12,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2125] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 3,
      anon_sym_DASH,
      sym_word,
      anon_sym_or,
    ACTIONS(334), 12,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 3,
      anon_sym_DASH,
      sym_word,
      anon_sym_or,
    ACTIONS(338), 12,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_DASH,
      sym_word,
      anon_sym_or,
    ACTIONS(342), 12,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_DASH,
      sym_word,
      anon_sym_or,
    ACTIONS(346), 12,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2256] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2295] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_PLUS,
    ACTIONS(354), 1,
      sym_word,
    ACTIONS(356), 1,
      anon_sym_or,
    ACTIONS(302), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(352), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [2326] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_key,
    ACTIONS(284), 1,
      anon_sym_sleep,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      sym_integer,
    ACTIONS(290), 1,
      sym_float,
    ACTIONS(294), 1,
      sym__string_start,
    STATE(48), 1,
      sym__expression,
    STATE(40), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2362] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_key,
    ACTIONS(83), 1,
      anon_sym_sleep,
    ACTIONS(87), 1,
      sym_integer,
    ACTIONS(89), 1,
      sym_float,
    ACTIONS(93), 1,
      sym__string_start,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(149), 1,
      sym__expression,
    STATE(148), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2398] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_key,
    ACTIONS(69), 1,
      anon_sym_sleep,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      sym_integer,
    ACTIONS(75), 1,
      sym__string_start,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 1,
      sym_float,
    STATE(192), 1,
      sym__expression,
    STATE(190), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2434] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    STATE(189), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2470] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_key,
    ACTIONS(83), 1,
      anon_sym_sleep,
    ACTIONS(87), 1,
      sym_integer,
    ACTIONS(89), 1,
      sym_float,
    ACTIONS(93), 1,
      sym__string_start,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(180), 1,
      sym__expression,
    STATE(148), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2506] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_key,
    ACTIONS(69), 1,
      anon_sym_sleep,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      sym_integer,
    ACTIONS(75), 1,
      sym__string_start,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 1,
      sym_float,
    STATE(186), 1,
      sym__expression,
    STATE(190), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2542] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_key,
    ACTIONS(69), 1,
      anon_sym_sleep,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      sym_integer,
    ACTIONS(75), 1,
      sym__string_start,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 1,
      sym_float,
    STATE(200), 1,
      sym__expression,
    STATE(190), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2578] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_LT,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_word,
    STATE(224), 2,
      sym__optional_seq,
      sym_seq,
    STATE(15), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2610] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    STATE(160), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2646] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    STATE(170), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2682] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    STATE(191), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2718] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    STATE(169), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_DASH,
    ACTIONS(366), 13,
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
  [2776] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    STATE(185), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2812] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    STATE(171), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2848] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_key,
    ACTIONS(189), 1,
      anon_sym_sleep,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    ACTIONS(199), 1,
      sym__string_start,
    STATE(183), 1,
      sym__expression,
    STATE(147), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2884] = 8,
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
    ACTIONS(260), 1,
      sym_word,
    STATE(216), 2,
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
  [2916] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_key,
    ACTIONS(83), 1,
      anon_sym_sleep,
    ACTIONS(87), 1,
      sym_integer,
    ACTIONS(89), 1,
      sym_float,
    ACTIONS(93), 1,
      sym__string_start,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(163), 1,
      sym__expression,
    STATE(148), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2952] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_key,
    ACTIONS(83), 1,
      anon_sym_sleep,
    ACTIONS(87), 1,
      sym_integer,
    ACTIONS(89), 1,
      sym_float,
    ACTIONS(93), 1,
      sym__string_start,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(162), 1,
      sym__expression,
    STATE(148), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2988] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_word,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_LT,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(213), 2,
      sym__optional_seq,
      sym_seq,
    STATE(19), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [3020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_DASH,
    ACTIONS(370), 13,
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
  [3042] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_and,
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
  [3066] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_key,
    ACTIONS(284), 1,
      anon_sym_sleep,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      sym_integer,
    ACTIONS(290), 1,
      sym_float,
    ACTIONS(294), 1,
      sym__string_start,
    STATE(46), 1,
      sym__expression,
    STATE(40), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [3102] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_key,
    ACTIONS(284), 1,
      anon_sym_sleep,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      sym_integer,
    ACTIONS(290), 1,
      sym_float,
    ACTIONS(294), 1,
      sym__string_start,
    STATE(47), 1,
      sym__expression,
    STATE(40), 6,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [3138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 12,
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
  [3159] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(84), 1,
      sym_match,
    STATE(287), 1,
      sym_priority_key,
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
  [3184] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      sym__string_content,
    ACTIONS(388), 1,
      sym__string_end,
    STATE(99), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(384), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3210] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      sym__string_content,
    ACTIONS(394), 1,
      sym__string_end,
    STATE(93), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(390), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3236] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      sym__string_content,
    ACTIONS(400), 1,
      sym__string_end,
    STATE(94), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(396), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3262] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_LBRACE,
    ACTIONS(408), 1,
      sym__string_content,
    ACTIONS(411), 1,
      sym__string_end,
    STATE(93), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(405), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3288] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      sym__string_content,
    ACTIONS(413), 1,
      sym__string_end,
    STATE(93), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(390), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3314] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      sym__string_content,
    ACTIONS(415), 1,
      sym__string_end,
    STATE(93), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(390), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3340] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(419), 1,
      sym__string_content,
    ACTIONS(421), 1,
      sym__string_end,
    STATE(91), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(417), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3366] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      sym__string_content,
    ACTIONS(423), 1,
      sym__string_end,
    STATE(93), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(390), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3392] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(427), 1,
      sym__string_content,
    ACTIONS(429), 1,
      sym__string_end,
    STATE(95), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(425), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3418] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      sym__string_content,
    ACTIONS(431), 1,
      sym__string_end,
    STATE(93), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(390), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3444] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      sym__string_content,
    ACTIONS(433), 1,
      sym__string_end,
    STATE(93), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(390), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3470] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(437), 1,
      sym__string_content,
    ACTIONS(439), 1,
      sym__string_end,
    STATE(97), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(435), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3496] = 6,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(443), 1,
      sym__string_content,
    ACTIONS(445), 1,
      sym__string_end,
    STATE(100), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(441), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3522] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_EQ,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_argument_list,
    ACTIONS(254), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3545] = 2,
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
  [3561] = 2,
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
  [3577] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_argument_list,
    ACTIONS(254), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 10,
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
  [3613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 10,
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
  [3629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 10,
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
  [3645] = 2,
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
  [3661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 10,
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
  [3677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 10,
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
  [3693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_PLUS,
    ACTIONS(465), 8,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [3713] = 2,
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
  [3729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    ACTIONS(465), 8,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 10,
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
  [3765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 10,
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
  [3781] = 2,
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
  [3797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 10,
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
  [3813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      anon_sym_PLUS,
    ACTIONS(465), 8,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3833] = 2,
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
  [3849] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_argument_list,
    ACTIONS(254), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 10,
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
  [3885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 10,
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
  [3901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 10,
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
  [3917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 10,
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
  [3933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_word,
    ACTIONS(467), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_word,
    ACTIONS(471), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_word,
    ACTIONS(475), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [3984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym_word,
    ACTIONS(479), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [4001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_word,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [4018] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    ACTIONS(489), 1,
      anon_sym_or,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(483), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4043] = 3,
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
  [4060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_word,
    ACTIONS(497), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [4077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_word,
    ACTIONS(501), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [4094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_word,
    ACTIONS(505), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [4111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_word,
    ACTIONS(509), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [4128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_word,
    ACTIONS(513), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [4145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_word,
    ACTIONS(517), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [4162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym_argument_list,
    ACTIONS(254), 7,
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
    ACTIONS(340), 1,
      sym_word,
    ACTIONS(338), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [4198] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_or,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    STATE(221), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(483), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym_word,
    ACTIONS(527), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [4240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym_word,
    ACTIONS(531), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [4257] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_or,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(483), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4282] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_or,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(483), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(296), 5,
      sym__newline,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_or,
  [4351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 4,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(547), 4,
      anon_sym_key,
      anon_sym_sleep,
      sym_identifier,
      sym_integer,
  [4409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4451] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_or,
    ACTIONS(549), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(551), 2,
      sym__newline,
      anon_sym_SEMI,
    ACTIONS(543), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4499] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_or,
    ACTIONS(483), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(555), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(296), 3,
      sym__newline,
      anon_sym_SEMI,
      anon_sym_or,
    ACTIONS(543), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(296), 5,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [4651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(296), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [4753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 4,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(559), 4,
      anon_sym_key,
      anon_sym_sleep,
      sym_identifier,
      sym_integer,
  [4769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 4,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(563), 4,
      anon_sym_key,
      anon_sym_sleep,
      sym_identifier,
      sym_integer,
  [4785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 8,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_or,
    ACTIONS(549), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(565), 2,
      sym__newline,
      anon_sym_SEMI,
    ACTIONS(543), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4819] = 3,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(569), 2,
      sym__string_content,
      sym__string_end,
    ACTIONS(567), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [4835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4848] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_or,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4880] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_or,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4938] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_or,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4970] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_or,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(485), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 2,
      anon_sym_RBRACE,
      anon_sym_or,
    ACTIONS(579), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(581), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5006] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_RBRACE,
    ACTIONS(585), 1,
      anon_sym_or,
    ACTIONS(579), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(581), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [5038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [5051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [5064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [5077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [5090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [5103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(296), 4,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_or,
  [5118] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      sym_integer,
    ACTIONS(589), 1,
      sym_float,
    ACTIONS(591), 1,
      sym__string_start,
    STATE(232), 1,
      sym_value,
    STATE(239), 2,
      sym_number,
      sym_string,
  [5138] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym_integer,
    ACTIONS(595), 1,
      sym_float,
    ACTIONS(597), 1,
      sym__string_start,
    STATE(138), 1,
      sym_value,
    STATE(137), 2,
      sym_number,
      sym_string,
  [5158] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(601), 1,
      sym__dedent,
    STATE(130), 1,
      sym_settings_block,
    STATE(205), 2,
      sym_settings_assignment,
      aux_sym_settings_block_repeat1,
  [5175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym_identifier,
    ACTIONS(606), 1,
      sym__dedent,
    STATE(204), 2,
      sym_settings_assignment,
      aux_sym_settings_block_repeat1,
  [5189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(608), 1,
      sym__dedent,
    STATE(204), 2,
      sym_settings_assignment,
      aux_sym_settings_block_repeat1,
  [5203] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      sym_identifier,
    ACTIONS(612), 1,
      sym__newline,
    ACTIONS(614), 1,
      sym__indent,
    STATE(133), 1,
      sym_settings_assignment,
  [5219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym__newline,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(228), 1,
      aux_sym__simple_statements_repeat1,
  [5232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      sym_end_anchor,
    ACTIONS(618), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [5243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_PIPE,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      aux_sym_choice_repeat1,
  [5256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_SEMI,
    ACTIONS(629), 1,
      sym__newline,
    STATE(207), 1,
      aux_sym__simple_statements_repeat1,
  [5269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_COLON,
    ACTIONS(633), 1,
      anon_sym_PIPE,
    STATE(220), 1,
      aux_sym_choice_repeat1,
  [5282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym_end_anchor,
    ACTIONS(618), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [5293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym_end_anchor,
    ACTIONS(637), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [5304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_argument_list_repeat1,
  [5317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_argument_list_repeat1,
  [5330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym_end_anchor,
    ACTIONS(637), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [5341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_PIPE,
    ACTIONS(650), 1,
      anon_sym_RBRACK,
    STATE(229), 1,
      aux_sym_choice_repeat1,
  [5354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_argument_list_repeat1,
  [5367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_COLON,
    ACTIONS(654), 1,
      anon_sym_PIPE,
    STATE(219), 1,
      aux_sym_choice_repeat1,
  [5380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_PIPE,
    ACTIONS(650), 1,
      anon_sym_COLON,
    STATE(219), 1,
      aux_sym_choice_repeat1,
  [5393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_argument_list_repeat1,
  [5406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RBRACK,
    ACTIONS(648), 1,
      anon_sym_PIPE,
    STATE(217), 1,
      aux_sym_choice_repeat1,
  [5419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    ACTIONS(659), 1,
      anon_sym_PIPE,
    STATE(209), 1,
      aux_sym_choice_repeat1,
  [5432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym_end_anchor,
    ACTIONS(637), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [5443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_argument_list_repeat1,
  [5456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_end_anchor,
    ACTIONS(618), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [5467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    ACTIONS(659), 1,
      anon_sym_PIPE,
    STATE(223), 1,
      aux_sym_choice_repeat1,
  [5480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_SEMI,
    ACTIONS(670), 1,
      sym__newline,
    STATE(228), 1,
      aux_sym__simple_statements_repeat1,
  [5493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RBRACK,
    ACTIONS(672), 1,
      anon_sym_PIPE,
    STATE(229), 1,
      aux_sym_choice_repeat1,
  [5506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [5514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [5522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 2,
      sym__dedent,
      sym_identifier,
  [5530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 2,
      sym__dedent,
      sym_identifier,
  [5538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 2,
      sym__newline,
      anon_sym_SEMI,
  [5546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 2,
      sym__dedent,
      sym_identifier,
  [5554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 2,
      sym__dedent,
      sym_identifier,
  [5562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [5570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [5578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 2,
      sym__dedent,
      sym_identifier,
  [5586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [5594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [5602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [5610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [5618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [5626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_GT,
  [5633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
  [5640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
  [5647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
  [5654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
  [5661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_EQ,
  [5668] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(685), 1,
      aux_sym_key_action_token1,
  [5675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      sym__newline,
  [5682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      sym__newline,
  [5689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
  [5696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_GT,
  [5703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_RBRACK,
  [5710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
  [5717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_LPAREN,
  [5724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym__indent,
  [5731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
  [5738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym__newline,
  [5745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
  [5752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
  [5759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
  [5766] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(711), 1,
      sym_implicit_string,
  [5773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
  [5780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
  [5787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_RBRACK,
  [5794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_RBRACK,
  [5801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
  [5808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_GT,
  [5815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
  [5822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
  [5829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
  [5836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
  [5843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym__newline,
  [5850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_identifier,
  [5857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
  [5864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
  [5871] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(739), 1,
      aux_sym_key_action_token1,
  [5878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_COLON,
  [5885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_COLON,
  [5892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_DASH,
  [5899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym_identifier,
  [5906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_identifier,
  [5913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      ts_builtin_sym_end,
  [5920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_COLON,
  [5927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_EQ,
  [5934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      sym_identifier,
  [5941] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(759), 1,
      aux_sym_key_action_token1,
  [5948] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(761), 1,
      aux_sym_key_action_token1,
  [5955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      sym_identifier,
  [5962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      sym_identifier,
  [5969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym_identifier,
  [5976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_COLON,
  [5983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_COLON,
  [5990] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(773), 1,
      aux_sym_key_action_token1,
  [5997] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(775), 1,
      aux_sym_key_action_token1,
  [6004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_COLON,
  [6011] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(779), 1,
      aux_sym_key_action_token1,
  [6018] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym_key_action_token1,
  [6025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_LPAREN,
  [6032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_LPAREN,
  [6039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_LPAREN,
  [6046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_LPAREN,
  [6053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_LPAREN,
  [6060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 240,
  [SMALL_STATE(7)] = 286,
  [SMALL_STATE(8)] = 337,
  [SMALL_STATE(9)] = 385,
  [SMALL_STATE(10)] = 433,
  [SMALL_STATE(11)] = 471,
  [SMALL_STATE(12)] = 509,
  [SMALL_STATE(13)] = 547,
  [SMALL_STATE(14)] = 589,
  [SMALL_STATE(15)] = 633,
  [SMALL_STATE(16)] = 675,
  [SMALL_STATE(17)] = 717,
  [SMALL_STATE(18)] = 761,
  [SMALL_STATE(19)] = 803,
  [SMALL_STATE(20)] = 845,
  [SMALL_STATE(21)] = 887,
  [SMALL_STATE(22)] = 929,
  [SMALL_STATE(23)] = 971,
  [SMALL_STATE(24)] = 1005,
  [SMALL_STATE(25)] = 1047,
  [SMALL_STATE(26)] = 1088,
  [SMALL_STATE(27)] = 1130,
  [SMALL_STATE(28)] = 1166,
  [SMALL_STATE(29)] = 1202,
  [SMALL_STATE(30)] = 1238,
  [SMALL_STATE(31)] = 1280,
  [SMALL_STATE(32)] = 1316,
  [SMALL_STATE(33)] = 1354,
  [SMALL_STATE(34)] = 1390,
  [SMALL_STATE(35)] = 1418,
  [SMALL_STATE(36)] = 1456,
  [SMALL_STATE(37)] = 1494,
  [SMALL_STATE(38)] = 1536,
  [SMALL_STATE(39)] = 1572,
  [SMALL_STATE(40)] = 1614,
  [SMALL_STATE(41)] = 1637,
  [SMALL_STATE(42)] = 1660,
  [SMALL_STATE(43)] = 1699,
  [SMALL_STATE(44)] = 1738,
  [SMALL_STATE(45)] = 1777,
  [SMALL_STATE(46)] = 1816,
  [SMALL_STATE(47)] = 1845,
  [SMALL_STATE(48)] = 1868,
  [SMALL_STATE(49)] = 1893,
  [SMALL_STATE(50)] = 1932,
  [SMALL_STATE(51)] = 1955,
  [SMALL_STATE(52)] = 1994,
  [SMALL_STATE(53)] = 2033,
  [SMALL_STATE(54)] = 2056,
  [SMALL_STATE(55)] = 2079,
  [SMALL_STATE(56)] = 2102,
  [SMALL_STATE(57)] = 2125,
  [SMALL_STATE(58)] = 2164,
  [SMALL_STATE(59)] = 2187,
  [SMALL_STATE(60)] = 2210,
  [SMALL_STATE(61)] = 2233,
  [SMALL_STATE(62)] = 2256,
  [SMALL_STATE(63)] = 2295,
  [SMALL_STATE(64)] = 2326,
  [SMALL_STATE(65)] = 2362,
  [SMALL_STATE(66)] = 2398,
  [SMALL_STATE(67)] = 2434,
  [SMALL_STATE(68)] = 2470,
  [SMALL_STATE(69)] = 2506,
  [SMALL_STATE(70)] = 2542,
  [SMALL_STATE(71)] = 2578,
  [SMALL_STATE(72)] = 2610,
  [SMALL_STATE(73)] = 2646,
  [SMALL_STATE(74)] = 2682,
  [SMALL_STATE(75)] = 2718,
  [SMALL_STATE(76)] = 2754,
  [SMALL_STATE(77)] = 2776,
  [SMALL_STATE(78)] = 2812,
  [SMALL_STATE(79)] = 2848,
  [SMALL_STATE(80)] = 2884,
  [SMALL_STATE(81)] = 2916,
  [SMALL_STATE(82)] = 2952,
  [SMALL_STATE(83)] = 2988,
  [SMALL_STATE(84)] = 3020,
  [SMALL_STATE(85)] = 3042,
  [SMALL_STATE(86)] = 3066,
  [SMALL_STATE(87)] = 3102,
  [SMALL_STATE(88)] = 3138,
  [SMALL_STATE(89)] = 3159,
  [SMALL_STATE(90)] = 3184,
  [SMALL_STATE(91)] = 3210,
  [SMALL_STATE(92)] = 3236,
  [SMALL_STATE(93)] = 3262,
  [SMALL_STATE(94)] = 3288,
  [SMALL_STATE(95)] = 3314,
  [SMALL_STATE(96)] = 3340,
  [SMALL_STATE(97)] = 3366,
  [SMALL_STATE(98)] = 3392,
  [SMALL_STATE(99)] = 3418,
  [SMALL_STATE(100)] = 3444,
  [SMALL_STATE(101)] = 3470,
  [SMALL_STATE(102)] = 3496,
  [SMALL_STATE(103)] = 3522,
  [SMALL_STATE(104)] = 3545,
  [SMALL_STATE(105)] = 3561,
  [SMALL_STATE(106)] = 3577,
  [SMALL_STATE(107)] = 3597,
  [SMALL_STATE(108)] = 3613,
  [SMALL_STATE(109)] = 3629,
  [SMALL_STATE(110)] = 3645,
  [SMALL_STATE(111)] = 3661,
  [SMALL_STATE(112)] = 3677,
  [SMALL_STATE(113)] = 3693,
  [SMALL_STATE(114)] = 3713,
  [SMALL_STATE(115)] = 3729,
  [SMALL_STATE(116)] = 3749,
  [SMALL_STATE(117)] = 3765,
  [SMALL_STATE(118)] = 3781,
  [SMALL_STATE(119)] = 3797,
  [SMALL_STATE(120)] = 3813,
  [SMALL_STATE(121)] = 3833,
  [SMALL_STATE(122)] = 3849,
  [SMALL_STATE(123)] = 3869,
  [SMALL_STATE(124)] = 3885,
  [SMALL_STATE(125)] = 3901,
  [SMALL_STATE(126)] = 3917,
  [SMALL_STATE(127)] = 3933,
  [SMALL_STATE(128)] = 3950,
  [SMALL_STATE(129)] = 3967,
  [SMALL_STATE(130)] = 3984,
  [SMALL_STATE(131)] = 4001,
  [SMALL_STATE(132)] = 4018,
  [SMALL_STATE(133)] = 4043,
  [SMALL_STATE(134)] = 4060,
  [SMALL_STATE(135)] = 4077,
  [SMALL_STATE(136)] = 4094,
  [SMALL_STATE(137)] = 4111,
  [SMALL_STATE(138)] = 4128,
  [SMALL_STATE(139)] = 4145,
  [SMALL_STATE(140)] = 4162,
  [SMALL_STATE(141)] = 4181,
  [SMALL_STATE(142)] = 4198,
  [SMALL_STATE(143)] = 4223,
  [SMALL_STATE(144)] = 4240,
  [SMALL_STATE(145)] = 4257,
  [SMALL_STATE(146)] = 4282,
  [SMALL_STATE(147)] = 4307,
  [SMALL_STATE(148)] = 4321,
  [SMALL_STATE(149)] = 4335,
  [SMALL_STATE(150)] = 4351,
  [SMALL_STATE(151)] = 4365,
  [SMALL_STATE(152)] = 4379,
  [SMALL_STATE(153)] = 4393,
  [SMALL_STATE(154)] = 4409,
  [SMALL_STATE(155)] = 4423,
  [SMALL_STATE(156)] = 4437,
  [SMALL_STATE(157)] = 4451,
  [SMALL_STATE(158)] = 4471,
  [SMALL_STATE(159)] = 4485,
  [SMALL_STATE(160)] = 4499,
  [SMALL_STATE(161)] = 4519,
  [SMALL_STATE(162)] = 4533,
  [SMALL_STATE(163)] = 4547,
  [SMALL_STATE(164)] = 4565,
  [SMALL_STATE(165)] = 4579,
  [SMALL_STATE(166)] = 4593,
  [SMALL_STATE(167)] = 4607,
  [SMALL_STATE(168)] = 4621,
  [SMALL_STATE(169)] = 4635,
  [SMALL_STATE(170)] = 4651,
  [SMALL_STATE(171)] = 4665,
  [SMALL_STATE(172)] = 4683,
  [SMALL_STATE(173)] = 4697,
  [SMALL_STATE(174)] = 4711,
  [SMALL_STATE(175)] = 4725,
  [SMALL_STATE(176)] = 4739,
  [SMALL_STATE(177)] = 4753,
  [SMALL_STATE(178)] = 4769,
  [SMALL_STATE(179)] = 4785,
  [SMALL_STATE(180)] = 4799,
  [SMALL_STATE(181)] = 4819,
  [SMALL_STATE(182)] = 4835,
  [SMALL_STATE(183)] = 4848,
  [SMALL_STATE(184)] = 4867,
  [SMALL_STATE(185)] = 4880,
  [SMALL_STATE(186)] = 4899,
  [SMALL_STATE(187)] = 4912,
  [SMALL_STATE(188)] = 4925,
  [SMALL_STATE(189)] = 4938,
  [SMALL_STATE(190)] = 4957,
  [SMALL_STATE(191)] = 4970,
  [SMALL_STATE(192)] = 4989,
  [SMALL_STATE(193)] = 5006,
  [SMALL_STATE(194)] = 5025,
  [SMALL_STATE(195)] = 5038,
  [SMALL_STATE(196)] = 5051,
  [SMALL_STATE(197)] = 5064,
  [SMALL_STATE(198)] = 5077,
  [SMALL_STATE(199)] = 5090,
  [SMALL_STATE(200)] = 5103,
  [SMALL_STATE(201)] = 5118,
  [SMALL_STATE(202)] = 5138,
  [SMALL_STATE(203)] = 5158,
  [SMALL_STATE(204)] = 5175,
  [SMALL_STATE(205)] = 5189,
  [SMALL_STATE(206)] = 5203,
  [SMALL_STATE(207)] = 5219,
  [SMALL_STATE(208)] = 5232,
  [SMALL_STATE(209)] = 5243,
  [SMALL_STATE(210)] = 5256,
  [SMALL_STATE(211)] = 5269,
  [SMALL_STATE(212)] = 5282,
  [SMALL_STATE(213)] = 5293,
  [SMALL_STATE(214)] = 5304,
  [SMALL_STATE(215)] = 5317,
  [SMALL_STATE(216)] = 5330,
  [SMALL_STATE(217)] = 5341,
  [SMALL_STATE(218)] = 5354,
  [SMALL_STATE(219)] = 5367,
  [SMALL_STATE(220)] = 5380,
  [SMALL_STATE(221)] = 5393,
  [SMALL_STATE(222)] = 5406,
  [SMALL_STATE(223)] = 5419,
  [SMALL_STATE(224)] = 5432,
  [SMALL_STATE(225)] = 5443,
  [SMALL_STATE(226)] = 5456,
  [SMALL_STATE(227)] = 5467,
  [SMALL_STATE(228)] = 5480,
  [SMALL_STATE(229)] = 5493,
  [SMALL_STATE(230)] = 5506,
  [SMALL_STATE(231)] = 5514,
  [SMALL_STATE(232)] = 5522,
  [SMALL_STATE(233)] = 5530,
  [SMALL_STATE(234)] = 5538,
  [SMALL_STATE(235)] = 5546,
  [SMALL_STATE(236)] = 5554,
  [SMALL_STATE(237)] = 5562,
  [SMALL_STATE(238)] = 5570,
  [SMALL_STATE(239)] = 5578,
  [SMALL_STATE(240)] = 5586,
  [SMALL_STATE(241)] = 5594,
  [SMALL_STATE(242)] = 5602,
  [SMALL_STATE(243)] = 5610,
  [SMALL_STATE(244)] = 5618,
  [SMALL_STATE(245)] = 5626,
  [SMALL_STATE(246)] = 5633,
  [SMALL_STATE(247)] = 5640,
  [SMALL_STATE(248)] = 5647,
  [SMALL_STATE(249)] = 5654,
  [SMALL_STATE(250)] = 5661,
  [SMALL_STATE(251)] = 5668,
  [SMALL_STATE(252)] = 5675,
  [SMALL_STATE(253)] = 5682,
  [SMALL_STATE(254)] = 5689,
  [SMALL_STATE(255)] = 5696,
  [SMALL_STATE(256)] = 5703,
  [SMALL_STATE(257)] = 5710,
  [SMALL_STATE(258)] = 5717,
  [SMALL_STATE(259)] = 5724,
  [SMALL_STATE(260)] = 5731,
  [SMALL_STATE(261)] = 5738,
  [SMALL_STATE(262)] = 5745,
  [SMALL_STATE(263)] = 5752,
  [SMALL_STATE(264)] = 5759,
  [SMALL_STATE(265)] = 5766,
  [SMALL_STATE(266)] = 5773,
  [SMALL_STATE(267)] = 5780,
  [SMALL_STATE(268)] = 5787,
  [SMALL_STATE(269)] = 5794,
  [SMALL_STATE(270)] = 5801,
  [SMALL_STATE(271)] = 5808,
  [SMALL_STATE(272)] = 5815,
  [SMALL_STATE(273)] = 5822,
  [SMALL_STATE(274)] = 5829,
  [SMALL_STATE(275)] = 5836,
  [SMALL_STATE(276)] = 5843,
  [SMALL_STATE(277)] = 5850,
  [SMALL_STATE(278)] = 5857,
  [SMALL_STATE(279)] = 5864,
  [SMALL_STATE(280)] = 5871,
  [SMALL_STATE(281)] = 5878,
  [SMALL_STATE(282)] = 5885,
  [SMALL_STATE(283)] = 5892,
  [SMALL_STATE(284)] = 5899,
  [SMALL_STATE(285)] = 5906,
  [SMALL_STATE(286)] = 5913,
  [SMALL_STATE(287)] = 5920,
  [SMALL_STATE(288)] = 5927,
  [SMALL_STATE(289)] = 5934,
  [SMALL_STATE(290)] = 5941,
  [SMALL_STATE(291)] = 5948,
  [SMALL_STATE(292)] = 5955,
  [SMALL_STATE(293)] = 5962,
  [SMALL_STATE(294)] = 5969,
  [SMALL_STATE(295)] = 5976,
  [SMALL_STATE(296)] = 5983,
  [SMALL_STATE(297)] = 5990,
  [SMALL_STATE(298)] = 5997,
  [SMALL_STATE(299)] = 6004,
  [SMALL_STATE(300)] = 6011,
  [SMALL_STATE(301)] = 6018,
  [SMALL_STATE(302)] = 6025,
  [SMALL_STATE(303)] = 6032,
  [SMALL_STATE(304)] = 6039,
  [SMALL_STATE(305)] = 6046,
  [SMALL_STATE(306)] = 6053,
  [SMALL_STATE(307)] = 6060,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(296),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(295),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(294),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(289),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__not_interpolation, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_interpolation, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_block_repeat1, 2), SHIFT_REPEAT(67),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_block_repeat1, 2), SHIFT_REPEAT(304),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_block_repeat1, 2), SHIFT_REPEAT(305),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_block_repeat1, 2), SHIFT_REPEAT(103),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_block_repeat1, 2), SHIFT_REPEAT(148),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_block_repeat1, 2), SHIFT_REPEAT(148),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_block_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_block_repeat1, 2), SHIFT_REPEAT(90),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_or, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(89),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(299),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(287),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_seq, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(115),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(292),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(293),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(22),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(24),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(113),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(284),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(285),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(13),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(20),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(120),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(294),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(289),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(18),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(16),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_action, 4),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_action, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 6),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 3, .production_id = 6),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, .production_id = 4),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, .production_id = 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep_action, 4),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sleep_action, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, .production_id = 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4, .production_id = 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 4, .production_id = 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_and, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__optional_and, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and, 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(6),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(93),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(93),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat1, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_rule, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_tag, 4),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_tag, 4),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 1),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 4),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 4),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3, .production_id = 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3, .production_id = 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_block, 1),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_block, 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_block, 2),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_block, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_assignment, 3, .production_id = 5),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_assignment, 3, .production_id = 5),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 5),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 2),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statements, 4),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statements, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statements, 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statements, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statements, 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statements, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_block_repeat1, 2), SHIFT_REPEAT(288),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_block_repeat1, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(32),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_choice, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(72),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(36),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__simple_statements_repeat1, 2), SHIFT_REPEAT(25),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__simple_statements_repeat1, 2),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(35),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [751] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority_key, 1),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
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
