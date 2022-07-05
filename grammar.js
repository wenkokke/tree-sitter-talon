const PREC = {
  parenthesized_expression: 1,
  or: 10,
  plus: 18,
  times: 19,
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
    $.string_content,
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

    docstring: ($) => token(seq("###", /.*/)),

    /* Context */

    context: ($) =>
      seq(
        repeat($.docstring),
        optional($._optional_or),
        "-",
        $._newline
        ),

    _optional_or: ($) => choice($.or, $._optional_and),

    or: ($) => repeat2($._optional_and),

    _optional_and: ($) => choice($.and, $._optional_not),

    and: ($) => seq($._optional_not, "and", $._optional_and),

    _optional_not: ($) => choice($.not, $.match),

    not: ($) => seq("not", $.match),

    match: ($) =>
      seq(choice($._prioritized_match, $._generic_match), $._newline),

    _generic_match: ($) =>
      seq(field("key", $.identifier), ":", field("pattern", $.implicit_string)),

    _prioritized_match: ($) =>
      prec(
        1,
        seq(
          field(
            "key",
            alias(
              choice(
                "os",
                "tag",
                "mode",
                "app",
                "app.name",
                "app.exe",
                "app.bundle",
                "title",
                "code.language",
                "language"
              ),
              $.identifier
            )
          ),
          token.immediate(":"),
          field("pattern", $.implicit_string)
        )
      ),

    /* Tags */

    include_tag: ($) =>
      seq("tag()", ":", field("tag", $.identifier), $._newline),

    /* Settings */

    settings: ($) => seq("settings()", ":", $._statement_suite),

    /* Commands */

    command: ($) => seq(field("rule", $.rule), ":", field("script", $._statement_suite)),

    /* Statements */

    _statement_suite: ($) =>
      choice(
        alias($._simple_statement, $.block),
        seq($._indent, $.block),
        alias($._newline, $.block)
      ),

    block: ($) => seq(repeat($._simple_statement), $._dedent),

    _simple_statement: ($) =>
      seq(
        choice(
          $.docstring,
          $.assignment,
          $.expression,
        ),
        $._newline
      ),

    assignment: ($) =>
      seq(field("left", $.identifier), "=", field("right", $._expression)),

    expression: ($) => field("expression", $._expression),

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

    word: ($) => /[\p{Letter}\p{Number}-]+/,

    list: ($) => seq("{", field("list_name", $.identifier), "}"),

    capture: ($) => seq("<", field("capture_name", $.identifier), ">"),

    optional: ($) => seq("[", $._optional_choice, "]"),

    repeat: ($) => seq($._primary_rule, "*"),

    repeat1: ($) => seq($._primary_rule, "+"),

    parenthesized_rule: ($) => seq("(", $._optional_choice, ")"),

    /* Expressions */

    _expression: ($) =>
      choice(
        $.binary_operator,
        $.variable,
        $.string,
        $.integer,
        $.float,
        $.key_action,
        $.sleep_action,
        $.action,
        $.parenthesized_expression
      ),

    variable: ($) => field("variable_name", $.identifier),

    parenthesized_expression: ($) =>
      prec(PREC.parenthesized_expression, seq("(", $._expression, ")")),

    operator: ($) => /[\p{Dash_Punctuation}\p{Math_Symbol}]+/,

    binary_operator: ($) => {
      const table = [
        [prec.left, "+", PREC.plus],
        [prec.left, "-", PREC.plus],
        [prec.left, "*", PREC.times],
        [prec.left, "/", PREC.times],
        [prec.left, "%", PREC.times],
        [prec.left, "or", PREC.or],
      ];

      return choice(
        ...table.map(([fn, operator, precedence]) =>
          fn(
            precedence,
            seq(
              field("left", $._expression),
              field("operator", alias(operator, $.operator)),
              field("right", $._expression)
            )
          )
        )
      );
    },

    key_action: ($) =>
      prec(
        PREC.key,
        seq(
          "key",
          "(",
          field("arguments", alias(/[^\)]*/, $.implicit_string)),
          ")"
        )
      ),

    sleep_action: ($) =>
      prec(
        PREC.sleep,
        seq(
          "sleep",
          "(",
          field("arguments", alias(/[^\)]*/, $.implicit_string)),
          ")"
        )
      ),

    action: ($) =>
      prec(
        PREC.action,
        seq(
          field("action_name", $.identifier),
          field("arguments", $.argument_list)
        )
      ),

    argument_list: ($) => seq("(", sep($._expression, ","), optional(","), ")"),

    /* Identifiers */

    identifier: ($) => /([A-Za-z][A-Za-z0-9_]*)(\.[A-Za-z][A-Za-z0-9_]*)*/,

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
            alias($._escape_interpolation, $.string_content),
            alias($._not_interpolation, $.string_content),
            $.string_escape_sequence,
            alias($._not_escapesequence, $.string_content),
            $.string_content
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
