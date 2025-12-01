
// Generated from ../../grammar/RecipeLang.g4 by ANTLR 4.13.2


#include "RecipeLangListener.h"
#include "RecipeLangVisitor.h"

#include "RecipeLangParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct RecipeLangParserStaticData final {
  RecipeLangParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RecipeLangParserStaticData(const RecipeLangParserStaticData&) = delete;
  RecipeLangParserStaticData(RecipeLangParserStaticData&&) = delete;
  RecipeLangParserStaticData& operator=(const RecipeLangParserStaticData&) = delete;
  RecipeLangParserStaticData& operator=(RecipeLangParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag recipelangParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<RecipeLangParserStaticData> recipelangParserStaticData = nullptr;

void recipelangParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (recipelangParserStaticData != nullptr) {
    return;
  }
#else
  assert(recipelangParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<RecipeLangParserStaticData>(
    std::vector<std::string>{
      "program", "recipeStmt", "rindeDecl", "tiempoPrepDecl", "tiempoCoccDecl", 
      "tagsDecl", "tag", "ingredientesBlock", "ingredientStmt", "pasosBlock", 
      "stepStmt", "nutricionBlock", "totalCostStmt", "totalCaloriesStmt"
    },
    std::vector<std::string>{
      "", "'receta'", "'{'", "'}'", "'rinde'", "'porciones'", "'porcion'", 
      "'tiempo_preparacion'", "'minutos'", "'minuto'", "'tiempo_coccion'", 
      "'tags'", "':'", "'['", "','", "']'", "'ingredientes'", "'ingrediente'", 
      "'cantidad'", "'costo'", "'calorias'", "'pasos'", "'paso'", "'descripcion'", 
      "'usa'", "'depende_de'", "'nutricion'", "'total_costo'", "'total_calorias'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "ID", "FLOAT", "INT", 
      "AMOUNT", "STRING", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,34,147,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,4,0,
  	30,8,0,11,0,12,0,31,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,2,1,2,1,2,3,2,51,8,2,1,3,1,3,1,3,3,3,56,8,3,1,4,1,4,1,4,3,4,61,
  	8,4,1,5,1,5,1,5,1,5,1,5,1,5,5,5,69,8,5,10,5,12,5,72,9,5,1,5,1,5,1,6,1,
  	6,1,7,1,7,1,7,5,7,81,8,7,10,7,12,7,84,9,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,1,8,1,9,1,9,1,9,5,9,100,8,9,10,9,12,9,103,9,9,1,9,1,9,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,1,10,5,10,115,8,10,10,10,12,10,118,9,10,
  	3,10,120,8,10,1,10,1,10,1,10,1,10,5,10,126,8,10,10,10,12,10,129,9,10,
  	3,10,131,8,10,1,11,1,11,1,11,3,11,136,8,11,1,11,3,11,139,8,11,1,11,1,
  	11,1,12,1,12,1,13,1,13,1,13,0,0,14,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,0,3,1,0,5,6,1,0,8,9,2,0,29,29,33,33,145,0,29,1,0,0,0,2,35,1,0,0,0,
  	4,47,1,0,0,0,6,52,1,0,0,0,8,57,1,0,0,0,10,62,1,0,0,0,12,75,1,0,0,0,14,
  	77,1,0,0,0,16,87,1,0,0,0,18,96,1,0,0,0,20,106,1,0,0,0,22,132,1,0,0,0,
  	24,142,1,0,0,0,26,144,1,0,0,0,28,30,3,2,1,0,29,28,1,0,0,0,30,31,1,0,0,
  	0,31,29,1,0,0,0,31,32,1,0,0,0,32,33,1,0,0,0,33,34,5,0,0,1,34,1,1,0,0,
  	0,35,36,5,1,0,0,36,37,5,33,0,0,37,38,5,2,0,0,38,39,3,4,2,0,39,40,3,6,
  	3,0,40,41,3,8,4,0,41,42,3,10,5,0,42,43,3,14,7,0,43,44,3,18,9,0,44,45,
  	3,22,11,0,45,46,5,3,0,0,46,3,1,0,0,0,47,48,5,4,0,0,48,50,5,31,0,0,49,
  	51,7,0,0,0,50,49,1,0,0,0,50,51,1,0,0,0,51,5,1,0,0,0,52,53,5,7,0,0,53,
  	55,5,31,0,0,54,56,7,1,0,0,55,54,1,0,0,0,55,56,1,0,0,0,56,7,1,0,0,0,57,
  	58,5,10,0,0,58,60,5,31,0,0,59,61,7,1,0,0,60,59,1,0,0,0,60,61,1,0,0,0,
  	61,9,1,0,0,0,62,63,5,11,0,0,63,64,5,12,0,0,64,65,5,13,0,0,65,70,3,12,
  	6,0,66,67,5,14,0,0,67,69,3,12,6,0,68,66,1,0,0,0,69,72,1,0,0,0,70,68,1,
  	0,0,0,70,71,1,0,0,0,71,73,1,0,0,0,72,70,1,0,0,0,73,74,5,15,0,0,74,11,
  	1,0,0,0,75,76,7,2,0,0,76,13,1,0,0,0,77,78,5,16,0,0,78,82,5,2,0,0,79,81,
  	3,16,8,0,80,79,1,0,0,0,81,84,1,0,0,0,82,80,1,0,0,0,82,83,1,0,0,0,83,85,
  	1,0,0,0,84,82,1,0,0,0,85,86,5,3,0,0,86,15,1,0,0,0,87,88,5,17,0,0,88,89,
  	5,29,0,0,89,90,5,18,0,0,90,91,5,32,0,0,91,92,5,19,0,0,92,93,5,30,0,0,
  	93,94,5,20,0,0,94,95,5,31,0,0,95,17,1,0,0,0,96,97,5,21,0,0,97,101,5,2,
  	0,0,98,100,3,20,10,0,99,98,1,0,0,0,100,103,1,0,0,0,101,99,1,0,0,0,101,
  	102,1,0,0,0,102,104,1,0,0,0,103,101,1,0,0,0,104,105,5,3,0,0,105,19,1,
  	0,0,0,106,107,5,22,0,0,107,108,5,31,0,0,108,109,5,23,0,0,109,119,5,33,
  	0,0,110,111,5,24,0,0,111,116,5,29,0,0,112,113,5,14,0,0,113,115,5,29,0,
  	0,114,112,1,0,0,0,115,118,1,0,0,0,116,114,1,0,0,0,116,117,1,0,0,0,117,
  	120,1,0,0,0,118,116,1,0,0,0,119,110,1,0,0,0,119,120,1,0,0,0,120,130,1,
  	0,0,0,121,122,5,25,0,0,122,127,5,31,0,0,123,124,5,14,0,0,124,126,5,31,
  	0,0,125,123,1,0,0,0,126,129,1,0,0,0,127,125,1,0,0,0,127,128,1,0,0,0,128,
  	131,1,0,0,0,129,127,1,0,0,0,130,121,1,0,0,0,130,131,1,0,0,0,131,21,1,
  	0,0,0,132,133,5,26,0,0,133,135,5,2,0,0,134,136,3,24,12,0,135,134,1,0,
  	0,0,135,136,1,0,0,0,136,138,1,0,0,0,137,139,3,26,13,0,138,137,1,0,0,0,
  	138,139,1,0,0,0,139,140,1,0,0,0,140,141,5,3,0,0,141,23,1,0,0,0,142,143,
  	5,27,0,0,143,25,1,0,0,0,144,145,5,28,0,0,145,27,1,0,0,0,13,31,50,55,60,
  	70,82,101,116,119,127,130,135,138
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  recipelangParserStaticData = std::move(staticData);
}

}

RecipeLangParser::RecipeLangParser(TokenStream *input) : RecipeLangParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

RecipeLangParser::RecipeLangParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  RecipeLangParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *recipelangParserStaticData->atn, recipelangParserStaticData->decisionToDFA, recipelangParserStaticData->sharedContextCache, options);
}

