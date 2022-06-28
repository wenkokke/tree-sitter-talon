const RULE_PREC = {
  parenthesized_rule: 1,
  choice: 10,
  anchor: 18,
  seq: 19,
};

const EXPRESSION_PREC = {
  parenthesized_expression: 1,
  or: 10,
  plus: 18,
  times: 19,
  qualified_identifier: 20,
  action: 22,
  key: 25,
  sleep: 25,
};

module.exports = grammar({
  name: "talon",

  extras: ($) => [$.comment, /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/],

  externals: ($) => [
    $._newline,
    $._indent,
    $._dedent,
    $._string_start,
    $._string_content,
    $._string_end,
    $._regex_start,
    $._regex_content,
    $._regex_end,

    // Mark comments as external tokens so that the external scanner is always
    // invoked, even if no external token is expected. This allows for better
    // error recovery, because the external scanner can maintain the overall
    // structure by returning dedent tokens whenever a dedent occurs, even
    // if no dedent is expected.
    $.comment,

    // Allow the external scanner to check for the validity of closing brackets
    // so that it can avoid returning dedent tokens between brackets.
    "]",
    ")",
    "}",
  ],

  rules: {
    source_file: ($) =>
      seq(
        optional($.context),
        repeat(choice($.include_tag, $.settings, $.command))
      ),

    comment: ($) => token(seq("#", /.*/)),

    /* Context */

    context: ($) => seq(optional($._optional_or), "-", $._newline),

    _optional_or: ($) => choice($.or, $._optional_and),

    or: ($) => repeat2($._optional_and),

    _optional_and: ($) => choice($.and, $._optional_not),

    and: ($) => seq($._optional_not, "and", $._optional_and),

    _optional_not: ($) => choice($.not, $.match),

    not: ($) => seq("not", $.match),

    match: ($) => {
      const table = [
        ["os", $.os, 1],
        ["tag", $.tag_identifier, 1],
        ["mode", $.mode_identifier, 1],
        ["app", $.identifier, 1],
        ["app.name", $.implicit_string, 1],
        ["app.exe", $.implicit_string, 1],
        ["app.bundle", $.implicit_string, 1],
        ["title", $.implicit_string, 1],
        ["code.language", $.identifier, 1],
        ["language", $.identifier, 1],
        ["speech.engine", $.speech_engine, 1],
        [$.scope_identifier, $.implicit_string, 0],
      ];

      return choice(
        ...table.map(([key_rule, pattern_rule, precedence]) =>
          prec(
            precedence,
            seq(field("key", key_rule), ":", field("pattern", pattern_rule))
          )
        )
      );
    },

    /* Tags */

    include_tag: ($) => seq("tag()", ":", $.tag_identifier, $._newline),

    /* Settings */

    settings: ($) =>
      seq(
        "settings()",
        ":",
        choice(
          alias($.settings_statement, $.settings_block),
          seq($._indent, $.settings_block),
          alias($._newline, $.settings_block)
        )
      ),

    settings_block: ($) => seq(repeat($.settings_statement), $._dedent),

    settings_statement: ($) =>
      seq(field("left", $.setting_identifier), "=", field("right", $.value)),

    /* Commands */

    command: ($) =>
      seq(
        $.rule,
        ":",
        choice(
          alias($._statement, $.command_block),
          seq($._newline, $._indent, $.command_block)
        )
      ),

    command_block: ($) => seq(repeat($._statement), $._dedent),

    /* Rules */

    rule: ($) => $._optional_choice,

    _optional_choice: ($) => choice($.choice, $._optional_anchor),

    choice: ($) => sep2($._optional_anchor, "|"),

    _optional_anchor: ($) =>
      seq(optional($.start_anchor), $._optional_seq, optional($.end_anchor)),

    start_anchor: ($) => "^",
    end_anchor: ($) => "$",

    _optional_seq: ($) => choice($._primary_rule, $.seq),

    seq: ($) => repeat2($._primary_rule),

    _primary_rule: ($) =>
      choice(
        $.word,
        $.list,
        $.capture,
        $.optional,
        $.repeat,
        $.repeat1,
        $.parenthesized_rule
      ),

    word: ($) => /[A-Za-z-]+/,

    list: ($) => seq("{", $.list_identifier, "}"),

    capture: ($) => seq("<", $.capture_identifier, ">"),

    optional: ($) => seq("[", $._optional_choice, "]"),

    repeat: ($) => seq($._primary_rule, "*"),

    repeat1: ($) => seq($._primary_rule, "+"),

    parenthesized_rule: ($) => seq("(", $._optional_choice, ")"),

    /* Statements */

    _statement: ($) => choice($.expression_statement, $.assignment_statement),

    assignment_statement: ($) =>
      seq(
        field("left", $.identifier),
        "=",
        field("right", $._expression),
        $._newline
      ),

    expression_statement: ($) => seq($._expression, $._newline),

    /* Expressions */

    _expression: ($) =>
      choice(
        $.binary_operator,
        $.identifier,
        $.string,
        $.integer,
        $.float,
        $.key_action,
        $.sleep_action,
        $.action,
        $.parenthesized_expression
      ),

    parenthesized_expression: ($) =>
      prec(
        EXPRESSION_PREC.parenthesized_expression,
        seq("(", $._expression, ")")
      ),

    binary_operator: ($) => {
      const table = [
        [prec.left, "+", EXPRESSION_PREC.plus],
        [prec.left, "-", EXPRESSION_PREC.plus],
        [prec.left, "*", EXPRESSION_PREC.times],
        [prec.left, "/", EXPRESSION_PREC.times],
        [prec.left, "%", EXPRESSION_PREC.times],
        [prec.left, "or", EXPRESSION_PREC.or],
      ];

      return choice(
        ...table.map(([fn, operator, precedence]) =>
          fn(
            precedence,
            seq(
              field("left", $._expression),
              field("operator", operator),
              field("right", $._expression)
            )
          )
        )
      );
    },

    key_action: ($) =>
      prec(
        EXPRESSION_PREC.key,
        seq("key", "(", alias(/[^\)]*/, $.implicit_string), ")")
      ),

    sleep_action: ($) =>
      prec(
        EXPRESSION_PREC.sleep,
        seq("sleep", "(", alias(/[^\)]*/, $.implicit_string), ")")
      ),

    action: ($) =>
      prec(
        EXPRESSION_PREC.action,
        seq(
          field("action", $.action_identifier),
          field("arguments", $.argument_list)
        )
      ),

    argument_list: ($) =>
      seq("(", sep($._expression, ","), optional(","), ")"),

    /* Identifiers */

    qualified_identifier: ($) => $._qualified_identifier,

    _qualified_identifier: ($) => sep1($.identifier, "."),

    _user_identifier: ($) =>
      seq(alias("user", $.identifier), ".", $._qualified_identifier),

    identifier: ($) => /[A-Za-z][A-Za-z0-9_-]*/,

    /* Builtin Identifiers */

    // Builtin enums:

    os: ($) => choice("linux", "mac", "windows"),

    speech_engine: ($) => choice("dragon", "wav2letter"),

    // Builtin modes:

    mode_identifier: ($) =>
      choice($._builtin_mode_identifier, $._user_identifier),

    _builtin_mode_identifier: ($) =>
      alias(choice("all", "command", "dictation", "sleep"), $.identifier),

    // Builtin lists:

    list_identifier: ($) =>
      choice($._builtin_list_identifier, $._user_identifier),

    _builtin_list_identifier: ($) => choice(),

    // Builtin captures:

    capture_identifier: ($) =>
      choice($._builtin_capture_identifier, $._user_identifier),

    _builtin_capture_identifier: ($) =>
      alias(choice("phrase", "number", "number_small"), $.identifier),

    // Builtin actions:

    action_identifier: ($) =>
      choice($._builtin_action_identifier, $._user_identifier),

    _builtin_action_identifier: ($) =>
      choice(
        alias(
          choice(
            "insert",
            "key",
            "mouse_click",
            "mouse_drag",
            "mouse_move",
            "mouse_release",
            "mouse_scroll",
            "mouse_x",
            "mouse_y",
            "skip",
            "auto_format",
            "auto_insert",
            "mimic",
            "print",
            "sleep"
          ),
          $.identifier
        ),
        seq($._builtin_action_namespace, ".", $._qualified_identifier)
      ),

    _builtin_action_namespace: ($) =>
      alias(
        choice(
          "speech",
          "code",
          "edit",
          "app",
          "browser",
          "clip",
          "core",
          "dictate",
          "migrate",
          "mode",
          "path",
          "sound",
          "win",
          "experimental",
          "menu"
        ),
        $.identifier
      ),

    // Builtin settings:

    setting_identifier: ($) =>
      choice($._builtin_setting_identifier, $._user_identifier),

    _builtin_setting_identifier: ($) =>
      choice(
        alias(choice("key_wait"), $.identifier),
        seq($._builtin_setting_namespace, ".", $._qualified_identifier)
      ),

    _builtin_setting_namespace: ($) =>
      alias(choice("speech", "dictate", "imgui"), $.identifier),

    // Builtin tags:

    tag_identifier: ($) =>
      choice($._builtin_tag_identifier, $._user_identifier),

    _builtin_tag_identifier: ($) =>
      alias(choice("browser", "terminal", "debugger"), $.identifier),

    // Builtin scopes:

    scope_identifier: ($) =>
      choice($._builtin_scope_identifier, $._user_identifier),

    _builtin_scope_identifier: ($) =>
      seq($._builtin_scope_namespace, ".", $.identifier),

    _builtin_scope_namespace: ($) =>
      alias(
        choice("app", "browser", "code", "main", "speech", "win"),
        $.identifier
      ),

    /* Values */

    value: ($) => choice($.number, $.string),

    /* Numbers */

    number: ($) => choice($.integer, $.float),

    integer: ($) =>
      token(
        choice(
          seq(choice("0x", "0X"), repeat1(/_?[A-Fa-f0-9]+/), optional(/[Ll]/)),
          seq(choice("0o", "0O"), repeat1(/_?[0-7]+/), optional(/[Ll]/)),
          seq(choice("0b", "0B"), repeat1(/_?[0-1]+/), optional(/[Ll]/)),
          seq(
            repeat1(/[0-9]+_?/),
            choice(
              optional(/[Ll]/), // long numbers
              optional(/[jJ]/) // complex numbers
            )
          )
        )
      ),

    float: ($) => {
      const digits = repeat1(/[0-9]+_?/);
      const exponent = seq(/[eE][\+-]?/, digits);

      return token(
        seq(
          choice(
            seq(digits, ".", optional(digits), optional(exponent)),
            seq(optional(digits), ".", digits, optional(exponent)),
            seq(digits, exponent)
          ),
          optional(choice(/[Ll]/, /[jJ]/))
        )
      );
    },

    /* Regular Expression */

    regex: ($) =>
      seq(
        alias($._regex_start, "/"),
        repeat(
          choice(
            $._regex_content,
            $.regex_escape_sequence,
            $._not_escapesequence
          )
        ),
        alias($._regex_end, "/")
      ),

    regex_escape_sequence: ($) =>
      choice(
        token(
          prec(
            2,
            seq(
              "\\",
              choice(
                "^",
                "$",
                ".",
                "|",
                "?",
                "*",
                "+",
                "(",
                ")",
                "[",
                "]",
                "{",
                "}",
                "/"
              )
            )
          )
        ),
        alias($.string_escape_sequence, $.regex_escape_sequence)
      ),

    /* Strings */

    implicit_string: ($) => token(/.*/),

    string: ($) =>
      seq(
        alias($._string_start, '"'),
        repeat(
          choice(
            $.interpolation,
            $._escape_interpolation,
            $._not_interpolation,
            $.string_escape_sequence,
            $._not_escapesequence,
            $._string_content
          )
        ),
        alias($._string_end, '"')
      ),

    interpolation: ($) => prec(1, seq("{", $._expression, "}")),

    _escape_interpolation: ($) =>
      prec(1, choice(alias("{{", "{"), alias("}}", "}"))),

    string_escape_sequence: ($) =>
      token(
        prec(
          1,
          seq(
            "\\",
            choice(
              /u[a-fA-F\d]{4}/,
              /U[a-fA-F\d]{8}/,
              /x[a-fA-F\d]{2}/,
              /\d{3}/,
              /\r?\n/,
              "'",
              '"',
              "a",
              "b",
              "f",
              "r",
              "n",
              "t",
              "v",
              "\\"
            )
          )
        )
      ),

    _not_escapesequence: ($) => "\\",

    _not_interpolation: ($) => choice("{", "}"),
  },
});

function sep(rule, separator) {
  return optional(sep1(rule, separator));
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function sep2(rule, separator) {
  return seq(rule, repeat1(seq(separator, rule)));
}

function repeat2(rule) {
  return seq(rule, repeat1(rule));
}
