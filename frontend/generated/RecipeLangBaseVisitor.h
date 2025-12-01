
// Generated from ../../grammar/RecipeLang.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "RecipeLangVisitor.h"


/**
 * This class provides an empty implementation of RecipeLangVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  RecipeLangBaseVisitor : public RecipeLangVisitor {
public:

  virtual std::any visitProgram(RecipeLangParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecipeStmt(RecipeLangParser::RecipeStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRindeDecl(RecipeLangParser::RindeDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTiempoPrepDecl(RecipeLangParser::TiempoPrepDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTiempoCoccDecl(RecipeLangParser::TiempoCoccDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTagsDecl(RecipeLangParser::TagsDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTag(RecipeLangParser::TagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIngredientesBlock(RecipeLangParser::IngredientesBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIngredientStmt(RecipeLangParser::IngredientStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPasosBlock(RecipeLangParser::PasosBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStepStmt(RecipeLangParser::StepStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNutricionBlock(RecipeLangParser::NutricionBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTotalCostStmt(RecipeLangParser::TotalCostStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTotalCaloriesStmt(RecipeLangParser::TotalCaloriesStmtContext *ctx) override {
    return visitChildren(ctx);
  }


};