RecipeLangParser::~RecipeLangParser() {
  delete _interpreter;
}

const atn::ATN& RecipeLangParser::getATN() const {
  return *recipelangParserStaticData->atn;
}

std::string RecipeLangParser::getGrammarFileName() const {
  return "RecipeLang.g4";
}

const std::vector<std::string>& RecipeLangParser::getRuleNames() const {
  return recipelangParserStaticData->ruleNames;
}

const dfa::Vocabulary& RecipeLangParser::getVocabulary() const {
  return recipelangParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView RecipeLangParser::getSerializedATN() const {
  return recipelangParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

RecipeLangParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeLangParser::ProgramContext::EOF() {
  return getToken(RecipeLangParser::EOF, 0);
}

std::vector<RecipeLangParser::RecipeStmtContext *> RecipeLangParser::ProgramContext::recipeStmt() {
  return getRuleContexts<RecipeLangParser::RecipeStmtContext>();
}

RecipeLangParser::RecipeStmtContext* RecipeLangParser::ProgramContext::recipeStmt(size_t i) {
  return getRuleContext<RecipeLangParser::RecipeStmtContext>(i);
}


size_t RecipeLangParser::ProgramContext::getRuleIndex() const {
  return RecipeLangParser::RuleProgram;
}

void RecipeLangParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void RecipeLangParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any RecipeLangParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeLangVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

RecipeLangParser::ProgramContext* RecipeLangParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, RecipeLangParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(28);
      recipeStmt();
      setState(31); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == RecipeLangParser::T__0);
    setState(33);
    match(RecipeLangParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecipeStmtContext ------------------------------------------------------------------

RecipeLangParser::RecipeStmtContext::RecipeStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeLangParser::RecipeStmtContext::STRING() {
  return getToken(RecipeLangParser::STRING, 0);
}

RecipeLangParser::RindeDeclContext* RecipeLangParser::RecipeStmtContext::rindeDecl() {
  return getRuleContext<RecipeLangParser::RindeDeclContext>(0);
}

RecipeLangParser::TiempoPrepDeclContext* RecipeLangParser::RecipeStmtContext::tiempoPrepDecl() {
  return getRuleContext<RecipeLangParser::TiempoPrepDeclContext>(0);
}

RecipeLangParser::TiempoCoccDeclContext* RecipeLangParser::RecipeStmtContext::tiempoCoccDecl() {
  return getRuleContext<RecipeLangParser::TiempoCoccDeclContext>(0);
}

RecipeLangParser::TagsDeclContext* RecipeLangParser::RecipeStmtContext::tagsDecl() {
  return getRuleContext<RecipeLangParser::TagsDeclContext>(0);
}

RecipeLangParser::IngredientesBlockContext* RecipeLangParser::RecipeStmtContext::ingredientesBlock() {
  return getRuleContext<RecipeLangParser::IngredientesBlockContext>(0);
}

RecipeLangParser::PasosBlockContext* RecipeLangParser::RecipeStmtContext::pasosBlock() {
  return getRuleContext<RecipeLangParser::PasosBlockContext>(0);
}

RecipeLangParser::NutricionBlockContext* RecipeLangParser::RecipeStmtContext::nutricionBlock() {
  return getRuleContext<RecipeLangParser::NutricionBlockContext>(0);
}


size_t RecipeLangParser::RecipeStmtContext::getRuleIndex() const {
  return RecipeLangParser::RuleRecipeStmt;
}

void RecipeLangParser::RecipeStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRecipeStmt(this);
}

void RecipeLangParser::RecipeStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRecipeStmt(this);
}


