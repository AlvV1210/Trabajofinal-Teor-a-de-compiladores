
// Generated from ../../grammar/RecipeLang.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  RecipeLangParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, ID = 29, FLOAT = 30, INT = 31, AMOUNT = 32, 
    STRING = 33, WS = 34
  };

  enum {
    RuleProgram = 0, RuleRecipeStmt = 1, RuleRindeDecl = 2, RuleTiempoPrepDecl = 3, 
    RuleTiempoCoccDecl = 4, RuleTagsDecl = 5, RuleTag = 6, RuleIngredientesBlock = 7, 
    RuleIngredientStmt = 8, RulePasosBlock = 9, RuleStepStmt = 10, RuleNutricionBlock = 11, 
    RuleTotalCostStmt = 12, RuleTotalCaloriesStmt = 13
  };

  explicit RecipeLangParser(antlr4::TokenStream *input);

  RecipeLangParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~RecipeLangParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class RecipeStmtContext;
  class RindeDeclContext;
  class TiempoPrepDeclContext;
  class TiempoCoccDeclContext;
  class TagsDeclContext;
  class TagContext;
  class IngredientesBlockContext;
  class IngredientStmtContext;
  class PasosBlockContext;
  class StepStmtContext;
  class NutricionBlockContext;
  class TotalCostStmtContext;
  class TotalCaloriesStmtContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<RecipeStmtContext *> recipeStmt();
    RecipeStmtContext* recipeStmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  RecipeStmtContext : public antlr4::ParserRuleContext {
  public:
    RecipeStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    RindeDeclContext *rindeDecl();
    TiempoPrepDeclContext *tiempoPrepDecl();
    TiempoCoccDeclContext *tiempoCoccDecl();
    TagsDeclContext *tagsDecl();
    IngredientesBlockContext *ingredientesBlock();
    PasosBlockContext *pasosBlock();
    NutricionBlockContext *nutricionBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecipeStmtContext* recipeStmt();

  class  RindeDeclContext : public antlr4::ParserRuleContext {
  public:
    RindeDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RindeDeclContext* rindeDecl();

  class  TiempoPrepDeclContext : public antlr4::ParserRuleContext {
  public:
    TiempoPrepDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TiempoPrepDeclContext* tiempoPrepDecl();

  class  TiempoCoccDeclContext : public antlr4::ParserRuleContext {
  public:
    TiempoCoccDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TiempoCoccDeclContext* tiempoCoccDecl();

  class  TagsDeclContext : public antlr4::ParserRuleContext {
  public:
    TagsDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TagContext *> tag();
    TagContext* tag(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TagsDeclContext* tagsDecl();

  class  TagContext : public antlr4::ParserRuleContext {
  public:
    TagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TagContext* tag();

  class  IngredientesBlockContext : public antlr4::ParserRuleContext {
  public:
    IngredientesBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IngredientStmtContext *> ingredientStmt();
    IngredientStmtContext* ingredientStmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IngredientesBlockContext* ingredientesBlock();

  class  IngredientStmtContext : public antlr4::ParserRuleContext {
  public:
    IngredientStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *AMOUNT();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IngredientStmtContext* ingredientStmt();

  class  PasosBlockContext : public antlr4::ParserRuleContext {
  public:
    PasosBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StepStmtContext *> stepStmt();
    StepStmtContext* stepStmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PasosBlockContext* pasosBlock();

  class  StepStmtContext : public antlr4::ParserRuleContext {
  public:
    StepStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    antlr4::tree::TerminalNode *STRING();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StepStmtContext* stepStmt();

  class  NutricionBlockContext : public antlr4::ParserRuleContext {
  public:
    NutricionBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TotalCostStmtContext *totalCostStmt();
    TotalCaloriesStmtContext *totalCaloriesStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NutricionBlockContext* nutricionBlock();

  class  TotalCostStmtContext : public antlr4::ParserRuleContext {
  public:
    TotalCostStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TotalCostStmtContext* totalCostStmt();

  class  TotalCaloriesStmtContext : public antlr4::ParserRuleContext {
  public:
    TotalCaloriesStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TotalCaloriesStmtContext* totalCaloriesStmt();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

