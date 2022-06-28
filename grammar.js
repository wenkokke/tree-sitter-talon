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
      seq(optional($.context), repeat(choice($.tag, $.settings, $.command))),

    comment: ($) => token(seq("#", /.*/)),

    /* Context */

    context: ($) => seq(optional($._optional_or), "-", $._newline),

    _optional_or: ($) => choice($.or, $._optional_and),

    or: ($) => repeat2($._optional_and),

    _optional_and: ($) => choice($.and, $._optional_not),

    and: ($) => seq($._optional_not, "and", $._optional_and),

    _optional_not: ($) => choice($.not, $.match),

    not: ($) => seq("not", $.match),

    match: ($) =>
      seq(field("key", $.match_key), ":", field("pattern", $.match_pattern)),

    match_key: ($) => $.qualified_identifier,

    match_pattern: ($) =>
      choice(
        prec.dynamic(2, $.os),
        prec.dynamic(1, $.qualified_identifier),
        prec.dynamic(1, $.regex),
        prec.dynamic(0, $.implicit_string)
      ),

    os: ($) => choice("linux", "mac", "windows"),

    /* Tags */

    tag: ($) => seq("tag()", ":", $.qualified_identifier),

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
      seq(field("left", $.qualified_identifier), "=", field("right", $.value)),

    /* Commands */
    command: ($) =>
      seq(
        $.rule,
        ":",
        choice(
          alias($._statement, $.command_block),
          seq($._indent, $.command_block)
        )
      ),

    command_block: ($) => seq(repeat($._statement), $._dedent),

    /* Rules */

    rule: ($) => $._optional_choice,

    _optional_choice: ($) => choice($.choice, $._optional_anchor),

    choice: ($) => sep2($._optional_anchor, "|"),

    _optional_anchor: ($) => choice($.anchor, $._optional_seq),

    anchor: ($) =>
      choice(
        seq($.start_anchor, $._optional_seq),
        seq($._optional_seq, $.end_anchor),
        seq($.start_anchor, $._optional_seq, $.end_anchor)
      ),

    start_anchor: ($) => "^",
    end_anchor: ($) => "$",

    _optional_seq: ($) => choice($._primary_rule, $.seq),

    seq: ($) => repeat2($._primary_rule),

    _primary_rule: ($) =>
      choice(
        $.word,
        $.number,
        $.list,
        $.capture,
        $.optional,
        $.repeat,
        $.repeat1,
        $._parenthesized_rule
      ),

    word: ($) => /[A-Za-z-]+/,

    list: ($) => seq("{", $.qualified_identifier, "}"),

    capture: ($) => seq("<", $.qualified_identifier, ">"),

    optional: ($) => seq("[", $._optional_choice, "]"),

    repeat: ($) => seq($._primary_rule, "*"),

    repeat1: ($) => seq($._primary_rule, "+"),

    _parenthesized_rule: ($) => seq("(", $._optional_choice, ")"),

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
        $.qualified_identifier,
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
          field("action", $.qualified_identifier),
          field("arguments", $.argument_list)
        )
      ),

    argument_list: ($) =>
      seq("(", optional(sep1($._expression, ",")), optional(","), ")"),

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
        alias($._regex_end, "/"),
        repeat($.regex_flag)
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

    regex_flag: ($) => token.immediate(/[a-z]/),

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

    /* Identifiers */

    qualified_identifier: ($) => sep1($.identifier, "."),

    identifier: ($) => /[A-Za-z][A-Za-z0-9_-]*/,
  },
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function sep2(rule, separator) {
  return seq(rule, repeat1(seq(separator, rule)));
}

function repeat2(rule) {
  return seq(rule, repeat1(rule));
}
