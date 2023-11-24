const chai = require('chai');
const assert = chai.assert;

const Parser = require('tree-sitter');
const Talon = require('../bindings/node');

const parser = new Parser();
parser.setLanguage(Talon);

describe('Parser', function() {
    it('should strip newlines from comments', function() {
        const sourceCode = '# Comment\r\n-';
        const tree = parser.parse(sourceCode);
        assert.equal(tree.rootNode.child(0).text, '# Comment');
    });
});
