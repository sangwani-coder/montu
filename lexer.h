#ifndef LEXER
#define LEXER
typedef enum {
    TOKEN_INT,
    TOKEN_IDENTIFIER,
    TOKEN_PLUS,
    TOKEN_MINUS,
    TOKEN_MULTIPLY,
    TOKEN_DIVIDE,
    TOKEN_ASSIGN,
    TOKEN_IF,
    TOKEN_ELSE,
    TOKEN_WHILE,
    TOKEN_LPAREN,
    TOKEN_RPAREN,
    TOKEN_LBRACE,
    TOKEN_RBRACE,
    TOKEN_SEMICOLON,
    TOKEN_EOF
} TokenType;

// Token struct
typedef struct {
    TokenType type;
    char* lexeme;
} Token;

Token current_token;

// Forward declarations
void parse_program();
void parse_statement();
void parse_assignment();
void parse_expression();
#endif
