#ifndef LEXER
//Environment macros
#define VERSION "000A"
#define MAX_LINE_LENGTH 512


//LEXER TOKENS
#define INT_DECLARATOR 0x1
#define INT 0x2

//Lex error
#define LEX_ERROR 0xffff

//Functions
void lex(char line[]);
#define LEXER
#endif