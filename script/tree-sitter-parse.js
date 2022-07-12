#!/usr/bin/env node --trace-warnings --unhandled-rejections=strict

const fs = require('fs');
const path = require('path');
const Parser = require('web-tree-sitter');

if (process.argv.length < 3) {
  console.log('Usage: script/tree-sitter-parse.js <file..>')
  process.exit(1)
}

Parser.init().then(() => {
  const tree_sitter_talon_wasm = path.resolve(__dirname, '..', 'tree-sitter-talon.wasm');
  Parser.Language.load(tree_sitter_talon_wasm).then((Talon) => {
    const parser = new Parser;
    parser.setLanguage(Talon);
    for (let i = 2; i < process.argv.length - 1; i++) {
      const fileName = process.argv[i]
      const sourceCode = fs.readFileSync(fileName, 'utf8')
      const tree = parser.parse(sourceCode);
    }
  });
});