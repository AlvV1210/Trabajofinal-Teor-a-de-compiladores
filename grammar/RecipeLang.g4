grammar RecipeLang;

// Raíz: se mantiene el nombre 'program' porque el C++ llama parser.program()
program
    : recipeStmt+ EOF
    ;

// =============================
// DECLARACIÓN DE RECETA (ORDEN FIJO A2)
// =============================
//
// Orden dentro de { }:
//   1) rinde
//   2) tiempo_preparacion
//   3) tiempo_coccion
//   4) tags
//   5) ingredientes { ... }
//   6) pasos { ... }
//   7) nutricion { ... }
//
recipeStmt
    : 'receta' STRING '{'
        rindeDecl
        tiempoPrepDecl
        tiempoCoccDecl
        tagsDecl
        ingredientesBlock
        pasosBlock
        nutricionBlock
      '}'
    ;

// -----------------------------
// Metadatos básicos
// -----------------------------
rindeDecl
    : 'rinde' INT ('porciones' | 'porcion')?
    ;

tiempoPrepDecl
    : 'tiempo_preparacion' INT ('minutos' | 'minuto')?
    ;

tiempoCoccDecl
    : 'tiempo_coccion' INT ('minutos' | 'minuto')?
    ;

// -----------------------------
// Tags de la receta
// Ej: tags: [cena, italiana, "sin gluten"]
// -----------------------------
tagsDecl
    : 'tags' ':' '[' tag (',' tag)* ']'
    ;

tag
    : ID
    | STRING
    ;

// -----------------------------
// Bloque de ingredientes
// -----------------------------
ingredientesBlock
    : 'ingredientes' '{' ingredientStmt* '}'
    ;

ingredientStmt
    : 'ingrediente' ID
      'cantidad' AMOUNT
      'costo'   FLOAT
      'calorias' INT
    ;

// -----------------------------
// Bloque de pasos
// -----------------------------
pasosBlock
    : 'pasos' '{' stepStmt* '}'
    ;

stepStmt
    : 'paso' INT
      'descripcion' STRING
      ('usa' ID (',' ID)*)?
      ('depende_de' INT (',' INT)*)?
    ;

// -----------------------------
// Bloque de nutrición
// -----------------------------
//
// Se conectan con los métodos ya existentes en tu CodegenVisitor:
//
//   visitTotalCostStmt      -> 'total_costo'
//   visitTotalCaloriesStmt  -> 'total_calorias'
//
nutricionBlock
    : 'nutricion' '{'
        totalCostStmt?
        totalCaloriesStmt?
      '}'
    ;

totalCostStmt
    : 'total_costo'
    ;

totalCaloriesStmt
    : 'total_calorias'
    ;

// =============================
// REGLAS LÉXICAS
// =============================
ID      : [a-zA-Z_][a-zA-Z_0-9]* ;
FLOAT   : [0-9]+ '.' [0-9]* ;
INT     : [0-9]+ ;
AMOUNT  : [0-9]+[a-zA-Z]+ ;      // Ej: 200g, 50ml, 3tbsp
STRING  : '"' (~["\r\n])* '"' ;

WS      : [ \t\r\n]+ -> skip ;
