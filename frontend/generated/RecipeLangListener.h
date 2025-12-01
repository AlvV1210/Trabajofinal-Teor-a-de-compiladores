
// Generated from ../../grammar/RecipeLang.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "RecipeLangParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by RecipeLangParser.
 */
class  RecipeLangListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(RecipeLangParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(RecipeLangParser::ProgramContext *ctx) = 0;

  virtual void enterRecipeStmt(RecipeLangParser::RecipeStmtContext *ctx) = 0;
  virtual void exitRecipeStmt(RecipeLangParser::RecipeStmtContext *ctx) = 0;

  virtual void enterRindeDecl(RecipeLangParser::RindeDeclContext *ctx) = 0;
  virtual void exitRindeDecl(RecipeLangParser::RindeDeclContext *ctx) = 0;

  virtual void enterTiempoPrepDecl(RecipeLangParser::TiempoPrepDeclContext *ctx) = 0;
  virtual void exitTiempoPrepDecl(RecipeLangParser::TiempoPrepDeclContext *ctx) = 0;

  virtual void enterTiempoCoccDecl(RecipeLangParser::TiempoCoccDeclContext *ctx) = 0;
  virtual void exitTiempoCoccDecl(RecipeLangParser::TiempoCoccDeclContext *ctx) = 0;

  virtual void enterTagsDecl(RecipeLangParser::TagsDeclContext *ctx) = 0;
  virtual void exitTagsDecl(RecipeLangParser::TagsDeclContext *ctx) = 0;

  virtual void enterTag(RecipeLangParser::TagContext *ctx) = 0;
  virtual void exitTag(RecipeLangParser::TagContext *ctx) = 0;

  virtual void enterIngredientesBlock(RecipeLangParser::IngredientesBlockContext *ctx) = 0;
  virtual void exitIngredientesBlock(RecipeLangParser::IngredientesBlockContext *ctx) = 0;

  virtual void enterIngredientStmt(RecipeLangParser::IngredientStmtContext *ctx) = 0;
  virtual void exitIngredientStmt(RecipeLangParser::IngredientStmtContext *ctx) = 0;

  virtual void enterPasosBlock(RecipeLangParser::PasosBlockContext *ctx) = 0;
  virtual void exitPasosBlock(RecipeLangParser::PasosBlockContext *ctx) = 0;

  virtual void enterStepStmt(RecipeLangParser::StepStmtContext *ctx) = 0;
  virtual void exitStepStmt(RecipeLangParser::StepStmtContext *ctx) = 0;

  virtual void enterNutricionBlock(RecipeLangParser::NutricionBlockContext *ctx) = 0;
  virtual void exitNutricionBlock(RecipeLangParser::NutricionBlockContext *ctx) = 0;

  virtual void enterTotalCostStmt(RecipeLangParser::TotalCostStmtContext *ctx) = 0;
  virtual void exitTotalCostStmt(RecipeLangParser::TotalCostStmtContext *ctx) = 0;

  virtual void enterTotalCaloriesStmt(RecipeLangParser::TotalCaloriesStmtContext *ctx) = 0;
  virtual void exitTotalCaloriesStmt(RecipeLangParser::TotalCaloriesStmtContext *ctx) = 0;


};

