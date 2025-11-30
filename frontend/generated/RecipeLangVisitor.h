
// Generated from ../../grammar/RecipeLang.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "RecipeLangParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by RecipeLangParser.
 */
class  RecipeLangVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by RecipeLangParser.
   */
    virtual std::any visitProgram(RecipeLangParser::ProgramContext *context) = 0;

    virtual std::any visitRecipeStmt(RecipeLangParser::RecipeStmtContext *context) = 0;

    virtual std::any visitRindeDecl(RecipeLangParser::RindeDeclContext *context) = 0;

    virtual std::any visitTiempoPrepDecl(RecipeLangParser::TiempoPrepDeclContext *context) = 0;

    virtual std::any visitTiempoCoccDecl(RecipeLangParser::TiempoCoccDeclContext *context) = 0;

    virtual std::any visitTagsDecl(RecipeLangParser::TagsDeclContext *context) = 0;

    virtual std::any visitTag(RecipeLangParser::TagContext *context) = 0;

    virtual std::any visitIngredientesBlock(RecipeLangParser::IngredientesBlockContext *context) = 0;

    virtual std::any visitIngredientStmt(RecipeLangParser::IngredientStmtContext *context) = 0;

    virtual std::any visitPasosBlock(RecipeLangParser::PasosBlockContext *context) = 0;

    virtual std::any visitStepStmt(RecipeLangParser::StepStmtContext *context) = 0;

    virtual std::any visitNutricionBlock(RecipeLangParser::NutricionBlockContext *context) = 0;

    virtual std::any visitTotalCostStmt(RecipeLangParser::TotalCostStmtContext *context) = 0;

    virtual std::any visitTotalCaloriesStmt(RecipeLangParser::TotalCaloriesStmtContext *context) = 0;


};

