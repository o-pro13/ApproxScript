#ifndef LEXER
//Environment macros
#define VERSION "000A"
#define MAX_LINE_LENGTH 512


//LEXER TOKENS
#define DECLARATOR 0x1
#define INT 0x2
#define IDENTIFIER 0x3
#define ASSIGN 0x4
#define OPERATOR 0x5
#define STRING 0x6

//Lex error
#define LEX_ERROR 0xffff

//Functions
void lex(char line[]);
#define LEXER
#endif