std::any RecipeLangParser::RecipeStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeLangVisitor*>(visitor))
    return parserVisitor->visitRecipeStmt(this);
  else
    return visitor->visitChildren(this);
}

RecipeLangParser::RecipeStmtContext* RecipeLangParser::recipeStmt() {
  RecipeStmtContext *_localctx = _tracker.createInstance<RecipeStmtContext>(_ctx, getState());
  enterRule(_localctx, 2, RecipeLangParser::RuleRecipeStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    match(RecipeLangParser::T__0);
    setState(36);
    match(RecipeLangParser::STRING);
    setState(37);
    match(RecipeLangParser::T__1);
    setState(38);
    rindeDecl();
    setState(39);
    tiempoPrepDecl();
    setState(40);
    tiempoCoccDecl();
    setState(41);
    tagsDecl();
    setState(42);
    ingredientesBlock();
    setState(43);
    pasosBlock();
    setState(44);
    nutricionBlock();
    setState(45);
    match(RecipeLangParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RindeDeclContext ------------------------------------------------------------------

RecipeLangParser::RindeDeclContext::RindeDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeLangParser::RindeDeclContext::INT() {
  return getToken(RecipeLangParser::INT, 0);
}


size_t RecipeLangParser::RindeDeclContext::getRuleIndex() const {
  return RecipeLangParser::RuleRindeDecl;
}

void RecipeLangParser::RindeDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRindeDecl(this);
}

void RecipeLangParser::RindeDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRindeDecl(this);
}


std::any RecipeLangParser::RindeDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeLangVisitor*>(visitor))
    return parserVisitor->visitRindeDecl(this);
  else
    return visitor->visitChildren(this);
}

