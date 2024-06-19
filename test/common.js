const { spawnSync } = require('child_process');
const fs = require('fs');
const packageJson = require('../package.json');
const path = require('path');
const ParserNode = require('tree-sitter');
const ParserWasm = require('web-tree-sitter');

function getTestModes() {
  const MODES = ['node', 'wasm'];
  return MODES.includes(process.env.MODE) ? [process.env.MODE] : MODES;
}

async function createParserNode() {
  const pathToTreeSitterTalonNode = `../prebuilds/${process.platform}-${process.arch}/tree-sitter-talon.node`
  const TalonNode = require(pathToTreeSitterTalonNode);
  return new ParserNode().setLanguage(TalonNode);
}

async function createParserWasm() {
  await ParserWasm.init();
  const pathToTreeSitterTalonWasm = path.resolve(__dirname, '..', 'tree-sitter-talon.wasm')
  const TalonWasm = await ParserWasm.Language.load(pathToTreeSitterTalonWasm);
  return new ParserWasm().setLanguage(TalonWasm);
}

async function createParser(MODE) {
  switch (MODE) {
    // Load tree-sitter and tree-sitter-talon.node
    case 'node': {
      return await createParserNode();
    };
    // Load web-tree-sitter and tree-sitter-talon.wasm
    case 'wasm': {
      return await createParserWasm();
    };
  }
}

const RE_GITHUB_URL = /^github:(?<user>[^/]+)\/(?<repo>[^#]+)#(?<hash>.+)$/;
const TEST_DATA_DIR = path.join(__dirname, 'data');

function fetchTestDataDirectory(url) {
  const match = url.match(RE_GITHUB_URL);
  if (match == undefined) {
    throw Error(`Invalid test data URL: ${url}`);
  }
  const { user, repo, hash } = match.groups;
  if (!fs.existsSync(TEST_DATA_DIR)) {
    fs.mkdirSync(TEST_DATA_DIR, { recursive: true });
  }
  const dir = path.join(TEST_DATA_DIR, user, repo);
  let result;
  if (!fs.existsSync(dir)) {
    result = spawnSync('git', ['clone', `https://github.com/${user}/${repo}`, dir]);
    if (result.status !== 0) {
      throw Error(`Could not clone ${url}: ${JSON.stringify(result)}`);
    }
  }
  result = spawnSync('git', ['fetch', '--quiet'], { cwd: dir });
  if (result.status !== 0) {
    throw Error(`Could not fetch ${url}: ${JSON.stringify(result)}`);
  }
  spawnSync('git', ['reset', '--hard', hash, '--quiet'], { cwd: dir });
  if (result.status !== 0) {
    throw Error(`Could not reset ${url}: ${JSON.stringify(result)}`);
  }
  return dir;
}

function fetchTestDataFiles(dir) {
  const files = [];
  for (const fileName of fs.readdirSync(dir)) {
    const filePath = path.join(dir, fileName);
    const exists = fs.existsSync(filePath);
    const stat = fs.statSync(filePath, { throwIfNoEntry: false });
    const isFile = stat !== undefined && stat.isFile();
    const isDirectory = stat !== undefined && stat.isDirectory();
    const isTalon = path.extname(filePath) === '.talon';
    if (exists && isFile && isTalon) {
      files.push(filePath);
    } else if (exists && isDirectory) {
      files.push(...fetchTestDataFiles(filePath));
    }
  }
  return files;
}

function fetchAllTestDataDirectories() {
  const urls = packageJson?.['tree-sitter-talon']?.['tested-with'];
  const dirs = [];
  if (urls !== undefined && Array.isArray(urls)) {
    for (const url of urls) {
      dirs.push(fetchTestDataDirectory(url));
    }
  }
  return dirs;
}

function fetchAllTestData() {
  const dirs = fetchAllTestDataDirectories();
  const dirsAndFiles = dirs.map((testDataDir) => [testDataDir, fetchTestDataFiles(testDataDir)]);
  return Object.fromEntries(dirsAndFiles);
}

module.exports = {
  createParser,
  createParserNode,
  createParserWasm,
  fetchAllTestData,
  fetchAllTestDataDirectories,
  fetchTestDataDirectory,
  fetchTestDataFiles,
  getTestModes,
};
