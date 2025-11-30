
// Generated from ../../grammar/RecipeLang.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "RecipeLangListener.h"


/**
 * This class provides an empty implementation of RecipeLangListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  RecipeLangBaseListener : public RecipeLangListener {
public:

  virtual void enterProgram(RecipeLangParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(RecipeLangParser::ProgramContext * /*ctx*/) override { }

  virtual void enterRecipeStmt(RecipeLangParser::RecipeStmtContext * /*ctx*/) override { }
  virtual void exitRecipeStmt(RecipeLangParser::RecipeStmtContext * /*ctx*/) override { }

  virtual void enterRindeDecl(RecipeLangParser::RindeDeclContext * /*ctx*/) override { }
  virtual void exitRindeDecl(RecipeLangParser::RindeDeclContext * /*ctx*/) override { }

  virtual void enterTiempoPrepDecl(RecipeLangParser::TiempoPrepDeclContext * /*ctx*/) override { }
  virtual void exitTiempoPrepDecl(RecipeLangParser::TiempoPrepDeclContext * /*ctx*/) override { }

  virtual void enterTiempoCoccDecl(RecipeLangParser::TiempoCoccDeclContext * /*ctx*/) override { }
  virtual void exitTiempoCoccDecl(RecipeLangParser::TiempoCoccDeclContext * /*ctx*/) override { }

  virtual void enterTagsDecl(RecipeLangParser::TagsDeclContext * /*ctx*/) override { }
  virtual void exitTagsDecl(RecipeLangParser::TagsDeclContext * /*ctx*/) override { }

  virtual void enterTag(RecipeLangParser::TagContext * /*ctx*/) override { }
  virtual void exitTag(RecipeLangParser::TagContext * /*ctx*/) override { }

  virtual void enterIngredientesBlock(RecipeLangParser::IngredientesBlockContext * /*ctx*/) override { }
  virtual void exitIngredientesBlock(RecipeLangParser::IngredientesBlockContext * /*ctx*/) override { }

  virtual void enterIngredientStmt(RecipeLangParser::IngredientStmtContext * /*ctx*/) override { }
  virtual void exitIngredientStmt(RecipeLangParser::IngredientStmtContext * /*ctx*/) override { }

  virtual void enterPasosBlock(RecipeLangParser::PasosBlockContext * /*ctx*/) override { }
  virtual void exitPasosBlock(RecipeLangParser::PasosBlockContext * /*ctx*/) override { }

  virtual void enterStepStmt(RecipeLangParser::StepStmtContext * /*ctx*/) override { }
  virtual void exitStepStmt(RecipeLangParser::StepStmtContext * /*ctx*/) override { }

  virtual void enterNutricionBlock(RecipeLangParser::NutricionBlockContext * /*ctx*/) override { }
  virtual void exitNutricionBlock(RecipeLangParser::NutricionBlockContext * /*ctx*/) override { }

  virtual void enterTotalCostStmt(RecipeLangParser::TotalCostStmtContext * /*ctx*/) override { }
  virtual void exitTotalCostStmt(RecipeLangParser::TotalCostStmtContext * /*ctx*/) override { }

  virtual void enterTotalCaloriesStmt(RecipeLangParser::TotalCaloriesStmtContext * /*ctx*/) override { }
  virtual void exitTotalCaloriesStmt(RecipeLangParser::TotalCaloriesStmtContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