RecipeLangParser::RindeDeclContext* RecipeLangParser::rindeDecl() {
  RindeDeclContext *_localctx = _tracker.createInstance<RindeDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, RecipeLangParser::RuleRindeDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    match(RecipeLangParser::T__3);
    setState(48);
    match(RecipeLangParser::INT);
    setState(50);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeLangParser::T__4

    || _la == RecipeLangParser::T__5) {
      setState(49);
      _la = _input->LA(1);
      if (!(_la == RecipeLangParser::T__4

      || _la == RecipeLangParser::T__5)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TiempoPrepDeclContext ------------------------------------------------------------------

RecipeLangParser::TiempoPrepDeclContext::TiempoPrepDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeLangParser::TiempoPrepDeclContext::INT() {
  return getToken(RecipeLangParser::INT, 0);
}


size_t RecipeLangParser::TiempoPrepDeclContext::getRuleIndex() const {
  return RecipeLangParser::RuleTiempoPrepDecl;
}

void RecipeLangParser::TiempoPrepDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTiempoPrepDecl(this);
}

void RecipeLangParser::TiempoPrepDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTiempoPrepDecl(this);
}


std::any RecipeLangParser::TiempoPrepDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeLangVisitor*>(visitor))
    return parserVisitor->visitTiempoPrepDecl(this);
  else
    return visitor->visitChildren(this);
}

RecipeLangParser::TiempoPrepDeclContext* RecipeLangParser::tiempoPrepDecl() {
  TiempoPrepDeclContext *_localctx = _tracker.createInstance<TiempoPrepDeclContext>(_ctx, getState());
  enterRule(_localctx, 6, RecipeLangParser::RuleTiempoPrepDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(RecipeLangParser::T__6);
    setState(53);
    match(RecipeLangParser::INT);
    setState(55);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeLangParser::T__7

    || _la == RecipeLangParser::T__8) {
      setState(54);
      _la = _input->LA(1);
      if (!(_la == RecipeLangParser::T__7

      || _la == RecipeLangParser::T__8)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TiempoCoccDeclContext ------------------------------------------------------------------

RecipeLangParser::TiempoCoccDeclContext::TiempoCoccDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeLangParser::TiempoCoccDeclContext::INT() {
  return getToken(RecipeLangParser::INT, 0);
}


size_t RecipeLangParser::TiempoCoccDeclContext::getRuleIndex() const {
  return RecipeLangParser::RuleTiempoCoccDecl;
}

void RecipeLangParser::TiempoCoccDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTiempoCoccDecl(this);
}

void RecipeLangParser::TiempoCoccDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTiempoCoccDecl(this);
}


std::any RecipeLangParser::TiempoCoccDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeLangVisitor*>(visitor))
    return parserVisitor->visitTiempoCoccDecl(this);
  else
    return visitor->visitChildren(this);
}

RecipeLangParser::TiempoCoccDeclContext* RecipeLangParser::tiempoCoccDecl() {
  TiempoCoccDeclContext *_localctx = _tracker.createInstance<TiempoCoccDeclContext>(_ctx, getState());
  enterRule(_localctx, 8, RecipeLangParser::RuleTiempoCoccDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57);
    match(RecipeLangParser::T__9);
    setState(58);
    match(RecipeLangParser::INT);
    setState(60);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeLangParser::T__7

    || _la == RecipeLangParser::T__8) {
      setState(59);
      _la = _input->LA(1);
      if (!(_la == RecipeLangParser::T__7

      || _la == RecipeLangParser::T__8)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TagsDeclContext ------------------------------------------------------------------

RecipeLangParser::TagsDeclContext::TagsDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RecipeLangParser::TagContext *> RecipeLangParser::TagsDeclContext::tag() {
  return getRuleContexts<RecipeLangParser::TagContext>();
}

RecipeLangParser::TagContext* RecipeLangParser::TagsDeclContext::tag(size_t i) {
  return getRuleContext<RecipeLangParser::TagContext>(i);
}


size_t RecipeLangParser::TagsDeclContext::getRuleIndex() const {
  return RecipeLangParser::RuleTagsDecl;
}

void RecipeLangParser::TagsDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTagsDecl(this);
}

void RecipeLangParser::TagsDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTagsDecl(this);
}


