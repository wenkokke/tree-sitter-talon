const { beforeEach, describe, expect, it } = require("@jest/globals");
const { fetchAllTestData, getTestModes, createParser } = require("./common.js");
const fs = require("fs");
const path = require("path");

const MODES = getTestModes();
const TEST_DATA = fetchAllTestData();
const TEST_DIRS = Object.keys(TEST_DATA);

const SKIPPED_EXAMPLE_FILES = new Set([
  // Swedish dictation using google web speech has syntax not supported by Talon conformer and a current parser.
  "AndreasArvidsson/andreas-talon/core/modes/dictation_mode_sv.talon",
]);

function shouldSkipExampleFile(testFile) {
  return SKIPPED_EXAMPLE_FILES.has(testFile.replaceAll("\\", "/"));
}

function getRelativeTestPath(testDir, testFile) {
  const testsDir = path.dirname(path.dirname(testDir));
  return path.relative(testsDir, testFile);
}

describe.each(MODES)("examples [%s]", (mode) => {
  let parser;

  beforeEach(async () => {
    parser = await createParser(mode);
  });

  describe.each(TEST_DIRS)("%s", (testDir) => {
    const testFiles = TEST_DATA[testDir]
      .map((testFile) => [getRelativeTestPath(testDir, testFile), testFile])
      .filter(([relativePath]) => !shouldSkipExampleFile(relativePath));

    it.each(testFiles)("%s", (relativePath, testFile) => {
      const sourceCode = fs.readFileSync(testFile, "utf8");
      const tree = parser.parse(sourceCode);
      expect(tree).toBeDefined();
      expect(tree.rootNode.hasError).toBe(false);
    });
  });
});
