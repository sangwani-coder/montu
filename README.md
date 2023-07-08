# Montu programming language
 simple programming language

## Step 1: Define Language Syntax
[montu_language.syntax](./montu_language.syntax)
supports variable assignment, arithmetic operations, conditionals, and loops.

## Step 2: Lexical Analysis
Create create a lexer, which breaks down the input code into a sequence of tokens. Each token represents a meaningful unit in the language, such as keywords, identifiers, literals, or operators. For instance, in our language, tokens could include "if," "else," "while," variable names, numbers, operators like "+", "-", etc.

## Step 3: Parsing
After lexical analysis, we move on to the parser, which takes the sequence of tokens and builds an abstract syntax tree (AST). The AST represents the structure and semantics of the program. We define grammar rules using context-free grammar (CFG) notation and implement a recursive descent parser to generate the AST.

## Step 4: Semantic Analysis
Once we have the AST, we can perform semantic analysis to ensure the program is semantically correct. This step involves type checking, variable scoping, and other checks to catch potential errors.

## Step 5: Code Generation
Finally, we can generate code from the AST. In our case, since we're targeting C, we can emit C code as output. As you traverse the AST, you can generate the corresponding C code for each construct.

## Step 6: Building the Compiler