std::any RecipeLangParser::TagsDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeLangVisitor*>(visitor))
    return parserVisitor->visitTagsDecl(this);
  else
    return visitor->visitChildren(this);
}

RecipeLangParser::TagsDeclContext* RecipeLangParser::tagsDecl() {
  TagsDeclContext *_localctx = _tracker.createInstance<TagsDeclContext>(_ctx, getState());
  enterRule(_localctx, 10, RecipeLangParser::RuleTagsDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(RecipeLangParser::T__10);
    setState(63);
    match(RecipeLangParser::T__11);
    setState(64);
    match(RecipeLangParser::T__12);
    setState(65);
    tag();
    setState(70);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeLangParser::T__13) {
      setState(66);
      match(RecipeLangParser::T__13);
      setState(67);
      tag();
      setState(72);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(73);
    match(RecipeLangParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TagContext ------------------------------------------------------------------

RecipeLangParser::TagContext::TagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeLangParser::TagContext::ID() {
  return getToken(RecipeLangParser::ID, 0);
}

tree::TerminalNode* RecipeLangParser::TagContext::STRING() {
  return getToken(RecipeLangParser::STRING, 0);
}


size_t RecipeLangParser::TagContext::getRuleIndex() const {
  return RecipeLangParser::RuleTag;
}

void RecipeLangParser::TagContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTag(this);
}

void RecipeLangParser::TagContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTag(this);
}


std::any RecipeLangParser::TagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeLangVisitor*>(visitor))
    return parserVisitor->visitTag(this);
  else
    return visitor->visitChildren(this);
}

RecipeLangParser::TagContext* RecipeLangParser::tag() {
  TagContext *_localctx = _tracker.createInstance<TagContext>(_ctx, getState());
  enterRule(_localctx, 12, RecipeLangParser::RuleTag);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    _la = _input->LA(1);
    if (!(_la == RecipeLangParser::ID

    || _la == RecipeLangParser::STRING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IngredientesBlockContext ------------------------------------------------------------------

RecipeLangParser::IngredientesBlockContext::IngredientesBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RecipeLangParser::IngredientStmtContext *> RecipeLangParser::IngredientesBlockContext::ingredientStmt() {
  return getRuleContexts<RecipeLangParser::IngredientStmtContext>();
}

RecipeLangParser::IngredientStmtContext* RecipeLangParser::IngredientesBlockContext::ingredientStmt(size_t i) {
  return getRuleContext<RecipeLangParser::IngredientStmtContext>(i);
}


size_t RecipeLangParser::IngredientesBlockContext::getRuleIndex() const {
  return RecipeLangParser::RuleIngredientesBlock;
}

void RecipeLangParser::IngredientesBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIngredientesBlock(this);
}

void RecipeLangParser::IngredientesBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIngredientesBlock(this);
}


std::any RecipeLangParser::IngredientesBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeLangVisitor*>(visitor))
    return parserVisitor->visitIngredientesBlock(this);
  else
    return visitor->visitChildren(this);
}

RecipeLangParser::IngredientesBlockContext* RecipeLangParser::ingredientesBlock() {
  IngredientesBlockContext *_localctx = _tracker.createInstance<IngredientesBlockContext>(_ctx, getState());
  enterRule(_localctx, 14, RecipeLangParser::RuleIngredientesBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    match(RecipeLangParser::T__15);
    setState(78);
    match(RecipeLangParser::T__1);
    setState(82);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeLangParser::T__16) {
      setState(79);
      ingredientStmt();
      setState(84);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(85);
    match(RecipeLangParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IngredientStmtContext ------------------------------------------------------------------

RecipeLangParser::IngredientStmtContext::IngredientStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RecipeLangParser::IngredientStmtContext::ID() {
  return getToken(RecipeLangParser::ID, 0);
}

tree::TerminalNode* RecipeLangParser::IngredientStmtContext::AMOUNT() {
  return getToken(RecipeLangParser::AMOUNT, 0);
}

tree::TerminalNode* RecipeLangParser::IngredientStmtContext::FLOAT() {
  return getToken(RecipeLangParser::FLOAT, 0);
}

tree::TerminalNode* RecipeLangParser::IngredientStmtContext::INT() {
  return getToken(RecipeLangParser::INT, 0);
}


size_t RecipeLangParser::IngredientStmtContext::getRuleIndex() const {
  return RecipeLangParser::RuleIngredientStmt;
}

void RecipeLangParser::IngredientStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIngredientStmt(this);
}

void RecipeLangParser::IngredientStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIngredientStmt(this);
}


std::any RecipeLangParser::IngredientStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeLangVisitor*>(visitor))
    return parserVisitor->visitIngredientStmt(this);
  else
    return visitor->visitChildren(this);
}

