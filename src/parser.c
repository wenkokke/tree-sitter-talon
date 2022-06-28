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
#define STATE_COUNT 330
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 177
#define ALIAS_COUNT 0
#define TOKEN_COUNT 103
#define EXTERNAL_TOKEN_COUNT 13
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 8

enum {
  sym_comment = 1,
  anon_sym_DASH = 2,
  anon_sym_and = 3,
  anon_sym_not = 4,
  anon_sym_os = 5,
  anon_sym_COLON = 6,
  anon_sym_tag = 7,
  anon_sym_mode = 8,
  anon_sym_app = 9,
  anon_sym_app_DOTname = 10,
  anon_sym_app_DOTexe = 11,
  anon_sym_app_DOTbundle = 12,
  anon_sym_title = 13,
  anon_sym_code_DOTlanguage = 14,
  anon_sym_language = 15,
  anon_sym_speech_DOTengine = 16,
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
  anon_sym_key = 37,
  aux_sym_key_action_token1 = 38,
  anon_sym_sleep = 39,
  anon_sym_COMMA = 40,
  anon_sym_DOT = 41,
  anon_sym_user = 42,
  sym_identifier = 43,
  anon_sym_linux = 44,
  anon_sym_mac = 45,
  anon_sym_windows = 46,
  anon_sym_dragon = 47,
  anon_sym_wav2letter = 48,
  anon_sym_all = 49,
  anon_sym_command = 50,
  anon_sym_dictation = 51,
  anon_sym_phrase = 52,
  anon_sym_number = 53,
  anon_sym_number_small = 54,
  anon_sym_insert = 55,
  anon_sym_mouse_click = 56,
  anon_sym_mouse_drag = 57,
  anon_sym_mouse_move = 58,
  anon_sym_mouse_release = 59,
  anon_sym_mouse_scroll = 60,
  anon_sym_mouse_x = 61,
  anon_sym_mouse_y = 62,
  anon_sym_skip = 63,
  anon_sym_auto_format = 64,
  anon_sym_auto_insert = 65,
  anon_sym_mimic = 66,
  anon_sym_print = 67,
  anon_sym_speech = 68,
  anon_sym_code = 69,
  anon_sym_edit = 70,
  anon_sym_browser = 71,
  anon_sym_clip = 72,
  anon_sym_core = 73,
  anon_sym_dictate = 74,
  anon_sym_migrate = 75,
  anon_sym_path = 76,
  anon_sym_sound = 77,
  anon_sym_win = 78,
  anon_sym_experimental = 79,
  anon_sym_menu = 80,
  anon_sym_key_wait = 81,
  anon_sym_imgui = 82,
  anon_sym_terminal = 83,
  anon_sym_debugger = 84,
  anon_sym_main = 85,
  sym_integer = 86,
  sym_float = 87,
  aux_sym_regex_escape_sequence_token1 = 88,
  sym_implicit_string = 89,
  anon_sym_LBRACE_LBRACE = 90,
  anon_sym_RBRACE_RBRACE = 91,
  sym_string_escape_sequence = 92,
  sym__not_escapesequence = 93,
  sym__newline = 94,
  sym__indent = 95,
  sym__dedent = 96,
  sym__string_start = 97,
  sym__string_content = 98,
  sym__string_end = 99,
  sym__regex_start = 100,
  sym__regex_content = 101,
  sym__regex_end = 102,
  sym_source_file = 103,
  sym_context = 104,
  sym__optional_or = 105,
  sym_or = 106,
  sym__optional_and = 107,
  sym_and = 108,
  sym__optional_not = 109,
  sym_not = 110,
  sym_match = 111,
  sym_include_tag = 112,
  sym_settings = 113,
  sym_settings_block = 114,
  sym_settings_statement = 115,
  sym_command = 116,
  sym_command_block = 117,
  sym_rule = 118,
  sym__optional_choice = 119,
  sym_choice = 120,
  sym__optional_anchor = 121,
  sym__optional_seq = 122,
  sym_seq = 123,
  sym__primary_rule = 124,
  sym_list = 125,
  sym_capture = 126,
  sym_optional = 127,
  sym_repeat = 128,
  sym_repeat1 = 129,
  sym_parenthesized_rule = 130,
  sym__statement = 131,
  sym_assignment_statement = 132,
  sym_expression_statement = 133,
  sym__expression = 134,
  sym_parenthesized_expression = 135,
  sym_binary_operator = 136,
  sym_key_action = 137,
  sym_sleep_action = 138,
  sym_action = 139,
  sym_argument_list = 140,
  sym__qualified_identifier = 141,
  sym__user_identifier = 142,
  sym_os = 143,
  sym_speech_engine = 144,
  sym_mode_identifier = 145,
  sym__builtin_mode_identifier = 146,
  sym_list_identifier = 147,
  sym__builtin_list_identifier = 148,
  sym_capture_identifier = 149,
  sym__builtin_capture_identifier = 150,
  sym_action_identifier = 151,
  sym__builtin_action_identifier = 152,
  sym__builtin_action_namespace = 153,
  sym_setting_identifier = 154,
  sym__builtin_setting_identifier = 155,
  sym__builtin_setting_namespace = 156,
  sym_tag_identifier = 157,
  sym__builtin_tag_identifier = 158,
  sym_scope_identifier = 159,
  sym__builtin_scope_identifier = 160,
  sym__builtin_scope_namespace = 161,
  sym_value = 162,
  sym_number = 163,
  sym_string = 164,
  sym_interpolation = 165,
  sym__escape_interpolation = 166,
  sym__not_interpolation = 167,
  aux_sym_source_file_repeat1 = 168,
  aux_sym_or_repeat1 = 169,
  aux_sym_settings_block_repeat1 = 170,
  aux_sym_command_block_repeat1 = 171,
  aux_sym_choice_repeat1 = 172,
  aux_sym_seq_repeat1 = 173,
  aux_sym_argument_list_repeat1 = 174,
  aux_sym__qualified_identifier_repeat1 = 175,
  aux_sym_string_repeat1 = 176,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_DASH] = "-",
  [anon_sym_and] = "and",
  [anon_sym_not] = "not",
  [anon_sym_os] = "os",
  [anon_sym_COLON] = ":",
  [anon_sym_tag] = "tag",
  [anon_sym_mode] = "mode",
  [anon_sym_app] = "app",
  [anon_sym_app_DOTname] = "app.name",
  [anon_sym_app_DOTexe] = "app.exe",
  [anon_sym_app_DOTbundle] = "app.bundle",
  [anon_sym_title] = "title",
  [anon_sym_code_DOTlanguage] = "code.language",
  [anon_sym_language] = "language",
  [anon_sym_speech_DOTengine] = "speech.engine",
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
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_or] = "or",
  [anon_sym_key] = "key",
  [aux_sym_key_action_token1] = "implicit_string",
  [anon_sym_sleep] = "sleep",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [anon_sym_user] = "identifier",
  [sym_identifier] = "identifier",
  [anon_sym_linux] = "linux",
  [anon_sym_mac] = "mac",
  [anon_sym_windows] = "windows",
  [anon_sym_dragon] = "dragon",
  [anon_sym_wav2letter] = "wav2letter",
  [anon_sym_all] = "identifier",
  [anon_sym_command] = "identifier",
  [anon_sym_dictation] = "identifier",
  [anon_sym_phrase] = "identifier",
  [anon_sym_number] = "identifier",
  [anon_sym_number_small] = "identifier",
  [anon_sym_insert] = "identifier",
  [anon_sym_mouse_click] = "identifier",
  [anon_sym_mouse_drag] = "identifier",
  [anon_sym_mouse_move] = "identifier",
  [anon_sym_mouse_release] = "identifier",
  [anon_sym_mouse_scroll] = "identifier",
  [anon_sym_mouse_x] = "identifier",
  [anon_sym_mouse_y] = "identifier",
  [anon_sym_skip] = "identifier",
  [anon_sym_auto_format] = "identifier",
  [anon_sym_auto_insert] = "identifier",
  [anon_sym_mimic] = "identifier",
  [anon_sym_print] = "identifier",
  [anon_sym_speech] = "identifier",
  [anon_sym_code] = "identifier",
  [anon_sym_edit] = "identifier",
  [anon_sym_browser] = "identifier",
  [anon_sym_clip] = "identifier",
  [anon_sym_core] = "identifier",
  [anon_sym_dictate] = "identifier",
  [anon_sym_migrate] = "identifier",
  [anon_sym_path] = "identifier",
  [anon_sym_sound] = "identifier",
  [anon_sym_win] = "identifier",
  [anon_sym_experimental] = "identifier",
  [anon_sym_menu] = "identifier",
  [anon_sym_key_wait] = "identifier",
  [anon_sym_imgui] = "identifier",
  [anon_sym_terminal] = "identifier",
  [anon_sym_debugger] = "identifier",
  [anon_sym_main] = "identifier",
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
  [sym_include_tag] = "include_tag",
  [sym_settings] = "settings",
  [sym_settings_block] = "settings_block",
  [sym_settings_statement] = "settings_statement",
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
  [sym__statement] = "_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_expression_statement] = "expression_statement",
  [sym__expression] = "_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_binary_operator] = "binary_operator",
  [sym_key_action] = "key_action",
  [sym_sleep_action] = "sleep_action",
  [sym_action] = "action",
  [sym_argument_list] = "argument_list",
  [sym__qualified_identifier] = "_qualified_identifier",
  [sym__user_identifier] = "_user_identifier",
  [sym_os] = "os",
  [sym_speech_engine] = "speech_engine",
  [sym_mode_identifier] = "mode_identifier",
  [sym__builtin_mode_identifier] = "_builtin_mode_identifier",
  [sym_list_identifier] = "list_identifier",
  [sym__builtin_list_identifier] = "_builtin_list_identifier",
  [sym_capture_identifier] = "capture_identifier",
  [sym__builtin_capture_identifier] = "_builtin_capture_identifier",
  [sym_action_identifier] = "action_identifier",
  [sym__builtin_action_identifier] = "_builtin_action_identifier",
  [sym__builtin_action_namespace] = "_builtin_action_namespace",
  [sym_setting_identifier] = "setting_identifier",
  [sym__builtin_setting_identifier] = "_builtin_setting_identifier",
  [sym__builtin_setting_namespace] = "_builtin_setting_namespace",
  [sym_tag_identifier] = "tag_identifier",
  [sym__builtin_tag_identifier] = "_builtin_tag_identifier",
  [sym_scope_identifier] = "scope_identifier",
  [sym__builtin_scope_identifier] = "_builtin_scope_identifier",
  [sym__builtin_scope_namespace] = "_builtin_scope_namespace",
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
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym__qualified_identifier_repeat1] = "_qualified_identifier_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_os] = anon_sym_os,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_tag] = anon_sym_tag,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_app] = anon_sym_app,
  [anon_sym_app_DOTname] = anon_sym_app_DOTname,
  [anon_sym_app_DOTexe] = anon_sym_app_DOTexe,
  [anon_sym_app_DOTbundle] = anon_sym_app_DOTbundle,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_code_DOTlanguage] = anon_sym_code_DOTlanguage,
  [anon_sym_language] = anon_sym_language,
  [anon_sym_speech_DOTengine] = anon_sym_speech_DOTengine,
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
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_key] = anon_sym_key,
  [aux_sym_key_action_token1] = sym_implicit_string,
  [anon_sym_sleep] = anon_sym_sleep,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_user] = sym_identifier,
  [sym_identifier] = sym_identifier,
  [anon_sym_linux] = anon_sym_linux,
  [anon_sym_mac] = anon_sym_mac,
  [anon_sym_windows] = anon_sym_windows,
  [anon_sym_dragon] = anon_sym_dragon,
  [anon_sym_wav2letter] = anon_sym_wav2letter,
  [anon_sym_all] = sym_identifier,
  [anon_sym_command] = sym_identifier,
  [anon_sym_dictation] = sym_identifier,
  [anon_sym_phrase] = sym_identifier,
  [anon_sym_number] = sym_identifier,
  [anon_sym_number_small] = sym_identifier,
  [anon_sym_insert] = sym_identifier,
  [anon_sym_mouse_click] = sym_identifier,
  [anon_sym_mouse_drag] = sym_identifier,
  [anon_sym_mouse_move] = sym_identifier,
  [anon_sym_mouse_release] = sym_identifier,
  [anon_sym_mouse_scroll] = sym_identifier,
  [anon_sym_mouse_x] = sym_identifier,
  [anon_sym_mouse_y] = sym_identifier,
  [anon_sym_skip] = sym_identifier,
  [anon_sym_auto_format] = sym_identifier,
  [anon_sym_auto_insert] = sym_identifier,
  [anon_sym_mimic] = sym_identifier,
  [anon_sym_print] = sym_identifier,
  [anon_sym_speech] = sym_identifier,
  [anon_sym_code] = sym_identifier,
  [anon_sym_edit] = sym_identifier,
  [anon_sym_browser] = sym_identifier,
  [anon_sym_clip] = sym_identifier,
  [anon_sym_core] = sym_identifier,
  [anon_sym_dictate] = sym_identifier,
  [anon_sym_migrate] = sym_identifier,
  [anon_sym_path] = sym_identifier,
  [anon_sym_sound] = sym_identifier,
  [anon_sym_win] = sym_identifier,
  [anon_sym_experimental] = sym_identifier,
  [anon_sym_menu] = sym_identifier,
  [anon_sym_key_wait] = sym_identifier,
  [anon_sym_imgui] = sym_identifier,
  [anon_sym_terminal] = sym_identifier,
  [anon_sym_debugger] = sym_identifier,
  [anon_sym_main] = sym_identifier,
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
  [sym_include_tag] = sym_include_tag,
  [sym_settings] = sym_settings,
  [sym_settings_block] = sym_settings_block,
  [sym_settings_statement] = sym_settings_statement,
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
  [sym__statement] = sym__statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym__expression] = sym__expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_binary_operator] = sym_binary_operator,
  [sym_key_action] = sym_key_action,
  [sym_sleep_action] = sym_sleep_action,
  [sym_action] = sym_action,
  [sym_argument_list] = sym_argument_list,
  [sym__qualified_identifier] = sym__qualified_identifier,
  [sym__user_identifier] = sym__user_identifier,
  [sym_os] = sym_os,
  [sym_speech_engine] = sym_speech_engine,
  [sym_mode_identifier] = sym_mode_identifier,
  [sym__builtin_mode_identifier] = sym__builtin_mode_identifier,
  [sym_list_identifier] = sym_list_identifier,
  [sym__builtin_list_identifier] = sym__builtin_list_identifier,
  [sym_capture_identifier] = sym_capture_identifier,
  [sym__builtin_capture_identifier] = sym__builtin_capture_identifier,
  [sym_action_identifier] = sym_action_identifier,
  [sym__builtin_action_identifier] = sym__builtin_action_identifier,
  [sym__builtin_action_namespace] = sym__builtin_action_namespace,
  [sym_setting_identifier] = sym_setting_identifier,
  [sym__builtin_setting_identifier] = sym__builtin_setting_identifier,
  [sym__builtin_setting_namespace] = sym__builtin_setting_namespace,
  [sym_tag_identifier] = sym_tag_identifier,
  [sym__builtin_tag_identifier] = sym__builtin_tag_identifier,
  [sym_scope_identifier] = sym_scope_identifier,
  [sym__builtin_scope_identifier] = sym__builtin_scope_identifier,
  [sym__builtin_scope_namespace] = sym__builtin_scope_namespace,
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
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym__qualified_identifier_repeat1] = aux_sym__qualified_identifier_repeat1,
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
  [anon_sym_os] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_speech_DOTengine] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_user] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_linux] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mac] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_windows] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dragon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wav2letter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_command] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_dictation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_phrase] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_number_small] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_insert] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mouse_click] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mouse_drag] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mouse_move] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mouse_release] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mouse_scroll] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mouse_x] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mouse_y] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_skip] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auto_format] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auto_insert] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mimic] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_speech] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_code] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_edit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_browser] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_clip] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_core] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_dictate] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_migrate] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sound] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_win] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_experimental] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_menu] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_key_wait] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_imgui] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_terminal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_debugger] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_main] = {
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
  [sym_settings_statement] = {
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
  [sym__statement] = {
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
  [sym__qualified_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__user_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_os] = {
    .visible = true,
    .named = true,
  },
  [sym_speech_engine] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__builtin_mode_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_list_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__builtin_list_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_capture_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__builtin_capture_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_action_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__builtin_action_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__builtin_action_namespace] = {
    .visible = false,
    .named = true,
  },
  [sym_setting_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__builtin_setting_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__builtin_setting_namespace] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__builtin_tag_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_scope_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__builtin_scope_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__builtin_scope_namespace] = {
    .visible = false,
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
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__qualified_identifier_repeat1] = {
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
  [2] = {.index = 0, .length = 2},
  [5] = {.index = 2, .length = 2},
  [6] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 3},
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
    [0] = sym_identifier,
  },
  [3] = {
    [2] = sym_settings_block,
  },
  [4] = {
    [2] = sym_command_block,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_settings_statement, 2,
    sym_settings_statement,
    sym_settings_block,
  sym__statement, 2,
    sym__statement,
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
      if (eof) ADVANCE(304);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '$') ADVANCE(338);
      if (lookahead == '%') ADVANCE(405);
      if (lookahead == '(') ADVANCE(402);
      if (lookahead == ')') ADVANCE(403);
      if (lookahead == '*') ADVANCE(400);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == ',') ADVANCE(415);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == '0') ADVANCE(614);
      if (lookahead == ':') ADVANCE(314);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(335);
      if (lookahead == '>') ADVANCE(397);
      if (lookahead == '[') ADVANCE(398);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(399);
      if (lookahead == '^') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'k') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(237);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == '{') ADVANCE(393);
      if (lookahead == '|') ADVANCE(336);
      if (lookahead == '}') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(613);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '$' ||
          ('(' <= lookahead && lookahead <= '+') ||
          lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '?' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '^' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(624);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(631);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(8)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(19)
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
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '$') ADVANCE(338);
      if (lookahead == '%') ADVANCE(405);
      if (lookahead == '(') ADVANCE(402);
      if (lookahead == ')') ADVANCE(403);
      if (lookahead == '*') ADVANCE(400);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == ',') ADVANCE(415);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == '0') ADVANCE(614);
      if (lookahead == ':') ADVANCE(314);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(335);
      if (lookahead == '>') ADVANCE(397);
      if (lookahead == '[') ADVANCE(398);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(399);
      if (lookahead == '^') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'k') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(237);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == '{') ADVANCE(393);
      if (lookahead == '|') ADVANCE(336);
      if (lookahead == '}') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(613);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '$') ADVANCE(338);
      if (lookahead == '(') ADVANCE(402);
      if (lookahead == ')') ADVANCE(403);
      if (lookahead == '*') ADVANCE(400);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == ':') ADVANCE(314);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '[') ADVANCE(398);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == ']') ADVANCE(399);
      if (lookahead == '^') ADVANCE(337);
      if (lookahead == '{') ADVANCE(392);
      if (lookahead == '|') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '%') ADVANCE(405);
      if (lookahead == '(') ADVANCE(402);
      if (lookahead == '*') ADVANCE(400);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead == '.') ADVANCE(416);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == ':') ADVANCE(314);
      if (lookahead == '=') ADVANCE(335);
      if (lookahead == '>') ADVANCE(397);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'b') ADVANCE(219);
      if (lookahead == 'c') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(220);
      if (lookahead == 's') ADVANCE(216);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(237);
      if (lookahead == 'w') ADVANCE(151);
      if (lookahead == '}') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '(') ADVANCE(402);
      if (lookahead == ')') ADVANCE(403);
      if (lookahead == ',') ADVANCE(415);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == '0') ADVANCE(614);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == 'a') ADVANCE(498);
      if (lookahead == 'b') ADVANCE(504);
      if (lookahead == 'c') ADVANCE(480);
      if (lookahead == 'd') ADVANCE(467);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'i') ADVANCE(491);
      if (lookahead == 'k') ADVANCE(440);
      if (lookahead == 'm') ADVANCE(448);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 'u') ADVANCE(514);
      if (lookahead == 'w') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(17)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(613);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '(') ADVANCE(402);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == '0') ADVANCE(614);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == 'a') ADVANCE(498);
      if (lookahead == 'b') ADVANCE(504);
      if (lookahead == 'c') ADVANCE(480);
      if (lookahead == 'd') ADVANCE(467);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'i') ADVANCE(491);
      if (lookahead == 'k') ADVANCE(440);
      if (lookahead == 'm') ADVANCE(448);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == 'u') ADVANCE(514);
      if (lookahead == 'w') ADVANCE(470);
      if (lookahead == '{') ADVANCE(393);
      if (lookahead == '}') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(613);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'k') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == 'u') ADVANCE(237);
      if (lookahead == 'w') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(333);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(334);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(168);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(283);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(616);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(617);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(618);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(120);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(66);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(276);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == 'h') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(267);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(270);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(106);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(538);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(538);
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(570);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(163);
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(560);
      if (lookahead == 'y') ADVANCE(562);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(309);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(596);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(543);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(217);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(82);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'k') ADVANCE(142);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(316);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(552);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(315);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(209);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(268);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(236);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(271);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(233);
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 134:
      if (lookahead == 'g') ADVANCE(272);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(594);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(575);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(574);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 155:
      if (lookahead == 'k') ADVANCE(550);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(542);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(608);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(602);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(558);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(547);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'p') ADVANCE(212);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(599);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(610);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(540);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(544);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(598);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(321);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(586);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(564);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(413);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(583);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(609);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(539);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(581);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(572);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(606);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(566);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(568);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 265:
      if (lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 266:
      if (lookahead == 'u') ADVANCE(604);
      END_STATE();
    case 267:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 268:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 269:
      if (lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 270:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 271:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 272:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 273:
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 274:
      if (lookahead == 'v') ADVANCE(94);
      END_STATE();
    case 275:
      if (lookahead == 'w') ADVANCE(235);
      END_STATE();
    case 276:
      if (lookahead == 'w') ADVANCE(49);
      END_STATE();
    case 277:
      if (lookahead == 'w') ADVANCE(243);
      END_STATE();
    case 278:
      if (lookahead == 'x') ADVANCE(537);
      END_STATE();
    case 279:
      if (lookahead == 'x') ADVANCE(87);
      END_STATE();
    case 280:
      if (lookahead == 'y') ADVANCE(407);
      END_STATE();
    case 281:
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 282:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      END_STATE();
    case 283:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(616);
      END_STATE();
    case 284:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(617);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(620);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      END_STATE();
    case 287:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(630);
      END_STATE();
    case 288:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 289:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(618);
      END_STATE();
    case 290:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(630);
      END_STATE();
    case 291:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      END_STATE();
    case 292:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 293:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 294:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 295:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 296:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 297:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 298:
      if (eof) ADVANCE(304);
      if (lookahead == '\n') SKIP(302)
      END_STATE();
    case 299:
      if (eof) ADVANCE(304);
      if (lookahead == '\n') SKIP(302)
      if (lookahead == '\r') SKIP(298)
      END_STATE();
    case 300:
      if (eof) ADVANCE(304);
      if (lookahead == '\n') SKIP(303)
      END_STATE();
    case 301:
      if (eof) ADVANCE(304);
      if (lookahead == '\n') SKIP(303)
      if (lookahead == '\r') SKIP(300)
      END_STATE();
    case 302:
      if (eof) ADVANCE(304);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '(') ADVANCE(402);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == '.') ADVANCE(285);
      if (lookahead == '0') ADVANCE(614);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '[') ADVANCE(398);
      if (lookahead == '\\') SKIP(299)
      if (lookahead == '^') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'b') ADVANCE(380);
      if (lookahead == 'c') ADVANCE(373);
      if (lookahead == 'l') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(345);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead == 'u') ADVANCE(383);
      if (lookahead == 'w') ADVANCE(365);
      if (lookahead == '{') ADVANCE(392);
      if (lookahead == '}') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(302)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(613);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 303:
      if (eof) ADVANCE(304);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '(') ADVANCE(402);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '[') ADVANCE(398);
      if (lookahead == '\\') SKIP(301)
      if (lookahead == '^') ADVANCE(337);
      if (lookahead == 's') ADVANCE(356);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead == '{') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(303)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ')') ADVANCE(306);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_os);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '(') ADVANCE(22);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_app);
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_app);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_app);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_app_DOTname);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_app_DOTexe);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_app_DOTbundle);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_code_DOTlanguage);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_language);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_language);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_speech_DOTengine);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_tag_LPAREN_RPAREN);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_settings_LPAREN_RPAREN);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_start_anchor);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_end_anchor);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(364);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(349);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(358);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(317);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(389);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(339);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(382);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(353);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(576);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(600);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(611);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(347);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(385);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(390);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(322);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(376);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(419);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(584);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(340);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(388);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(343);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'w') ADVANCE(384);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(628);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(629);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == '_') ADVANCE(276);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == '\r') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(412);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(412);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '\\') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(412);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_sleep);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_sleep);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(620);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_user);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_user);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(520);
      if (lookahead == 'r') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(571);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(483);
      if (lookahead == 'd') ADVANCE(507);
      if (lookahead == 'm') ADVANCE(495);
      if (lookahead == 'r') ADVANCE(450);
      if (lookahead == 's') ADVANCE(435);
      if (lookahead == 'x') ADVANCE(561);
      if (lookahead == 'y') ADVANCE(563);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(474);
      if (lookahead == 'x') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(441);
      if (lookahead == 'r') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(443);
      if (lookahead == 'u') ADVANCE(516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(593);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead == 'i') ADVANCE(464);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(497);
      if (lookahead == 'i') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(513);
      if (lookahead == 'm') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(473);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(532);
      if (lookahead == 'p') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(528);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(499);
      if (lookahead == 'u') ADVANCE(527);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(587);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(569);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_linux);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_mac);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_windows);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_dragon);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_wav2letter);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_dictation);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_phrase);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_number);
      if (lookahead == '_') ADVANCE(241);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_number_small);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_insert);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_mouse_click);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_mouse_click);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_mouse_drag);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_mouse_drag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_mouse_move);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_mouse_move);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_mouse_release);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_mouse_release);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_mouse_scroll);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_mouse_scroll);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_mouse_x);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_mouse_x);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_mouse_y);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_mouse_y);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_skip);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_skip);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_auto_format);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_auto_format);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_auto_insert);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_auto_insert);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_mimic);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_mimic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_print);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_speech);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_speech);
      if (lookahead == '.') ADVANCE(113);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_speech);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_speech);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == '.') ADVANCE(164);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_code);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_edit);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_edit);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_browser);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_browser);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_browser);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_clip);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_clip);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_core);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_core);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_dictate);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_dictate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_migrate);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_migrate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_path);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_sound);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_sound);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_win);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_win);
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_win);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_win);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_experimental);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_experimental);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_menu);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_key_wait);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_imgui);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_terminal);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_debugger);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_main);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_main);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(622);
      if (lookahead == '_') ADVANCE(615);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(613);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(622);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(25);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(26);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(27);
      if (lookahead == '_') ADVANCE(615);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(613);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(622);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(613);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(612);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(617);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(618);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(622);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(620);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(623);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(620);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(621);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_regex_escape_sequence_token1);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\r') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(627);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '\\') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(627);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      if (lookahead == '\\') ADVANCE(632);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__not_escapesequence);
      if (lookahead == '\n') ADVANCE(631);
      if (lookahead == '\r') ADVANCE(3);
      if (sym_string_escape_sequence_character_set_1(lookahead)) ADVANCE(630);
      if (lookahead == 'U') ADVANCE(297);
      if (lookahead == 'u') ADVANCE(293);
      if (lookahead == 'x') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 302, .external_lex_state = 2},
  [2] = {.lex_state = 18, .external_lex_state = 3},
  [3] = {.lex_state = 17, .external_lex_state = 4},
  [4] = {.lex_state = 17, .external_lex_state = 4},
  [5] = {.lex_state = 17, .external_lex_state = 4},
  [6] = {.lex_state = 17, .external_lex_state = 5},
  [7] = {.lex_state = 17, .external_lex_state = 6},
  [8] = {.lex_state = 17, .external_lex_state = 6},
  [9] = {.lex_state = 17, .external_lex_state = 6},
  [10] = {.lex_state = 17, .external_lex_state = 6},
  [11] = {.lex_state = 17, .external_lex_state = 6},
  [12] = {.lex_state = 17, .external_lex_state = 6},
  [13] = {.lex_state = 17, .external_lex_state = 6},
  [14] = {.lex_state = 17, .external_lex_state = 6},
  [15] = {.lex_state = 17, .external_lex_state = 6},
  [16] = {.lex_state = 17, .external_lex_state = 7},
  [17] = {.lex_state = 17, .external_lex_state = 7},
  [18] = {.lex_state = 17, .external_lex_state = 7},
  [19] = {.lex_state = 17, .external_lex_state = 7},
  [20] = {.lex_state = 17, .external_lex_state = 7},
  [21] = {.lex_state = 17, .external_lex_state = 7},
  [22] = {.lex_state = 17, .external_lex_state = 7},
  [23] = {.lex_state = 17, .external_lex_state = 7},
  [24] = {.lex_state = 17, .external_lex_state = 7},
  [25] = {.lex_state = 17, .external_lex_state = 7},
  [26] = {.lex_state = 17, .external_lex_state = 7},
  [27] = {.lex_state = 17, .external_lex_state = 7},
  [28] = {.lex_state = 17, .external_lex_state = 7},
  [29] = {.lex_state = 17, .external_lex_state = 7},
  [30] = {.lex_state = 17, .external_lex_state = 7},
  [31] = {.lex_state = 17, .external_lex_state = 4},
  [32] = {.lex_state = 17, .external_lex_state = 4},
  [33] = {.lex_state = 17, .external_lex_state = 4},
  [34] = {.lex_state = 16, .external_lex_state = 2},
  [35] = {.lex_state = 16, .external_lex_state = 2},
  [36] = {.lex_state = 16, .external_lex_state = 2},
  [37] = {.lex_state = 16, .external_lex_state = 2},
  [38] = {.lex_state = 16, .external_lex_state = 2},
  [39] = {.lex_state = 303, .external_lex_state = 2},
  [40] = {.lex_state = 303, .external_lex_state = 2},
  [41] = {.lex_state = 16, .external_lex_state = 2},
  [42] = {.lex_state = 303, .external_lex_state = 2},
  [43] = {.lex_state = 16, .external_lex_state = 2},
  [44] = {.lex_state = 303, .external_lex_state = 2},
  [45] = {.lex_state = 16, .external_lex_state = 2},
  [46] = {.lex_state = 16, .external_lex_state = 2},
  [47] = {.lex_state = 16, .external_lex_state = 2},
  [48] = {.lex_state = 16, .external_lex_state = 2},
  [49] = {.lex_state = 16, .external_lex_state = 2},
  [50] = {.lex_state = 16, .external_lex_state = 2},
  [51] = {.lex_state = 16, .external_lex_state = 2},
  [52] = {.lex_state = 16, .external_lex_state = 2},
  [53] = {.lex_state = 16, .external_lex_state = 2},
  [54] = {.lex_state = 16, .external_lex_state = 2},
  [55] = {.lex_state = 16, .external_lex_state = 2},
  [56] = {.lex_state = 16, .external_lex_state = 2},
  [57] = {.lex_state = 16, .external_lex_state = 2},
  [58] = {.lex_state = 15, .external_lex_state = 2},
  [59] = {.lex_state = 15, .external_lex_state = 2},
  [60] = {.lex_state = 15, .external_lex_state = 2},
  [61] = {.lex_state = 15, .external_lex_state = 2},
  [62] = {.lex_state = 15, .external_lex_state = 2},
  [63] = {.lex_state = 15, .external_lex_state = 8},
  [64] = {.lex_state = 15, .external_lex_state = 2},
  [65] = {.lex_state = 15, .external_lex_state = 2},
  [66] = {.lex_state = 15, .external_lex_state = 9},
  [67] = {.lex_state = 15, .external_lex_state = 2},
  [68] = {.lex_state = 15, .external_lex_state = 2},
  [69] = {.lex_state = 15, .external_lex_state = 9},
  [70] = {.lex_state = 15, .external_lex_state = 2},
  [71] = {.lex_state = 15, .external_lex_state = 2},
  [72] = {.lex_state = 15, .external_lex_state = 2},
  [73] = {.lex_state = 15, .external_lex_state = 8},
  [74] = {.lex_state = 15, .external_lex_state = 9},
  [75] = {.lex_state = 15, .external_lex_state = 8},
  [76] = {.lex_state = 15, .external_lex_state = 2},
  [77] = {.lex_state = 15, .external_lex_state = 2},
  [78] = {.lex_state = 15, .external_lex_state = 2},
  [79] = {.lex_state = 19, .external_lex_state = 10},
  [80] = {.lex_state = 18, .external_lex_state = 11},
  [81] = {.lex_state = 19, .external_lex_state = 10},
  [82] = {.lex_state = 19, .external_lex_state = 10},
  [83] = {.lex_state = 18, .external_lex_state = 11},
  [84] = {.lex_state = 19, .external_lex_state = 12},
  [85] = {.lex_state = 18, .external_lex_state = 11},
  [86] = {.lex_state = 18, .external_lex_state = 11},
  [87] = {.lex_state = 18, .external_lex_state = 11},
  [88] = {.lex_state = 18, .external_lex_state = 11},
  [89] = {.lex_state = 18, .external_lex_state = 11},
  [90] = {.lex_state = 18, .external_lex_state = 11},
  [91] = {.lex_state = 18, .external_lex_state = 11},
  [92] = {.lex_state = 18, .external_lex_state = 11},
  [93] = {.lex_state = 18, .external_lex_state = 11},
  [94] = {.lex_state = 15, .external_lex_state = 2},
  [95] = {.lex_state = 15, .external_lex_state = 8},
  [96] = {.lex_state = 15, .external_lex_state = 2},
  [97] = {.lex_state = 15, .external_lex_state = 9},
  [98] = {.lex_state = 15, .external_lex_state = 8},
  [99] = {.lex_state = 15, .external_lex_state = 8},
  [100] = {.lex_state = 15, .external_lex_state = 9},
  [101] = {.lex_state = 15, .external_lex_state = 8},
  [102] = {.lex_state = 15, .external_lex_state = 8},
  [103] = {.lex_state = 15, .external_lex_state = 8},
  [104] = {.lex_state = 15, .external_lex_state = 2},
  [105] = {.lex_state = 15, .external_lex_state = 2},
  [106] = {.lex_state = 15, .external_lex_state = 2},
  [107] = {.lex_state = 15, .external_lex_state = 9},
  [108] = {.lex_state = 15, .external_lex_state = 2},
  [109] = {.lex_state = 15, .external_lex_state = 9},
  [110] = {.lex_state = 15, .external_lex_state = 8},
  [111] = {.lex_state = 15, .external_lex_state = 2},
  [112] = {.lex_state = 15, .external_lex_state = 9},
  [113] = {.lex_state = 15, .external_lex_state = 9},
  [114] = {.lex_state = 15, .external_lex_state = 9},
  [115] = {.lex_state = 303, .external_lex_state = 2},
  [116] = {.lex_state = 303, .external_lex_state = 2},
  [117] = {.lex_state = 303, .external_lex_state = 2},
  [118] = {.lex_state = 303, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 9},
  [120] = {.lex_state = 303, .external_lex_state = 2},
  [121] = {.lex_state = 303, .external_lex_state = 2},
  [122] = {.lex_state = 303, .external_lex_state = 2},
  [123] = {.lex_state = 303, .external_lex_state = 2},
  [124] = {.lex_state = 303, .external_lex_state = 2},
  [125] = {.lex_state = 303, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 9},
  [127] = {.lex_state = 303, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 9},
  [129] = {.lex_state = 303, .external_lex_state = 2},
  [130] = {.lex_state = 303, .external_lex_state = 2},
  [131] = {.lex_state = 303, .external_lex_state = 2},
  [132] = {.lex_state = 303, .external_lex_state = 2},
  [133] = {.lex_state = 303, .external_lex_state = 2},
  [134] = {.lex_state = 303, .external_lex_state = 2},
  [135] = {.lex_state = 303, .external_lex_state = 2},
  [136] = {.lex_state = 303, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 9},
  [138] = {.lex_state = 0, .external_lex_state = 9},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 13},
  [141] = {.lex_state = 0, .external_lex_state = 9},
  [142] = {.lex_state = 0, .external_lex_state = 9},
  [143] = {.lex_state = 0, .external_lex_state = 9},
  [144] = {.lex_state = 18, .external_lex_state = 11},
  [145] = {.lex_state = 0, .external_lex_state = 9},
  [146] = {.lex_state = 0, .external_lex_state = 9},
  [147] = {.lex_state = 0, .external_lex_state = 9},
  [148] = {.lex_state = 0, .external_lex_state = 9},
  [149] = {.lex_state = 0, .external_lex_state = 9},
  [150] = {.lex_state = 0, .external_lex_state = 9},
  [151] = {.lex_state = 0, .external_lex_state = 9},
  [152] = {.lex_state = 0, .external_lex_state = 13},
  [153] = {.lex_state = 0, .external_lex_state = 9},
  [154] = {.lex_state = 0, .external_lex_state = 9},
  [155] = {.lex_state = 0, .external_lex_state = 13},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 13},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 13},
  [160] = {.lex_state = 0, .external_lex_state = 13},
  [161] = {.lex_state = 0, .external_lex_state = 13},
  [162] = {.lex_state = 0, .external_lex_state = 13},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 16, .external_lex_state = 14},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 13},
  [167] = {.lex_state = 0, .external_lex_state = 13},
  [168] = {.lex_state = 16, .external_lex_state = 14},
  [169] = {.lex_state = 0, .external_lex_state = 13},
  [170] = {.lex_state = 0, .external_lex_state = 13},
  [171] = {.lex_state = 16, .external_lex_state = 14},
  [172] = {.lex_state = 16, .external_lex_state = 14},
  [173] = {.lex_state = 0, .external_lex_state = 13},
  [174] = {.lex_state = 16, .external_lex_state = 14},
  [175] = {.lex_state = 0, .external_lex_state = 13},
  [176] = {.lex_state = 16, .external_lex_state = 14},
  [177] = {.lex_state = 16, .external_lex_state = 14},
  [178] = {.lex_state = 16, .external_lex_state = 14},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 16, .external_lex_state = 14},
  [181] = {.lex_state = 0, .external_lex_state = 9},
  [182] = {.lex_state = 16, .external_lex_state = 14},
  [183] = {.lex_state = 16, .external_lex_state = 14},
  [184] = {.lex_state = 0, .external_lex_state = 13},
  [185] = {.lex_state = 0, .external_lex_state = 13},
  [186] = {.lex_state = 0, .external_lex_state = 13},
  [187] = {.lex_state = 0, .external_lex_state = 9},
  [188] = {.lex_state = 16, .external_lex_state = 14},
  [189] = {.lex_state = 16, .external_lex_state = 14},
  [190] = {.lex_state = 0, .external_lex_state = 13},
  [191] = {.lex_state = 0, .external_lex_state = 9},
  [192] = {.lex_state = 16, .external_lex_state = 14},
  [193] = {.lex_state = 0, .external_lex_state = 13},
  [194] = {.lex_state = 19, .external_lex_state = 10},
  [195] = {.lex_state = 302, .external_lex_state = 7},
  [196] = {.lex_state = 302, .external_lex_state = 7},
  [197] = {.lex_state = 19, .external_lex_state = 10},
  [198] = {.lex_state = 19, .external_lex_state = 10},
  [199] = {.lex_state = 19, .external_lex_state = 10},
  [200] = {.lex_state = 19, .external_lex_state = 10},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 19, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 8},
  [206] = {.lex_state = 0, .external_lex_state = 9},
  [207] = {.lex_state = 16, .external_lex_state = 14},
  [208] = {.lex_state = 16, .external_lex_state = 14},
  [209] = {.lex_state = 0, .external_lex_state = 9},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 9},
  [213] = {.lex_state = 16, .external_lex_state = 14},
  [214] = {.lex_state = 0, .external_lex_state = 8},
  [215] = {.lex_state = 0, .external_lex_state = 8},
  [216] = {.lex_state = 0, .external_lex_state = 9},
  [217] = {.lex_state = 0, .external_lex_state = 8},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 9},
  [220] = {.lex_state = 0, .external_lex_state = 9},
  [221] = {.lex_state = 0, .external_lex_state = 9},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 9},
  [224] = {.lex_state = 16, .external_lex_state = 13},
  [225] = {.lex_state = 0, .external_lex_state = 9},
  [226] = {.lex_state = 0, .external_lex_state = 8},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 16, .external_lex_state = 13},
  [230] = {.lex_state = 16, .external_lex_state = 13},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 20, .external_lex_state = 2},
  [233] = {.lex_state = 16, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 8},
  [235] = {.lex_state = 20, .external_lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 9},
  [238] = {.lex_state = 0, .external_lex_state = 8},
  [239] = {.lex_state = 20, .external_lex_state = 2},
  [240] = {.lex_state = 20, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 8},
  [242] = {.lex_state = 0, .external_lex_state = 9},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 16, .external_lex_state = 13},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0, .external_lex_state = 9},
  [248] = {.lex_state = 16, .external_lex_state = 14},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 20, .external_lex_state = 2},
  [251] = {.lex_state = 16, .external_lex_state = 2},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 0, .external_lex_state = 13},
  [254] = {.lex_state = 626, .external_lex_state = 2},
  [255] = {.lex_state = 20, .external_lex_state = 2},
  [256] = {.lex_state = 0, .external_lex_state = 13},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 16, .external_lex_state = 2},
  [260] = {.lex_state = 0, .external_lex_state = 15},
  [261] = {.lex_state = 16, .external_lex_state = 2},
  [262] = {.lex_state = 0, .external_lex_state = 2},
  [263] = {.lex_state = 0, .external_lex_state = 2},
  [264] = {.lex_state = 0, .external_lex_state = 2},
  [265] = {.lex_state = 0, .external_lex_state = 2},
  [266] = {.lex_state = 626, .external_lex_state = 2},
  [267] = {.lex_state = 302, .external_lex_state = 14},
  [268] = {.lex_state = 0, .external_lex_state = 2},
  [269] = {.lex_state = 0, .external_lex_state = 8},
  [270] = {.lex_state = 0, .external_lex_state = 9},
  [271] = {.lex_state = 20, .external_lex_state = 2},
  [272] = {.lex_state = 0, .external_lex_state = 13},
  [273] = {.lex_state = 0, .external_lex_state = 2},
  [274] = {.lex_state = 20, .external_lex_state = 2},
  [275] = {.lex_state = 20, .external_lex_state = 2},
  [276] = {.lex_state = 0, .external_lex_state = 9},
  [277] = {.lex_state = 0, .external_lex_state = 9},
  [278] = {.lex_state = 302, .external_lex_state = 14},
  [279] = {.lex_state = 0, .external_lex_state = 9},
  [280] = {.lex_state = 0, .external_lex_state = 9},
  [281] = {.lex_state = 0, .external_lex_state = 2},
  [282] = {.lex_state = 411, .external_lex_state = 2},
  [283] = {.lex_state = 0, .external_lex_state = 2},
  [284] = {.lex_state = 411, .external_lex_state = 2},
  [285] = {.lex_state = 302, .external_lex_state = 14},
  [286] = {.lex_state = 0, .external_lex_state = 2},
  [287] = {.lex_state = 0, .external_lex_state = 8},
  [288] = {.lex_state = 0, .external_lex_state = 9},
  [289] = {.lex_state = 302, .external_lex_state = 14},
  [290] = {.lex_state = 302, .external_lex_state = 14},
  [291] = {.lex_state = 0, .external_lex_state = 2},
  [292] = {.lex_state = 20, .external_lex_state = 2},
  [293] = {.lex_state = 0, .external_lex_state = 2},
  [294] = {.lex_state = 0, .external_lex_state = 13},
  [295] = {.lex_state = 0, .external_lex_state = 2},
  [296] = {.lex_state = 0, .external_lex_state = 9},
  [297] = {.lex_state = 0, .external_lex_state = 9},
  [298] = {.lex_state = 0, .external_lex_state = 9},
  [299] = {.lex_state = 0, .external_lex_state = 2},
  [300] = {.lex_state = 0, .external_lex_state = 2},
  [301] = {.lex_state = 16, .external_lex_state = 2},
  [302] = {.lex_state = 16, .external_lex_state = 2},
  [303] = {.lex_state = 16, .external_lex_state = 2},
  [304] = {.lex_state = 0, .external_lex_state = 2},
  [305] = {.lex_state = 0, .external_lex_state = 13},
  [306] = {.lex_state = 0, .external_lex_state = 2},
  [307] = {.lex_state = 0, .external_lex_state = 9},
  [308] = {.lex_state = 0, .external_lex_state = 2},
  [309] = {.lex_state = 0, .external_lex_state = 2},
  [310] = {.lex_state = 0, .external_lex_state = 2},
  [311] = {.lex_state = 16, .external_lex_state = 2},
  [312] = {.lex_state = 0, .external_lex_state = 2},
  [313] = {.lex_state = 0, .external_lex_state = 2},
  [314] = {.lex_state = 411, .external_lex_state = 2},
  [315] = {.lex_state = 411, .external_lex_state = 2},
  [316] = {.lex_state = 0, .external_lex_state = 2},
  [317] = {.lex_state = 0, .external_lex_state = 9},
  [318] = {.lex_state = 0, .external_lex_state = 9},
  [319] = {.lex_state = 0, .external_lex_state = 8},
  [320] = {.lex_state = 0, .external_lex_state = 2},
  [321] = {.lex_state = 16, .external_lex_state = 2},
  [322] = {.lex_state = 0, .external_lex_state = 2},
  [323] = {.lex_state = 411, .external_lex_state = 2},
  [324] = {.lex_state = 411, .external_lex_state = 2},
  [325] = {.lex_state = 0, .external_lex_state = 2},
  [326] = {.lex_state = 0, .external_lex_state = 2},
  [327] = {.lex_state = 0, .external_lex_state = 2},
  [328] = {.lex_state = 0, .external_lex_state = 2},
  [329] = {.lex_state = 0, .external_lex_state = 2},
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
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
  },
  [7] = {
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACK] = true,
  },
  [9] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
  },
  [10] = {
    [ts_external_token__dedent] = true,
    [ts_external_token_comment] = true,
  },
  [11] = {
    [ts_external_token__string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACE] = true,
  },
  [12] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token_comment] = true,
  },
  [13] = {
    [ts_external_token__newline] = true,
    [ts_external_token_comment] = true,
  },
  [14] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACE] = true,
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
    [anon_sym_os] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_app] = ACTIONS(1),
    [anon_sym_app_DOTname] = ACTIONS(1),
    [anon_sym_app_DOTexe] = ACTIONS(1),
    [anon_sym_app_DOTbundle] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_code_DOTlanguage] = ACTIONS(1),
    [anon_sym_language] = ACTIONS(1),
    [anon_sym_speech_DOTengine] = ACTIONS(1),
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_user] = ACTIONS(1),
    [anon_sym_linux] = ACTIONS(1),
    [anon_sym_mac] = ACTIONS(1),
    [anon_sym_windows] = ACTIONS(1),
    [anon_sym_dragon] = ACTIONS(1),
    [anon_sym_wav2letter] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_command] = ACTIONS(1),
    [anon_sym_dictation] = ACTIONS(1),
    [anon_sym_phrase] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_number_small] = ACTIONS(1),
    [anon_sym_insert] = ACTIONS(1),
    [anon_sym_mouse_click] = ACTIONS(1),
    [anon_sym_mouse_drag] = ACTIONS(1),
    [anon_sym_mouse_move] = ACTIONS(1),
    [anon_sym_mouse_release] = ACTIONS(1),
    [anon_sym_mouse_scroll] = ACTIONS(1),
    [anon_sym_mouse_x] = ACTIONS(1),
    [anon_sym_mouse_y] = ACTIONS(1),
    [anon_sym_skip] = ACTIONS(1),
    [anon_sym_auto_format] = ACTIONS(1),
    [anon_sym_auto_insert] = ACTIONS(1),
    [anon_sym_mimic] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_speech] = ACTIONS(1),
    [anon_sym_code] = ACTIONS(1),
    [anon_sym_edit] = ACTIONS(1),
    [anon_sym_browser] = ACTIONS(1),
    [anon_sym_clip] = ACTIONS(1),
    [anon_sym_core] = ACTIONS(1),
    [anon_sym_dictate] = ACTIONS(1),
    [anon_sym_migrate] = ACTIONS(1),
    [anon_sym_path] = ACTIONS(1),
    [anon_sym_sound] = ACTIONS(1),
    [anon_sym_win] = ACTIONS(1),
    [anon_sym_experimental] = ACTIONS(1),
    [anon_sym_menu] = ACTIONS(1),
    [anon_sym_key_wait] = ACTIONS(1),
    [anon_sym_imgui] = ACTIONS(1),
    [anon_sym_terminal] = ACTIONS(1),
    [anon_sym_debugger] = ACTIONS(1),
    [anon_sym_main] = ACTIONS(1),
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
    [sym_source_file] = STATE(300),
    [sym_context] = STATE(44),
    [sym__optional_or] = STATE(299),
    [sym_or] = STATE(299),
    [sym__optional_and] = STATE(35),
    [sym_and] = STATE(35),
    [sym__optional_not] = STATE(50),
    [sym_not] = STATE(50),
    [sym_match] = STATE(50),
    [sym_include_tag] = STATE(40),
    [sym_settings] = STATE(40),
    [sym_command] = STATE(40),
    [sym_rule] = STATE(295),
    [sym__optional_choice] = STATE(293),
    [sym_choice] = STATE(293),
    [sym__optional_anchor] = STATE(211),
    [sym__optional_seq] = STATE(210),
    [sym_seq] = STATE(210),
    [sym__primary_rule] = STATE(61),
    [sym_list] = STATE(61),
    [sym_capture] = STATE(61),
    [sym_optional] = STATE(61),
    [sym_repeat] = STATE(61),
    [sym_repeat1] = STATE(61),
    [sym_parenthesized_rule] = STATE(61),
    [sym__user_identifier] = STATE(283),
    [sym_scope_identifier] = STATE(281),
    [sym__builtin_scope_identifier] = STATE(283),
    [sym__builtin_scope_namespace] = STATE(251),
    [aux_sym_source_file_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(9),
    [anon_sym_os] = ACTIONS(11),
    [anon_sym_tag] = ACTIONS(13),
    [anon_sym_mode] = ACTIONS(15),
    [anon_sym_app] = ACTIONS(17),
    [anon_sym_app_DOTname] = ACTIONS(19),
    [anon_sym_app_DOTexe] = ACTIONS(19),
    [anon_sym_app_DOTbundle] = ACTIONS(19),
    [anon_sym_title] = ACTIONS(21),
    [anon_sym_code_DOTlanguage] = ACTIONS(23),
    [anon_sym_language] = ACTIONS(25),
    [anon_sym_speech_DOTengine] = ACTIONS(27),
    [anon_sym_tag_LPAREN_RPAREN] = ACTIONS(29),
    [anon_sym_settings_LPAREN_RPAREN] = ACTIONS(31),
    [sym_start_anchor] = ACTIONS(33),
    [sym_word] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_user] = ACTIONS(45),
    [anon_sym_speech] = ACTIONS(47),
    [anon_sym_code] = ACTIONS(47),
    [anon_sym_browser] = ACTIONS(47),
    [anon_sym_win] = ACTIONS(47),
    [anon_sym_main] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_key,
    ACTIONS(59), 1,
      anon_sym_sleep,
    ACTIONS(65), 1,
      sym__string_start,
    STATE(236), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(67), 2,
      sym__string_content,
      sym__string_end,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    ACTIONS(61), 3,
      sym_identifier,
      sym_integer,
      sym_float,
    ACTIONS(53), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(192), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [87] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_key,
    ACTIONS(73), 1,
      anon_sym_sleep,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      sym_integer,
    ACTIONS(79), 1,
      sym_float,
    ACTIONS(81), 1,
      sym__dedent,
    ACTIONS(83), 1,
      sym__string_start,
    STATE(129), 1,
      sym_command_block,
    STATE(246), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    STATE(4), 2,
      sym__statement,
      aux_sym_command_block_repeat1,
    STATE(31), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(193), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [180] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_key,
    ACTIONS(73), 1,
      anon_sym_sleep,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      sym_integer,
    ACTIONS(79), 1,
      sym_float,
    ACTIONS(83), 1,
      sym__string_start,
    ACTIONS(85), 1,
      sym__dedent,
    STATE(246), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    STATE(5), 2,
      sym__statement,
      aux_sym_command_block_repeat1,
    STATE(31), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(193), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [270] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_key,
    ACTIONS(96), 1,
      anon_sym_sleep,
    ACTIONS(99), 1,
      anon_sym_user,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(111), 1,
      sym_float,
    ACTIONS(114), 1,
      sym__dedent,
    ACTIONS(116), 1,
      sym__string_start,
    STATE(246), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    STATE(5), 2,
      sym__statement,
      aux_sym_command_block_repeat1,
    STATE(31), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(193), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(105), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(87), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [360] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_key,
    ACTIONS(73), 1,
      anon_sym_sleep,
    ACTIONS(83), 1,
      sym__string_start,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym_integer,
    ACTIONS(123), 1,
      sym_float,
    ACTIONS(125), 1,
      sym__newline,
    STATE(116), 1,
      sym__statement,
    STATE(246), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    STATE(131), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(185), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [449] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 1,
      anon_sym_key,
    ACTIONS(133), 1,
      anon_sym_sleep,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      sym_float,
    ACTIONS(141), 1,
      sym__string_start,
    STATE(249), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(137), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(126), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [532] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_key,
    ACTIONS(133), 1,
      anon_sym_sleep,
    ACTIONS(141), 1,
      sym__string_start,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      sym_float,
    STATE(249), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(147), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(128), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [615] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_key,
    ACTIONS(133), 1,
      anon_sym_sleep,
    ACTIONS(141), 1,
      sym__string_start,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      sym_float,
    STATE(249), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(155), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(119), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [698] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_key,
    ACTIONS(133), 1,
      anon_sym_sleep,
    ACTIONS(141), 1,
      sym__string_start,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 1,
      sym_float,
    STATE(249), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(161), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(148), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [778] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_key,
    ACTIONS(133), 1,
      anon_sym_sleep,
    ACTIONS(141), 1,
      sym__string_start,
    ACTIONS(163), 1,
      sym_float,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(161), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(148), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [858] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_key,
    ACTIONS(133), 1,
      anon_sym_sleep,
    ACTIONS(141), 1,
      sym__string_start,
    ACTIONS(163), 1,
      sym_float,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(161), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(148), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [938] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_key,
    ACTIONS(133), 1,
      anon_sym_sleep,
    ACTIONS(141), 1,
      sym__string_start,
    ACTIONS(163), 1,
      sym_float,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(161), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(148), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [1018] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_key,
    ACTIONS(133), 1,
      anon_sym_sleep,
    ACTIONS(141), 1,
      sym__string_start,
    ACTIONS(163), 1,
      sym_float,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(161), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(148), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [1098] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_key,
    ACTIONS(133), 1,
      anon_sym_sleep,
    ACTIONS(141), 1,
      sym__string_start,
    ACTIONS(163), 1,
      sym_float,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(161), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(148), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [1178] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(57), 1,
      anon_sym_key,
    ACTIONS(59), 1,
      anon_sym_sleep,
    ACTIONS(65), 1,
      sym__string_start,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      sym_float,
    STATE(236), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(177), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(174), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [1255] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_key,
    ACTIONS(73), 1,
      anon_sym_sleep,
    ACTIONS(83), 1,
      sym__string_start,
    ACTIONS(183), 1,
      sym_float,
    STATE(246), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(181), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(186), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [1332] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(57), 1,
      anon_sym_key,
    ACTIONS(59), 1,
      anon_sym_sleep,
    ACTIONS(65), 1,
      sym__string_start,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      sym_float,
    STATE(236), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(185), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(171), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [1409] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_key,
    ACTIONS(133), 1,
      anon_sym_sleep,
    ACTIONS(141), 1,
      sym__string_start,
    ACTIONS(191), 1,
      sym_float,
    STATE(249), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(189), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(187), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [1486] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_key,
    ACTIONS(133), 1,
      anon_sym_sleep,
    ACTIONS(141), 1,
      sym__string_start,
    ACTIONS(195), 1,
      sym_float,
    STATE(249), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(193), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(146), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [1563] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_key,
    ACTIONS(133), 1,
      anon_sym_sleep,
    ACTIONS(141), 1,
      sym__string_start,
    ACTIONS(163), 1,
      sym_float,
    STATE(249), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(161), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(148), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [1640] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_key,
    ACTIONS(133), 1,
      anon_sym_sleep,
    ACTIONS(141), 1,
      sym__string_start,
    ACTIONS(199), 1,
      sym_float,
    STATE(249), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(197), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(143), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [1717] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_key,
    ACTIONS(133), 1,
      anon_sym_sleep,
    ACTIONS(141), 1,
      sym__string_start,
    ACTIONS(203), 1,
      sym_float,
    STATE(249), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(201), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(137), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [1794] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_key,
    ACTIONS(73), 1,
      anon_sym_sleep,
    ACTIONS(83), 1,
      sym__string_start,
    ACTIONS(207), 1,
      sym_float,
    STATE(246), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(205), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(167), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [1871] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(57), 1,
      anon_sym_key,
    ACTIONS(59), 1,
      anon_sym_sleep,
    ACTIONS(65), 1,
      sym__string_start,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      sym_float,
    STATE(236), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(209), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(172), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [1948] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_key,
    ACTIONS(73), 1,
      anon_sym_sleep,
    ACTIONS(83), 1,
      sym__string_start,
    ACTIONS(215), 1,
      sym_float,
    STATE(246), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(213), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(170), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [2025] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_key,
    ACTIONS(73), 1,
      anon_sym_sleep,
    ACTIONS(83), 1,
      sym__string_start,
    ACTIONS(219), 1,
      sym_float,
    STATE(246), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(217), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(173), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [2102] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_key,
    ACTIONS(133), 1,
      anon_sym_sleep,
    ACTIONS(141), 1,
      sym__string_start,
    ACTIONS(223), 1,
      sym_float,
    STATE(249), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(221), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(191), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [2179] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_key,
    ACTIONS(133), 1,
      anon_sym_sleep,
    ACTIONS(141), 1,
      sym__string_start,
    ACTIONS(227), 1,
      sym_float,
    STATE(249), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(225), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(181), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [2256] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_user,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_key,
    ACTIONS(73), 1,
      anon_sym_sleep,
    ACTIONS(83), 1,
      sym__string_start,
    ACTIONS(231), 1,
      sym_float,
    STATE(246), 1,
      sym_action_identifier,
    STATE(301), 1,
      sym__builtin_action_namespace,
    ACTIONS(229), 2,
      sym_identifier,
      sym_integer,
    STATE(265), 2,
      sym__user_identifier,
      sym__builtin_action_identifier,
    STATE(166), 7,
      sym__expression,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
    ACTIONS(63), 13,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
    ACTIONS(51), 15,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
  [2333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 4,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(233), 33,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_key,
      anon_sym_sleep,
      anon_sym_user,
      sym_identifier,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
      sym_integer,
  [2378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 4,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(237), 33,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_key,
      anon_sym_sleep,
      anon_sym_user,
      sym_identifier,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
      sym_integer,
  [2423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 4,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(241), 33,
      anon_sym_mode,
      anon_sym_app,
      anon_sym_key,
      anon_sym_sleep,
      anon_sym_user,
      sym_identifier,
      anon_sym_insert,
      anon_sym_mouse_click,
      anon_sym_mouse_drag,
      anon_sym_mouse_move,
      anon_sym_mouse_release,
      anon_sym_mouse_scroll,
      anon_sym_mouse_x,
      anon_sym_mouse_y,
      anon_sym_skip,
      anon_sym_auto_format,
      anon_sym_auto_insert,
      anon_sym_mimic,
      anon_sym_print,
      anon_sym_speech,
      anon_sym_code,
      anon_sym_edit,
      anon_sym_browser,
      anon_sym_clip,
      anon_sym_core,
      anon_sym_dictate,
      anon_sym_migrate,
      anon_sym_path,
      anon_sym_sound,
      anon_sym_win,
      anon_sym_experimental,
      anon_sym_menu,
      sym_integer,
  [2468] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_app,
    ACTIONS(27), 1,
      anon_sym_speech_DOTengine,
    ACTIONS(245), 1,
      anon_sym_DASH,
    ACTIONS(247), 1,
      anon_sym_not,
    ACTIONS(249), 1,
      anon_sym_os,
    ACTIONS(251), 1,
      anon_sym_tag,
    ACTIONS(253), 1,
      anon_sym_mode,
    ACTIONS(255), 1,
      anon_sym_user,
    STATE(251), 1,
      sym__builtin_scope_namespace,
    STATE(281), 1,
      sym_scope_identifier,
    ACTIONS(23), 2,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
    ACTIONS(47), 2,
      anon_sym_speech,
      anon_sym_code,
    STATE(283), 2,
      sym__user_identifier,
      sym__builtin_scope_identifier,
    ACTIONS(257), 3,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
    STATE(36), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(50), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(19), 4,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
  [2535] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_app,
    ACTIONS(27), 1,
      anon_sym_speech_DOTengine,
    ACTIONS(247), 1,
      anon_sym_not,
    ACTIONS(249), 1,
      anon_sym_os,
    ACTIONS(251), 1,
      anon_sym_tag,
    ACTIONS(253), 1,
      anon_sym_mode,
    ACTIONS(255), 1,
      anon_sym_user,
    ACTIONS(259), 1,
      anon_sym_DASH,
    STATE(251), 1,
      sym__builtin_scope_namespace,
    STATE(281), 1,
      sym_scope_identifier,
    ACTIONS(23), 2,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
    ACTIONS(47), 2,
      anon_sym_speech,
      anon_sym_code,
    STATE(283), 2,
      sym__user_identifier,
      sym__builtin_scope_identifier,
    ACTIONS(257), 3,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
    STATE(34), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(50), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(19), 4,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
  [2602] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(263), 1,
      anon_sym_not,
    ACTIONS(266), 1,
      anon_sym_os,
    ACTIONS(269), 1,
      anon_sym_tag,
    ACTIONS(272), 1,
      anon_sym_mode,
    ACTIONS(275), 1,
      anon_sym_app,
    ACTIONS(284), 1,
      anon_sym_speech_DOTengine,
    ACTIONS(287), 1,
      anon_sym_user,
    STATE(251), 1,
      sym__builtin_scope_namespace,
    STATE(281), 1,
      sym_scope_identifier,
    ACTIONS(281), 2,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
    ACTIONS(290), 2,
      anon_sym_speech,
      anon_sym_code,
    STATE(283), 2,
      sym__user_identifier,
      sym__builtin_scope_identifier,
    ACTIONS(293), 3,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
    STATE(36), 3,
      sym__optional_and,
      sym_and,
      aux_sym_or_repeat1,
    STATE(50), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(278), 4,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
  [2669] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_app,
    ACTIONS(27), 1,
      anon_sym_speech_DOTengine,
    ACTIONS(247), 1,
      anon_sym_not,
    ACTIONS(249), 1,
      anon_sym_os,
    ACTIONS(251), 1,
      anon_sym_tag,
    ACTIONS(253), 1,
      anon_sym_mode,
    ACTIONS(255), 1,
      anon_sym_user,
    STATE(251), 1,
      sym__builtin_scope_namespace,
    STATE(281), 1,
      sym_scope_identifier,
    ACTIONS(23), 2,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
    ACTIONS(47), 2,
      anon_sym_speech,
      anon_sym_code,
    STATE(57), 2,
      sym__optional_and,
      sym_and,
    STATE(283), 2,
      sym__user_identifier,
      sym__builtin_scope_identifier,
    ACTIONS(257), 3,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
    STATE(50), 3,
      sym__optional_not,
      sym_not,
      sym_match,
    ACTIONS(19), 4,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
  [2732] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_DOT,
    STATE(38), 1,
      aux_sym__qualified_identifier_repeat1,
    ACTIONS(298), 3,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
    ACTIONS(296), 21,
      anon_sym_DASH,
      anon_sym_and,
      anon_sym_not,
      anon_sym_os,
      anon_sym_COLON,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      anon_sym_speech_DOTengine,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_user,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
  [2770] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_tag_LPAREN_RPAREN,
    ACTIONS(31), 1,
      anon_sym_settings_LPAREN_RPAREN,
    ACTIONS(33), 1,
      sym_start_anchor,
    ACTIONS(35), 1,
      sym_word,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    STATE(211), 1,
      sym__optional_anchor,
    STATE(295), 1,
      sym_rule,
    STATE(210), 2,
      sym__optional_seq,
      sym_seq,
    STATE(293), 2,
      sym__optional_choice,
      sym_choice,
    STATE(42), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(61), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2830] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_tag_LPAREN_RPAREN,
    ACTIONS(31), 1,
      anon_sym_settings_LPAREN_RPAREN,
    ACTIONS(33), 1,
      sym_start_anchor,
    ACTIONS(35), 1,
      sym_word,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    STATE(211), 1,
      sym__optional_anchor,
    STATE(295), 1,
      sym_rule,
    STATE(210), 2,
      sym__optional_seq,
      sym_seq,
    STATE(293), 2,
      sym__optional_choice,
      sym_choice,
    STATE(42), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(61), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym__qualified_identifier_repeat1,
    ACTIONS(309), 3,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
    ACTIONS(307), 21,
      anon_sym_DASH,
      anon_sym_and,
      anon_sym_not,
      anon_sym_os,
      anon_sym_COLON,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      anon_sym_speech_DOTengine,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_user,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
  [2928] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 1,
      anon_sym_tag_LPAREN_RPAREN,
    ACTIONS(318), 1,
      anon_sym_settings_LPAREN_RPAREN,
    ACTIONS(321), 1,
      sym_start_anchor,
    ACTIONS(324), 1,
      sym_word,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_LT,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    STATE(211), 1,
      sym__optional_anchor,
    STATE(295), 1,
      sym_rule,
    STATE(210), 2,
      sym__optional_seq,
      sym_seq,
    STATE(293), 2,
      sym__optional_choice,
      sym_choice,
    STATE(42), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(61), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2988] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_DOT,
    STATE(38), 1,
      aux_sym__qualified_identifier_repeat1,
    ACTIONS(341), 3,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
    ACTIONS(339), 21,
      anon_sym_DASH,
      anon_sym_and,
      anon_sym_not,
      anon_sym_os,
      anon_sym_COLON,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      anon_sym_speech_DOTengine,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_user,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
  [3026] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_tag_LPAREN_RPAREN,
    ACTIONS(31), 1,
      anon_sym_settings_LPAREN_RPAREN,
    ACTIONS(33), 1,
      sym_start_anchor,
    ACTIONS(35), 1,
      sym_word,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    STATE(211), 1,
      sym__optional_anchor,
    STATE(295), 1,
      sym_rule,
    STATE(210), 2,
      sym__optional_seq,
      sym_seq,
    STATE(293), 2,
      sym__optional_choice,
      sym_choice,
    STATE(39), 4,
      sym_include_tag,
      sym_settings,
      sym_command,
      aux_sym_source_file_repeat1,
    STATE(61), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [3086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 3,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
    ACTIONS(296), 22,
      anon_sym_DASH,
      anon_sym_and,
      anon_sym_not,
      anon_sym_os,
      anon_sym_COLON,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      anon_sym_speech_DOTengine,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_user,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
  [3119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 3,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
    ACTIONS(343), 21,
      anon_sym_DASH,
      anon_sym_and,
      anon_sym_not,
      anon_sym_os,
      anon_sym_COLON,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      anon_sym_speech_DOTengine,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_user,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
  [3151] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_app,
    ACTIONS(27), 1,
      anon_sym_speech_DOTengine,
    ACTIONS(249), 1,
      anon_sym_os,
    ACTIONS(251), 1,
      anon_sym_tag,
    ACTIONS(253), 1,
      anon_sym_mode,
    ACTIONS(255), 1,
      anon_sym_user,
    STATE(55), 1,
      sym_match,
    STATE(251), 1,
      sym__builtin_scope_namespace,
    STATE(281), 1,
      sym_scope_identifier,
    ACTIONS(23), 2,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
    ACTIONS(47), 2,
      anon_sym_speech,
      anon_sym_code,
    STATE(283), 2,
      sym__user_identifier,
      sym__builtin_scope_identifier,
    ACTIONS(257), 3,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
    ACTIONS(19), 4,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
  [3205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
    ACTIONS(347), 17,
      anon_sym_DASH,
      anon_sym_and,
      anon_sym_not,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      anon_sym_speech_DOTengine,
      anon_sym_user,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
  [3233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
    ACTIONS(347), 17,
      anon_sym_DASH,
      anon_sym_and,
      anon_sym_not,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      anon_sym_speech_DOTengine,
      anon_sym_user,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
  [3261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_and,
    ACTIONS(355), 3,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
    ACTIONS(351), 16,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      anon_sym_speech_DOTengine,
      anon_sym_user,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
  [3291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 3,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
    ACTIONS(357), 17,
      anon_sym_DASH,
      anon_sym_and,
      anon_sym_not,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      anon_sym_speech_DOTengine,
      anon_sym_user,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
  [3319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 3,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
    ACTIONS(361), 17,
      anon_sym_DASH,
      anon_sym_and,
      anon_sym_not,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      anon_sym_speech_DOTengine,
      anon_sym_user,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
  [3347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 3,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
    ACTIONS(365), 17,
      anon_sym_DASH,
      anon_sym_and,
      anon_sym_not,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      anon_sym_speech_DOTengine,
      anon_sym_user,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
  [3375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 3,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
    ACTIONS(369), 17,
      anon_sym_DASH,
      anon_sym_and,
      anon_sym_not,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      anon_sym_speech_DOTengine,
      anon_sym_user,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
  [3403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 3,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
    ACTIONS(373), 17,
      anon_sym_DASH,
      anon_sym_and,
      anon_sym_not,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      anon_sym_speech_DOTengine,
      anon_sym_user,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
  [3431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 3,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
    ACTIONS(377), 17,
      anon_sym_DASH,
      anon_sym_and,
      anon_sym_not,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      anon_sym_speech_DOTengine,
      anon_sym_user,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
  [3459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 3,
      anon_sym_app,
      anon_sym_speech,
      anon_sym_code,
    ACTIONS(381), 16,
      anon_sym_DASH,
      anon_sym_not,
      anon_sym_os,
      anon_sym_tag,
      anon_sym_mode,
      anon_sym_app_DOTname,
      anon_sym_app_DOTexe,
      anon_sym_app_DOTbundle,
      anon_sym_title,
      anon_sym_code_DOTlanguage,
      anon_sym_language,
      anon_sym_speech_DOTengine,
      anon_sym_user,
      anon_sym_browser,
      anon_sym_win,
      anon_sym_main,
  [3486] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_start_anchor,
    ACTIONS(387), 1,
      sym_word,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(391), 1,
      anon_sym_LT,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym__optional_anchor,
    STATE(205), 2,
      sym__optional_seq,
      sym_seq,
    STATE(287), 2,
      sym__optional_choice,
      sym_choice,
    STATE(63), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [3528] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_start_anchor,
    ACTIONS(399), 1,
      sym_word,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    ACTIONS(403), 1,
      anon_sym_LT,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym__optional_anchor,
    STATE(219), 2,
      sym__optional_seq,
      sym_seq,
    STATE(288), 2,
      sym__optional_choice,
      sym_choice,
    STATE(66), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [3570] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_start_anchor,
    ACTIONS(399), 1,
      sym_word,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    ACTIONS(403), 1,
      anon_sym_LT,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym__optional_anchor,
    STATE(219), 2,
      sym__optional_seq,
      sym_seq,
    STATE(270), 2,
      sym__optional_choice,
      sym_choice,
    STATE(66), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [3612] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      sym_word,
    ACTIONS(413), 1,
      anon_sym_STAR,
    ACTIONS(415), 1,
      anon_sym_PLUS,
    STATE(67), 1,
      aux_sym_seq_repeat1,
    ACTIONS(409), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(104), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [3654] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_start_anchor,
    ACTIONS(387), 1,
      sym_word,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(391), 1,
      anon_sym_LT,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym__optional_anchor,
    STATE(205), 2,
      sym__optional_seq,
      sym_seq,
    STATE(269), 2,
      sym__optional_choice,
      sym_choice,
    STATE(63), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [3696] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(391), 1,
      anon_sym_LT,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    ACTIONS(417), 1,
      sym_word,
    ACTIONS(419), 1,
      anon_sym_STAR,
    ACTIONS(421), 1,
      anon_sym_PLUS,
    STATE(75), 1,
      aux_sym_seq_repeat1,
    ACTIONS(409), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(98), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [3738] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_start_anchor,
    ACTIONS(399), 1,
      sym_word,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    ACTIONS(403), 1,
      anon_sym_LT,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym__optional_anchor,
    STATE(219), 2,
      sym__optional_seq,
      sym_seq,
    STATE(280), 2,
      sym__optional_choice,
      sym_choice,
    STATE(66), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [3780] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_start_anchor,
    ACTIONS(387), 1,
      sym_word,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(391), 1,
      anon_sym_LT,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym__optional_anchor,
    STATE(205), 2,
      sym__optional_seq,
      sym_seq,
    STATE(319), 2,
      sym__optional_choice,
      sym_choice,
    STATE(63), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [3822] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    ACTIONS(403), 1,
      anon_sym_LT,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(423), 1,
      sym_word,
    ACTIONS(425), 1,
      anon_sym_STAR,
    ACTIONS(427), 1,
      anon_sym_PLUS,
    STATE(74), 1,
      aux_sym_seq_repeat1,
    ACTIONS(409), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(114), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [3864] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      sym_word,
    STATE(70), 1,
      aux_sym_seq_repeat1,
    ACTIONS(429), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(104), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [3900] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_start_anchor,
    ACTIONS(399), 1,
      sym_word,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    ACTIONS(403), 1,
      anon_sym_LT,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    STATE(237), 1,
      sym__optional_anchor,
    STATE(219), 2,
      sym__optional_seq,
      sym_seq,
    STATE(66), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [3938] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym_word,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    ACTIONS(439), 1,
      anon_sym_LT,
    ACTIONS(442), 1,
      anon_sym_LBRACK,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      aux_sym_seq_repeat1,
    ACTIONS(431), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(114), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [3974] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym_word,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    ACTIONS(454), 1,
      anon_sym_LT,
    ACTIONS(457), 1,
      anon_sym_LBRACK,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      aux_sym_seq_repeat1,
    ACTIONS(431), 3,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
    STATE(104), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [4010] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_start_anchor,
    ACTIONS(387), 1,
      sym_word,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(391), 1,
      anon_sym_LT,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    STATE(241), 1,
      sym__optional_anchor,
    STATE(205), 2,
      sym__optional_seq,
      sym_seq,
    STATE(63), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [4048] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_start_anchor,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      sym_word,
    STATE(231), 1,
      sym__optional_anchor,
    STATE(210), 2,
      sym__optional_seq,
      sym_seq,
    STATE(61), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [4086] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_word,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    ACTIONS(471), 1,
      anon_sym_LT,
    ACTIONS(474), 1,
      anon_sym_LBRACK,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      aux_sym_seq_repeat1,
    ACTIONS(431), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(98), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [4122] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    ACTIONS(403), 1,
      anon_sym_LT,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(423), 1,
      sym_word,
    STATE(69), 1,
      aux_sym_seq_repeat1,
    ACTIONS(429), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RPAREN,
    STATE(114), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [4158] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(391), 1,
      anon_sym_LT,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    ACTIONS(417), 1,
      sym_word,
    STATE(73), 1,
      aux_sym_seq_repeat1,
    ACTIONS(429), 3,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
    STATE(98), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [4194] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_word,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(391), 1,
      anon_sym_LT,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    STATE(215), 2,
      sym__optional_seq,
      sym_seq,
    STATE(63), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [4226] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      sym_word,
    STATE(228), 2,
      sym__optional_seq,
      sym_seq,
    STATE(61), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [4258] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_word,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
    ACTIONS(403), 1,
      anon_sym_LT,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    STATE(221), 2,
      sym__optional_seq,
      sym_seq,
    STATE(66), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [4290] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_user,
    ACTIONS(482), 1,
      anon_sym_key_wait,
    ACTIONS(484), 1,
      sym__dedent,
    STATE(117), 1,
      sym_settings_block,
    STATE(259), 1,
      sym__builtin_setting_namespace,
    STATE(312), 1,
      sym_setting_identifier,
    STATE(82), 2,
      sym_settings_statement,
      aux_sym_settings_block_repeat1,
    STATE(257), 2,
      sym__user_identifier,
      sym__builtin_setting_identifier,
    ACTIONS(480), 3,
      anon_sym_speech,
      anon_sym_dictate,
      anon_sym_imgui,
  [4325] = 6,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(490), 1,
      sym__string_content,
    ACTIONS(492), 1,
      sym__string_end,
    STATE(85), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(488), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [4351] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_user,
    ACTIONS(500), 1,
      anon_sym_key_wait,
    ACTIONS(503), 1,
      sym__dedent,
    STATE(259), 1,
      sym__builtin_setting_namespace,
    STATE(312), 1,
      sym_setting_identifier,
    STATE(81), 2,
      sym_settings_statement,
      aux_sym_settings_block_repeat1,
    STATE(257), 2,
      sym__user_identifier,
      sym__builtin_setting_identifier,
    ACTIONS(497), 3,
      anon_sym_speech,
      anon_sym_dictate,
      anon_sym_imgui,
  [4383] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_user,
    ACTIONS(482), 1,
      anon_sym_key_wait,
    ACTIONS(505), 1,
      sym__dedent,
    STATE(259), 1,
      sym__builtin_setting_namespace,
    STATE(312), 1,
      sym_setting_identifier,
    STATE(81), 2,
      sym_settings_statement,
      aux_sym_settings_block_repeat1,
    STATE(257), 2,
      sym__user_identifier,
      sym__builtin_setting_identifier,
    ACTIONS(480), 3,
      anon_sym_speech,
      anon_sym_dictate,
      anon_sym_imgui,
  [4415] = 6,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      sym__string_content,
    ACTIONS(511), 1,
      sym__string_end,
    STATE(87), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(507), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [4441] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_user,
    ACTIONS(482), 1,
      anon_sym_key_wait,
    ACTIONS(513), 1,
      sym__newline,
    ACTIONS(515), 1,
      sym__indent,
    STATE(122), 1,
      sym_settings_statement,
    STATE(258), 1,
      sym_setting_identifier,
    STATE(259), 1,
      sym__builtin_setting_namespace,
    STATE(257), 2,
      sym__user_identifier,
      sym__builtin_setting_identifier,
    ACTIONS(480), 3,
      anon_sym_speech,
      anon_sym_dictate,
      anon_sym_imgui,
  [4475] = 6,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      sym__string_content,
    ACTIONS(517), 1,
      sym__string_end,
    STATE(87), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(507), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [4501] = 6,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      sym__string_content,
    ACTIONS(519), 1,
      sym__string_end,
    STATE(87), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(507), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [4527] = 6,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      sym__string_content,
    ACTIONS(530), 1,
      sym__string_end,
    STATE(87), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(524), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [4553] = 6,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(534), 1,
      sym__string_content,
    ACTIONS(536), 1,
      sym__string_end,
    STATE(86), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(532), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [4579] = 6,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      sym__string_content,
    ACTIONS(538), 1,
      sym__string_end,
    STATE(87), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(507), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [4605] = 6,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(542), 1,
      sym__string_content,
    ACTIONS(544), 1,
      sym__string_end,
    STATE(83), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(540), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [4631] = 6,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(548), 1,
      sym__string_content,
    ACTIONS(550), 1,
      sym__string_end,
    STATE(89), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(546), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [4657] = 6,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      sym__string_content,
    ACTIONS(552), 1,
      sym__string_end,
    STATE(87), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(507), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [4683] = 6,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(556), 1,
      sym__string_content,
    ACTIONS(558), 1,
      sym__string_end,
    STATE(92), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
    ACTIONS(554), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [4709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 10,
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
  [4725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 10,
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
  [4741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 10,
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
  [4757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 10,
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
  [4773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_STAR,
    ACTIONS(421), 1,
      anon_sym_PLUS,
    ACTIONS(566), 8,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
  [4793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 10,
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
  [4809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 10,
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
  [4825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 10,
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
  [4841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 10,
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
  [4857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 10,
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
  [4873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_STAR,
    ACTIONS(415), 1,
      anon_sym_PLUS,
    ACTIONS(566), 8,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [4893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 10,
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
  [4909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 10,
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
  [4925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 10,
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
  [4941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 10,
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
  [4957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 10,
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
  [4973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 10,
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
  [4989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 10,
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
  [5005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 10,
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
  [5021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 10,
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
  [5037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_STAR,
    ACTIONS(427), 1,
      anon_sym_PLUS,
    ACTIONS(566), 8,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_word,
    ACTIONS(574), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_word,
    ACTIONS(578), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym_word,
    ACTIONS(582), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym_word,
    ACTIONS(586), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5125] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    ACTIONS(596), 1,
      anon_sym_or,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(590), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(592), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym_word,
    ACTIONS(600), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_word,
    ACTIONS(243), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym_word,
    ACTIONS(604), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      sym_word,
    ACTIONS(608), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_word,
    ACTIONS(239), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym_word,
    ACTIONS(612), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5252] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_or,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(590), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(592), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym_word,
    ACTIONS(620), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5294] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_or,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(590), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(592), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym_word,
    ACTIONS(628), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym_word,
    ACTIONS(632), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_word,
    ACTIONS(235), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym_word,
    ACTIONS(636), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_word,
    ACTIONS(640), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym_word,
    ACTIONS(644), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym_word,
    ACTIONS(648), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym_word,
    ACTIONS(652), 8,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [5455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(656), 5,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [5471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [5485] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_user,
    STATE(49), 1,
      sym_mode_identifier,
    STATE(52), 2,
      sym__user_identifier,
      sym__builtin_mode_identifier,
    ACTIONS(660), 4,
      anon_sym_sleep,
      anon_sym_all,
      anon_sym_command,
      anon_sym_dictation,
  [5505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_EQ,
    ACTIONS(662), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [5521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [5535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [5549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [5563] = 3,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(670), 2,
      sym__string_content,
      sym__string_end,
    ACTIONS(668), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [5579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [5593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(592), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(656), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [5611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [5625] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_or,
    ACTIONS(590), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(676), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(592), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [5659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [5673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [5687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_EQ,
    ACTIONS(662), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [5703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [5717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [5731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [5744] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_user,
    STATE(49), 1,
      sym_tag_identifier,
    STATE(54), 2,
      sym__user_identifier,
      sym__builtin_tag_identifier,
    ACTIONS(688), 3,
      anon_sym_browser,
      anon_sym_terminal,
      anon_sym_debugger,
  [5763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [5776] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_user,
    ACTIONS(692), 1,
      anon_sym_number,
    STATE(286), 1,
      sym_capture_identifier,
    ACTIONS(690), 2,
      anon_sym_phrase,
      anon_sym_number_small,
    STATE(291), 2,
      sym__user_identifier,
      sym__builtin_capture_identifier,
  [5797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [5810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [5823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [5836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [5849] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_user,
    STATE(256), 1,
      sym_tag_identifier,
    STATE(294), 2,
      sym__user_identifier,
      sym__builtin_tag_identifier,
    ACTIONS(696), 3,
      anon_sym_browser,
      anon_sym_terminal,
      anon_sym_debugger,
  [5868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [5881] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_user,
    ACTIONS(692), 1,
      anon_sym_number,
    STATE(268), 1,
      sym_capture_identifier,
    ACTIONS(690), 2,
      anon_sym_phrase,
      anon_sym_number_small,
    STATE(291), 2,
      sym__user_identifier,
      sym__builtin_capture_identifier,
  [5902] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_or,
    ACTIONS(704), 1,
      sym__newline,
    ACTIONS(698), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(700), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(656), 4,
      sym__newline,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
  [5936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [5949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [5962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [5975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(656), 4,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_or,
  [5990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [6003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 2,
      sym__newline,
      anon_sym_or,
    ACTIONS(698), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(700), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_RBRACE,
      anon_sym_or,
    ACTIONS(708), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(706), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [6050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [6063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [6076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [6089] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_user,
    ACTIONS(692), 1,
      anon_sym_number,
    STATE(308), 1,
      sym_capture_identifier,
    ACTIONS(690), 2,
      anon_sym_phrase,
      anon_sym_number_small,
    STATE(291), 2,
      sym__user_identifier,
      sym__builtin_capture_identifier,
  [6110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [6123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_or,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    ACTIONS(590), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(592), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [6155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [6168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [6181] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_or,
    ACTIONS(712), 1,
      sym__newline,
    ACTIONS(698), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(700), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6200] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_or,
    ACTIONS(714), 1,
      sym__newline,
    ACTIONS(698), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(700), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6219] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_or,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    ACTIONS(590), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(592), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [6251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 7,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [6264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [6277] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_or,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
    ACTIONS(590), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(592), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6296] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
    ACTIONS(722), 1,
      anon_sym_or,
    ACTIONS(708), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(706), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6315] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_or,
    ACTIONS(724), 1,
      sym__newline,
    ACTIONS(698), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(700), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 6,
      sym__dedent,
      anon_sym_user,
      anon_sym_speech,
      anon_sym_dictate,
      anon_sym_key_wait,
      anon_sym_imgui,
  [6346] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym_integer,
    ACTIONS(728), 1,
      sym_float,
    ACTIONS(730), 1,
      sym__string_start,
    STATE(199), 1,
      sym_value,
    STATE(198), 2,
      sym_number,
      sym_string,
  [6366] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym_integer,
    ACTIONS(734), 1,
      sym_float,
    ACTIONS(736), 1,
      sym__string_start,
    STATE(133), 1,
      sym_value,
    STATE(115), 2,
      sym_number,
      sym_string,
  [6386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 6,
      sym__dedent,
      anon_sym_user,
      anon_sym_speech,
      anon_sym_dictate,
      anon_sym_key_wait,
      anon_sym_imgui,
  [6398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 6,
      sym__dedent,
      anon_sym_user,
      anon_sym_speech,
      anon_sym_dictate,
      anon_sym_key_wait,
      anon_sym_imgui,
  [6410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 6,
      sym__dedent,
      anon_sym_user,
      anon_sym_speech,
      anon_sym_dictate,
      anon_sym_key_wait,
      anon_sym_imgui,
  [6422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 6,
      sym__dedent,
      anon_sym_user,
      anon_sym_speech,
      anon_sym_dictate,
      anon_sym_key_wait,
      anon_sym_imgui,
  [6434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_user,
    STATE(289), 1,
      sym_list_identifier,
    STATE(290), 2,
      sym__user_identifier,
      sym__builtin_list_identifier,
  [6448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_user,
    STATE(267), 1,
      sym_list_identifier,
    STATE(290), 2,
      sym__user_identifier,
      sym__builtin_list_identifier,
  [6462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_user,
    STATE(285), 1,
      sym_list_identifier,
    STATE(290), 2,
      sym__user_identifier,
      sym__builtin_list_identifier,
  [6476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(49), 1,
      sym_os,
    ACTIONS(740), 3,
      anon_sym_linux,
      anon_sym_mac,
      anon_sym_windows,
  [6488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      sym_end_anchor,
    ACTIONS(742), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [6499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_PIPE,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym_choice_repeat1,
  [6512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    ACTIONS(750), 1,
      anon_sym_DOT,
    STATE(207), 1,
      aux_sym__qualified_identifier_repeat1,
  [6525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(753), 1,
      anon_sym_DOT,
    STATE(213), 1,
      aux_sym__qualified_identifier_repeat1,
  [6538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(755), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_argument_list_repeat1,
  [6551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      sym_end_anchor,
    ACTIONS(742), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [6562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_COLON,
    ACTIONS(759), 1,
      anon_sym_PIPE,
    STATE(227), 1,
      aux_sym_choice_repeat1,
  [6575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(761), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_argument_list_repeat1,
  [6588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    ACTIONS(753), 1,
      anon_sym_DOT,
    STATE(207), 1,
      aux_sym__qualified_identifier_repeat1,
  [6601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_PIPE,
    ACTIONS(765), 1,
      anon_sym_RBRACK,
    STATE(226), 1,
      aux_sym_choice_repeat1,
  [6614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym_end_anchor,
    ACTIONS(767), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [6625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_PIPE,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      aux_sym_choice_repeat1,
  [6638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_RBRACK,
    ACTIONS(763), 1,
      anon_sym_PIPE,
    STATE(214), 1,
      aux_sym_choice_repeat1,
  [6651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_COLON,
    ACTIONS(776), 1,
      anon_sym_PIPE,
    STATE(218), 1,
      aux_sym_choice_repeat1,
  [6664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym_end_anchor,
    ACTIONS(742), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [6675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_argument_list_repeat1,
  [6688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_end_anchor,
    ACTIONS(767), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [6699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(49), 1,
      sym_speech_engine,
    ACTIONS(786), 2,
      anon_sym_dragon,
      anon_sym_wav2letter,
  [6710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_PIPE,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      aux_sym_choice_repeat1,
  [6723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym__newline,
    ACTIONS(788), 1,
      anon_sym_DOT,
    STATE(224), 1,
      aux_sym__qualified_identifier_repeat1,
  [6736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(791), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_argument_list_repeat1,
  [6749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_RBRACK,
    ACTIONS(793), 1,
      anon_sym_PIPE,
    STATE(226), 1,
      aux_sym_choice_repeat1,
  [6762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_PIPE,
    ACTIONS(765), 1,
      anon_sym_COLON,
    STATE(218), 1,
      aux_sym_choice_repeat1,
  [6775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      sym_end_anchor,
    ACTIONS(767), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [6786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__newline,
    ACTIONS(798), 1,
      anon_sym_DOT,
    STATE(224), 1,
      aux_sym__qualified_identifier_repeat1,
  [6799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym__newline,
    ACTIONS(798), 1,
      anon_sym_DOT,
    STATE(229), 1,
      aux_sym__qualified_identifier_repeat1,
  [6812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [6820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym_identifier,
    STATE(252), 1,
      sym__qualified_identifier,
  [6830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_COLON,
    ACTIONS(804), 1,
      anon_sym_DOT,
  [6840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [6848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym_identifier,
    STATE(304), 1,
      sym__qualified_identifier,
  [6858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_LPAREN,
    STATE(164), 1,
      sym_argument_list,
  [6868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [6876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [6884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      sym_identifier,
    STATE(305), 1,
      sym__qualified_identifier,
  [6894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym_identifier,
    STATE(46), 1,
      sym__qualified_identifier,
  [6904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [6912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [6920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [6928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_COLON,
      anon_sym_PIPE,
  [6936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 2,
      sym__newline,
      anon_sym_DOT,
  [6944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_argument_list,
  [6954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [6962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 2,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [6970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_argument_list,
  [6980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym_identifier,
    STATE(278), 1,
      sym__qualified_identifier,
  [6990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_DOT,
  [6997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_EQ,
  [7004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__newline,
  [7011] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(824), 1,
      sym_implicit_string,
  [7018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym_identifier,
  [7025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym__newline,
  [7032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_EQ,
  [7039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_EQ,
  [7046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_DOT,
  [7053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym__indent,
  [7060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_DOT,
  [7067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_LPAREN,
  [7074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_LPAREN,
  [7081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LPAREN,
  [7088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_LPAREN,
  [7095] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(848), 1,
      sym_implicit_string,
  [7102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_RBRACE,
  [7109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_GT,
  [7116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_RBRACK,
  [7123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
  [7130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      sym_identifier,
  [7137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      sym__newline,
  [7144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_COLON,
  [7151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      sym_identifier,
  [7158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym_identifier,
  [7165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
  [7172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
  [7179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
  [7186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
  [7193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
  [7200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_COLON,
  [7207] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(876), 1,
      aux_sym_key_action_token1,
  [7214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_COLON,
  [7221] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(880), 1,
      aux_sym_key_action_token1,
  [7228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_RBRACE,
  [7235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_GT,
  [7242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_RBRACK,
  [7249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
  [7256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_RBRACE,
  [7263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_RBRACE,
  [7270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_GT,
  [7277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym_identifier,
  [7284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_COLON,
  [7291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym__newline,
  [7298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_COLON,
  [7305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
  [7312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
  [7319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
  [7326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_DASH,
  [7333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      ts_builtin_sym_end,
  [7340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_DOT,
  [7347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_DOT,
  [7354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_DOT,
  [7361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_LPAREN,
  [7368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__newline,
  [7375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_COLON,
  [7382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
  [7389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_GT,
  [7396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_COLON,
  [7403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_COLON,
  [7410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_DOT,
  [7417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_EQ,
  [7424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_COLON,
  [7431] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(928), 1,
      aux_sym_key_action_token1,
  [7438] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(930), 1,
      aux_sym_key_action_token1,
  [7445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_COLON,
  [7452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_RPAREN,
  [7459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_RPAREN,
  [7466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_RBRACK,
  [7473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_COLON,
  [7480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_DOT,
  [7487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_COLON,
  [7494] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(946), 1,
      aux_sym_key_action_token1,
  [7501] = 2,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(948), 1,
      aux_sym_key_action_token1,
  [7508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_LPAREN,
  [7515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_LPAREN,
  [7522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_COLON,
  [7529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_LPAREN,
  [7536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 180,
  [SMALL_STATE(5)] = 270,
  [SMALL_STATE(6)] = 360,
  [SMALL_STATE(7)] = 449,
  [SMALL_STATE(8)] = 532,
  [SMALL_STATE(9)] = 615,
  [SMALL_STATE(10)] = 698,
  [SMALL_STATE(11)] = 778,
  [SMALL_STATE(12)] = 858,
  [SMALL_STATE(13)] = 938,
  [SMALL_STATE(14)] = 1018,
  [SMALL_STATE(15)] = 1098,
  [SMALL_STATE(16)] = 1178,
  [SMALL_STATE(17)] = 1255,
  [SMALL_STATE(18)] = 1332,
  [SMALL_STATE(19)] = 1409,
  [SMALL_STATE(20)] = 1486,
  [SMALL_STATE(21)] = 1563,
  [SMALL_STATE(22)] = 1640,
  [SMALL_STATE(23)] = 1717,
  [SMALL_STATE(24)] = 1794,
  [SMALL_STATE(25)] = 1871,
  [SMALL_STATE(26)] = 1948,
  [SMALL_STATE(27)] = 2025,
  [SMALL_STATE(28)] = 2102,
  [SMALL_STATE(29)] = 2179,
  [SMALL_STATE(30)] = 2256,
  [SMALL_STATE(31)] = 2333,
  [SMALL_STATE(32)] = 2378,
  [SMALL_STATE(33)] = 2423,
  [SMALL_STATE(34)] = 2468,
  [SMALL_STATE(35)] = 2535,
  [SMALL_STATE(36)] = 2602,
  [SMALL_STATE(37)] = 2669,
  [SMALL_STATE(38)] = 2732,
  [SMALL_STATE(39)] = 2770,
  [SMALL_STATE(40)] = 2830,
  [SMALL_STATE(41)] = 2890,
  [SMALL_STATE(42)] = 2928,
  [SMALL_STATE(43)] = 2988,
  [SMALL_STATE(44)] = 3026,
  [SMALL_STATE(45)] = 3086,
  [SMALL_STATE(46)] = 3119,
  [SMALL_STATE(47)] = 3151,
  [SMALL_STATE(48)] = 3205,
  [SMALL_STATE(49)] = 3233,
  [SMALL_STATE(50)] = 3261,
  [SMALL_STATE(51)] = 3291,
  [SMALL_STATE(52)] = 3319,
  [SMALL_STATE(53)] = 3347,
  [SMALL_STATE(54)] = 3375,
  [SMALL_STATE(55)] = 3403,
  [SMALL_STATE(56)] = 3431,
  [SMALL_STATE(57)] = 3459,
  [SMALL_STATE(58)] = 3486,
  [SMALL_STATE(59)] = 3528,
  [SMALL_STATE(60)] = 3570,
  [SMALL_STATE(61)] = 3612,
  [SMALL_STATE(62)] = 3654,
  [SMALL_STATE(63)] = 3696,
  [SMALL_STATE(64)] = 3738,
  [SMALL_STATE(65)] = 3780,
  [SMALL_STATE(66)] = 3822,
  [SMALL_STATE(67)] = 3864,
  [SMALL_STATE(68)] = 3900,
  [SMALL_STATE(69)] = 3938,
  [SMALL_STATE(70)] = 3974,
  [SMALL_STATE(71)] = 4010,
  [SMALL_STATE(72)] = 4048,
  [SMALL_STATE(73)] = 4086,
  [SMALL_STATE(74)] = 4122,
  [SMALL_STATE(75)] = 4158,
  [SMALL_STATE(76)] = 4194,
  [SMALL_STATE(77)] = 4226,
  [SMALL_STATE(78)] = 4258,
  [SMALL_STATE(79)] = 4290,
  [SMALL_STATE(80)] = 4325,
  [SMALL_STATE(81)] = 4351,
  [SMALL_STATE(82)] = 4383,
  [SMALL_STATE(83)] = 4415,
  [SMALL_STATE(84)] = 4441,
  [SMALL_STATE(85)] = 4475,
  [SMALL_STATE(86)] = 4501,
  [SMALL_STATE(87)] = 4527,
  [SMALL_STATE(88)] = 4553,
  [SMALL_STATE(89)] = 4579,
  [SMALL_STATE(90)] = 4605,
  [SMALL_STATE(91)] = 4631,
  [SMALL_STATE(92)] = 4657,
  [SMALL_STATE(93)] = 4683,
  [SMALL_STATE(94)] = 4709,
  [SMALL_STATE(95)] = 4725,
  [SMALL_STATE(96)] = 4741,
  [SMALL_STATE(97)] = 4757,
  [SMALL_STATE(98)] = 4773,
  [SMALL_STATE(99)] = 4793,
  [SMALL_STATE(100)] = 4809,
  [SMALL_STATE(101)] = 4825,
  [SMALL_STATE(102)] = 4841,
  [SMALL_STATE(103)] = 4857,
  [SMALL_STATE(104)] = 4873,
  [SMALL_STATE(105)] = 4893,
  [SMALL_STATE(106)] = 4909,
  [SMALL_STATE(107)] = 4925,
  [SMALL_STATE(108)] = 4941,
  [SMALL_STATE(109)] = 4957,
  [SMALL_STATE(110)] = 4973,
  [SMALL_STATE(111)] = 4989,
  [SMALL_STATE(112)] = 5005,
  [SMALL_STATE(113)] = 5021,
  [SMALL_STATE(114)] = 5037,
  [SMALL_STATE(115)] = 5057,
  [SMALL_STATE(116)] = 5074,
  [SMALL_STATE(117)] = 5091,
  [SMALL_STATE(118)] = 5108,
  [SMALL_STATE(119)] = 5125,
  [SMALL_STATE(120)] = 5150,
  [SMALL_STATE(121)] = 5167,
  [SMALL_STATE(122)] = 5184,
  [SMALL_STATE(123)] = 5201,
  [SMALL_STATE(124)] = 5218,
  [SMALL_STATE(125)] = 5235,
  [SMALL_STATE(126)] = 5252,
  [SMALL_STATE(127)] = 5277,
  [SMALL_STATE(128)] = 5294,
  [SMALL_STATE(129)] = 5319,
  [SMALL_STATE(130)] = 5336,
  [SMALL_STATE(131)] = 5353,
  [SMALL_STATE(132)] = 5370,
  [SMALL_STATE(133)] = 5387,
  [SMALL_STATE(134)] = 5404,
  [SMALL_STATE(135)] = 5421,
  [SMALL_STATE(136)] = 5438,
  [SMALL_STATE(137)] = 5455,
  [SMALL_STATE(138)] = 5471,
  [SMALL_STATE(139)] = 5485,
  [SMALL_STATE(140)] = 5505,
  [SMALL_STATE(141)] = 5521,
  [SMALL_STATE(142)] = 5535,
  [SMALL_STATE(143)] = 5549,
  [SMALL_STATE(144)] = 5563,
  [SMALL_STATE(145)] = 5579,
  [SMALL_STATE(146)] = 5593,
  [SMALL_STATE(147)] = 5611,
  [SMALL_STATE(148)] = 5625,
  [SMALL_STATE(149)] = 5645,
  [SMALL_STATE(150)] = 5659,
  [SMALL_STATE(151)] = 5673,
  [SMALL_STATE(152)] = 5687,
  [SMALL_STATE(153)] = 5703,
  [SMALL_STATE(154)] = 5717,
  [SMALL_STATE(155)] = 5731,
  [SMALL_STATE(156)] = 5744,
  [SMALL_STATE(157)] = 5763,
  [SMALL_STATE(158)] = 5776,
  [SMALL_STATE(159)] = 5797,
  [SMALL_STATE(160)] = 5810,
  [SMALL_STATE(161)] = 5823,
  [SMALL_STATE(162)] = 5836,
  [SMALL_STATE(163)] = 5849,
  [SMALL_STATE(164)] = 5868,
  [SMALL_STATE(165)] = 5881,
  [SMALL_STATE(166)] = 5902,
  [SMALL_STATE(167)] = 5921,
  [SMALL_STATE(168)] = 5936,
  [SMALL_STATE(169)] = 5949,
  [SMALL_STATE(170)] = 5962,
  [SMALL_STATE(171)] = 5975,
  [SMALL_STATE(172)] = 5990,
  [SMALL_STATE(173)] = 6003,
  [SMALL_STATE(174)] = 6020,
  [SMALL_STATE(175)] = 6037,
  [SMALL_STATE(176)] = 6050,
  [SMALL_STATE(177)] = 6063,
  [SMALL_STATE(178)] = 6076,
  [SMALL_STATE(179)] = 6089,
  [SMALL_STATE(180)] = 6110,
  [SMALL_STATE(181)] = 6123,
  [SMALL_STATE(182)] = 6142,
  [SMALL_STATE(183)] = 6155,
  [SMALL_STATE(184)] = 6168,
  [SMALL_STATE(185)] = 6181,
  [SMALL_STATE(186)] = 6200,
  [SMALL_STATE(187)] = 6219,
  [SMALL_STATE(188)] = 6238,
  [SMALL_STATE(189)] = 6251,
  [SMALL_STATE(190)] = 6264,
  [SMALL_STATE(191)] = 6277,
  [SMALL_STATE(192)] = 6296,
  [SMALL_STATE(193)] = 6315,
  [SMALL_STATE(194)] = 6334,
  [SMALL_STATE(195)] = 6346,
  [SMALL_STATE(196)] = 6366,
  [SMALL_STATE(197)] = 6386,
  [SMALL_STATE(198)] = 6398,
  [SMALL_STATE(199)] = 6410,
  [SMALL_STATE(200)] = 6422,
  [SMALL_STATE(201)] = 6434,
  [SMALL_STATE(202)] = 6448,
  [SMALL_STATE(203)] = 6462,
  [SMALL_STATE(204)] = 6476,
  [SMALL_STATE(205)] = 6488,
  [SMALL_STATE(206)] = 6499,
  [SMALL_STATE(207)] = 6512,
  [SMALL_STATE(208)] = 6525,
  [SMALL_STATE(209)] = 6538,
  [SMALL_STATE(210)] = 6551,
  [SMALL_STATE(211)] = 6562,
  [SMALL_STATE(212)] = 6575,
  [SMALL_STATE(213)] = 6588,
  [SMALL_STATE(214)] = 6601,
  [SMALL_STATE(215)] = 6614,
  [SMALL_STATE(216)] = 6625,
  [SMALL_STATE(217)] = 6638,
  [SMALL_STATE(218)] = 6651,
  [SMALL_STATE(219)] = 6664,
  [SMALL_STATE(220)] = 6675,
  [SMALL_STATE(221)] = 6688,
  [SMALL_STATE(222)] = 6699,
  [SMALL_STATE(223)] = 6710,
  [SMALL_STATE(224)] = 6723,
  [SMALL_STATE(225)] = 6736,
  [SMALL_STATE(226)] = 6749,
  [SMALL_STATE(227)] = 6762,
  [SMALL_STATE(228)] = 6775,
  [SMALL_STATE(229)] = 6786,
  [SMALL_STATE(230)] = 6799,
  [SMALL_STATE(231)] = 6812,
  [SMALL_STATE(232)] = 6820,
  [SMALL_STATE(233)] = 6830,
  [SMALL_STATE(234)] = 6840,
  [SMALL_STATE(235)] = 6848,
  [SMALL_STATE(236)] = 6858,
  [SMALL_STATE(237)] = 6868,
  [SMALL_STATE(238)] = 6876,
  [SMALL_STATE(239)] = 6884,
  [SMALL_STATE(240)] = 6894,
  [SMALL_STATE(241)] = 6904,
  [SMALL_STATE(242)] = 6912,
  [SMALL_STATE(243)] = 6920,
  [SMALL_STATE(244)] = 6928,
  [SMALL_STATE(245)] = 6936,
  [SMALL_STATE(246)] = 6944,
  [SMALL_STATE(247)] = 6954,
  [SMALL_STATE(248)] = 6962,
  [SMALL_STATE(249)] = 6970,
  [SMALL_STATE(250)] = 6980,
  [SMALL_STATE(251)] = 6990,
  [SMALL_STATE(252)] = 6997,
  [SMALL_STATE(253)] = 7004,
  [SMALL_STATE(254)] = 7011,
  [SMALL_STATE(255)] = 7018,
  [SMALL_STATE(256)] = 7025,
  [SMALL_STATE(257)] = 7032,
  [SMALL_STATE(258)] = 7039,
  [SMALL_STATE(259)] = 7046,
  [SMALL_STATE(260)] = 7053,
  [SMALL_STATE(261)] = 7060,
  [SMALL_STATE(262)] = 7067,
  [SMALL_STATE(263)] = 7074,
  [SMALL_STATE(264)] = 7081,
  [SMALL_STATE(265)] = 7088,
  [SMALL_STATE(266)] = 7095,
  [SMALL_STATE(267)] = 7102,
  [SMALL_STATE(268)] = 7109,
  [SMALL_STATE(269)] = 7116,
  [SMALL_STATE(270)] = 7123,
  [SMALL_STATE(271)] = 7130,
  [SMALL_STATE(272)] = 7137,
  [SMALL_STATE(273)] = 7144,
  [SMALL_STATE(274)] = 7151,
  [SMALL_STATE(275)] = 7158,
  [SMALL_STATE(276)] = 7165,
  [SMALL_STATE(277)] = 7172,
  [SMALL_STATE(278)] = 7179,
  [SMALL_STATE(279)] = 7186,
  [SMALL_STATE(280)] = 7193,
  [SMALL_STATE(281)] = 7200,
  [SMALL_STATE(282)] = 7207,
  [SMALL_STATE(283)] = 7214,
  [SMALL_STATE(284)] = 7221,
  [SMALL_STATE(285)] = 7228,
  [SMALL_STATE(286)] = 7235,
  [SMALL_STATE(287)] = 7242,
  [SMALL_STATE(288)] = 7249,
  [SMALL_STATE(289)] = 7256,
  [SMALL_STATE(290)] = 7263,
  [SMALL_STATE(291)] = 7270,
  [SMALL_STATE(292)] = 7277,
  [SMALL_STATE(293)] = 7284,
  [SMALL_STATE(294)] = 7291,
  [SMALL_STATE(295)] = 7298,
  [SMALL_STATE(296)] = 7305,
  [SMALL_STATE(297)] = 7312,
  [SMALL_STATE(298)] = 7319,
  [SMALL_STATE(299)] = 7326,
  [SMALL_STATE(300)] = 7333,
  [SMALL_STATE(301)] = 7340,
  [SMALL_STATE(302)] = 7347,
  [SMALL_STATE(303)] = 7354,
  [SMALL_STATE(304)] = 7361,
  [SMALL_STATE(305)] = 7368,
  [SMALL_STATE(306)] = 7375,
  [SMALL_STATE(307)] = 7382,
  [SMALL_STATE(308)] = 7389,
  [SMALL_STATE(309)] = 7396,
  [SMALL_STATE(310)] = 7403,
  [SMALL_STATE(311)] = 7410,
  [SMALL_STATE(312)] = 7417,
  [SMALL_STATE(313)] = 7424,
  [SMALL_STATE(314)] = 7431,
  [SMALL_STATE(315)] = 7438,
  [SMALL_STATE(316)] = 7445,
  [SMALL_STATE(317)] = 7452,
  [SMALL_STATE(318)] = 7459,
  [SMALL_STATE(319)] = 7466,
  [SMALL_STATE(320)] = 7473,
  [SMALL_STATE(321)] = 7480,
  [SMALL_STATE(322)] = 7487,
  [SMALL_STATE(323)] = 7494,
  [SMALL_STATE(324)] = 7501,
  [SMALL_STATE(325)] = 7508,
  [SMALL_STATE(326)] = 7515,
  [SMALL_STATE(327)] = 7522,
  [SMALL_STATE(328)] = 7529,
  [SMALL_STATE(329)] = 7536,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__not_interpolation, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_interpolation, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_block_repeat1, 2), SHIFT_REPEAT(261),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_block_repeat1, 2), SHIFT_REPEAT(19),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_block_repeat1, 2), SHIFT_REPEAT(262),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_block_repeat1, 2), SHIFT_REPEAT(263),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_block_repeat1, 2), SHIFT_REPEAT(303),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_block_repeat1, 2), SHIFT_REPEAT(152),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_block_repeat1, 2), SHIFT_REPEAT(264),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_block_repeat1, 2), SHIFT_REPEAT(193),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_block_repeat1, 2), SHIFT_REPEAT(193),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_block_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_block_repeat1, 2), SHIFT_REPEAT(90),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 4, .production_id = 6),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, .production_id = 6),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_or, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(47),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(327),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(322),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(320),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(233),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(316),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(313),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(310),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(303),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(302),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_or_repeat1, 2), SHIFT_REPEAT(302),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__qualified_identifier_repeat1, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__qualified_identifier_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qualified_identifier_repeat1, 2), SHIFT_REPEAT(275),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qualified_identifier, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__qualified_identifier, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(309),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(306),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(201),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qualified_identifier, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__qualified_identifier, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_identifier, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__user_identifier, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3, .production_id = 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 3, .production_id = 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_and, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__optional_and, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_speech_engine, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_speech_engine, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_identifier, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_identifier, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__builtin_mode_identifier, 1, .production_id = 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__builtin_mode_identifier, 1, .production_id = 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_identifier, 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_identifier, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_os, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_os, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_seq, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(114),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(203),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(158),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(58),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(59),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(104),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(201),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(179),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(65),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(64),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(98),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(202),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(165),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(62),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(60),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_block_repeat1, 2), SHIFT_REPEAT(303),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_block_repeat1, 2), SHIFT_REPEAT(259),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_block_repeat1, 2), SHIFT_REPEAT(257),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_block_repeat1, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(2),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(87),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(87),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat1, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_rule, 3),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 4),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, .production_id = 4),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 4),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 4),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 3),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_tag, 4),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_tag, 4),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 3, .production_id = 3),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 3, .production_id = 3),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_block, 2),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_block, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 5),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 2),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_statement, 3, .production_id = 6),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_statement, 3, .production_id = 6),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 1),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_block, 1),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_block, 1),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 2),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_context, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 7),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, .production_id = 5),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_action, 4),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep_action, 4),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 1),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_choice, 1),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qualified_identifier_repeat1, 2), SHIFT_REPEAT(274),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 2),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(68),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(72),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(21),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qualified_identifier_repeat1, 2), SHIFT_REPEAT(292),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(71),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__builtin_scope_namespace, 1, .production_id = 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 3),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__builtin_setting_identifier, 3),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_identifier, 1),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__builtin_action_namespace, 1, .production_id = 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__builtin_action_identifier, 1, .production_id = 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_identifier, 1),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__builtin_scope_identifier, 3),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_identifier, 1),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_identifier, 1),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture_identifier, 1),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [908] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__builtin_action_identifier, 3),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
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
