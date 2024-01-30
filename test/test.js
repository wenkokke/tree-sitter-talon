const Parser = require('tree-sitter');
const Talon = require('../bindings/node');

const parser = new Parser();
parser.setLanguage(Talon);

describe('Parser', function () {
    it('should strip newlines from comments', function () {
        const sourceCode = '# Comment\n-';
        const tree = parser.parse(sourceCode);
        expect(tree.rootNode.child(0).text).toEqual('# Comment');
    });
    it('should strip CRLFs from comments', function () {
        const sourceCode = '# Comment\r\n-';
        const tree = parser.parse(sourceCode);
        expect(tree.rootNode.child(0).text).toEqual('# Comment');
    });
});