RecipeLangParser::IngredientStmtContext* RecipeLangParser::ingredientStmt() {
  IngredientStmtContext *_localctx = _tracker.createInstance<IngredientStmtContext>(_ctx, getState());
  enterRule(_localctx, 16, RecipeLangParser::RuleIngredientStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    match(RecipeLangParser::T__16);
    setState(88);
    match(RecipeLangParser::ID);
    setState(89);
    match(RecipeLangParser::T__17);
    setState(90);
    match(RecipeLangParser::AMOUNT);
    setState(91);
    match(RecipeLangParser::T__18);
    setState(92);
    match(RecipeLangParser::FLOAT);
    setState(93);
    match(RecipeLangParser::T__19);
    setState(94);
    match(RecipeLangParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PasosBlockContext ------------------------------------------------------------------

RecipeLangParser::PasosBlockContext::PasosBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RecipeLangParser::StepStmtContext *> RecipeLangParser::PasosBlockContext::stepStmt() {
  return getRuleContexts<RecipeLangParser::StepStmtContext>();
}

RecipeLangParser::StepStmtContext* RecipeLangParser::PasosBlockContext::stepStmt(size_t i) {
  return getRuleContext<RecipeLangParser::StepStmtContext>(i);
}


size_t RecipeLangParser::PasosBlockContext::getRuleIndex() const {
  return RecipeLangParser::RulePasosBlock;
}

void RecipeLangParser::PasosBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPasosBlock(this);
}

void RecipeLangParser::PasosBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPasosBlock(this);
}


std::any RecipeLangParser::PasosBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeLangVisitor*>(visitor))
    return parserVisitor->visitPasosBlock(this);
  else
    return visitor->visitChildren(this);
}

RecipeLangParser::PasosBlockContext* RecipeLangParser::pasosBlock() {
  PasosBlockContext *_localctx = _tracker.createInstance<PasosBlockContext>(_ctx, getState());
  enterRule(_localctx, 18, RecipeLangParser::RulePasosBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    match(RecipeLangParser::T__20);
    setState(97);
    match(RecipeLangParser::T__1);
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == RecipeLangParser::T__21) {
      setState(98);
      stepStmt();
      setState(103);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(104);
    match(RecipeLangParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StepStmtContext ------------------------------------------------------------------

RecipeLangParser::StepStmtContext::StepStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> RecipeLangParser::StepStmtContext::INT() {
  return getTokens(RecipeLangParser::INT);
}

tree::TerminalNode* RecipeLangParser::StepStmtContext::INT(size_t i) {
  return getToken(RecipeLangParser::INT, i);
}

tree::TerminalNode* RecipeLangParser::StepStmtContext::STRING() {
  return getToken(RecipeLangParser::STRING, 0);
}

std::vector<tree::TerminalNode *> RecipeLangParser::StepStmtContext::ID() {
  return getTokens(RecipeLangParser::ID);
}

tree::TerminalNode* RecipeLangParser::StepStmtContext::ID(size_t i) {
  return getToken(RecipeLangParser::ID, i);
}


size_t RecipeLangParser::StepStmtContext::getRuleIndex() const {
  return RecipeLangParser::RuleStepStmt;
}

void RecipeLangParser::StepStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStepStmt(this);
}

void RecipeLangParser::StepStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStepStmt(this);
}


std::any RecipeLangParser::StepStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeLangVisitor*>(visitor))
    return parserVisitor->visitStepStmt(this);
  else
    return visitor->visitChildren(this);
}

RecipeLangParser::StepStmtContext* RecipeLangParser::stepStmt() {
  StepStmtContext *_localctx = _tracker.createInstance<StepStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, RecipeLangParser::RuleStepStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(RecipeLangParser::T__21);
    setState(107);
    match(RecipeLangParser::INT);
    setState(108);
    match(RecipeLangParser::T__22);
    setState(109);
    match(RecipeLangParser::STRING);
    setState(119);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeLangParser::T__23) {
      setState(110);
      match(RecipeLangParser::T__23);
      setState(111);
      match(RecipeLangParser::ID);
      setState(116);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RecipeLangParser::T__13) {
        setState(112);
        match(RecipeLangParser::T__13);
        setState(113);
        match(RecipeLangParser::ID);
        setState(118);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(130);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeLangParser::T__24) {
      setState(121);
      match(RecipeLangParser::T__24);
      setState(122);
      match(RecipeLangParser::INT);
      setState(127);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RecipeLangParser::T__13) {
        setState(123);
        match(RecipeLangParser::T__13);
        setState(124);
        match(RecipeLangParser::INT);
        setState(129);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NutricionBlockContext ------------------------------------------------------------------

RecipeLangParser::NutricionBlockContext::NutricionBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RecipeLangParser::TotalCostStmtContext* RecipeLangParser::NutricionBlockContext::totalCostStmt() {
  return getRuleContext<RecipeLangParser::TotalCostStmtContext>(0);
}

RecipeLangParser::TotalCaloriesStmtContext* RecipeLangParser::NutricionBlockContext::totalCaloriesStmt() {
  return getRuleContext<RecipeLangParser::TotalCaloriesStmtContext>(0);
}


size_t RecipeLangParser::NutricionBlockContext::getRuleIndex() const {
  return RecipeLangParser::RuleNutricionBlock;
}

void RecipeLangParser::NutricionBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNutricionBlock(this);
}

void RecipeLangParser::NutricionBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNutricionBlock(this);
}


std::any RecipeLangParser::NutricionBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeLangVisitor*>(visitor))
    return parserVisitor->visitNutricionBlock(this);
  else
    return visitor->visitChildren(this);
}

RecipeLangParser::NutricionBlockContext* RecipeLangParser::nutricionBlock() {
  NutricionBlockContext *_localctx = _tracker.createInstance<NutricionBlockContext>(_ctx, getState());
  enterRule(_localctx, 22, RecipeLangParser::RuleNutricionBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(RecipeLangParser::T__25);
    setState(133);
    match(RecipeLangParser::T__1);
    setState(135);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeLangParser::T__26) {
      setState(134);
      totalCostStmt();
    }
    setState(138);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RecipeLangParser::T__27) {
      setState(137);
      totalCaloriesStmt();
    }
    setState(140);
    match(RecipeLangParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TotalCostStmtContext ------------------------------------------------------------------

RecipeLangParser::TotalCostStmtContext::TotalCostStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t RecipeLangParser::TotalCostStmtContext::getRuleIndex() const {
  return RecipeLangParser::RuleTotalCostStmt;
}

void RecipeLangParser::TotalCostStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTotalCostStmt(this);
}

void RecipeLangParser::TotalCostStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTotalCostStmt(this);
}


std::any RecipeLangParser::TotalCostStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeLangVisitor*>(visitor))
    return parserVisitor->visitTotalCostStmt(this);
  else
    return visitor->visitChildren(this);
}

RecipeLangParser::TotalCostStmtContext* RecipeLangParser::totalCostStmt() {
  TotalCostStmtContext *_localctx = _tracker.createInstance<TotalCostStmtContext>(_ctx, getState());
  enterRule(_localctx, 24, RecipeLangParser::RuleTotalCostStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    match(RecipeLangParser::T__26);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TotalCaloriesStmtContext ------------------------------------------------------------------

RecipeLangParser::TotalCaloriesStmtContext::TotalCaloriesStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t RecipeLangParser::TotalCaloriesStmtContext::getRuleIndex() const {
  return RecipeLangParser::RuleTotalCaloriesStmt;
}

void RecipeLangParser::TotalCaloriesStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTotalCaloriesStmt(this);
}

void RecipeLangParser::TotalCaloriesStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RecipeLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTotalCaloriesStmt(this);
}


std::any RecipeLangParser::TotalCaloriesStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RecipeLangVisitor*>(visitor))
    return parserVisitor->visitTotalCaloriesStmt(this);
  else
    return visitor->visitChildren(this);
}

RecipeLangParser::TotalCaloriesStmtContext* RecipeLangParser::totalCaloriesStmt() {
  TotalCaloriesStmtContext *_localctx = _tracker.createInstance<TotalCaloriesStmtContext>(_ctx, getState());
  enterRule(_localctx, 26, RecipeLangParser::RuleTotalCaloriesStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    match(RecipeLangParser::T__27);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void RecipeLangParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  recipelangParserInitialize();
#else
  ::antlr4::internal::call_once(recipelangParserOnceFlag, recipelangParserInitialize);
#endif
}
