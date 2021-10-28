#ifndef _LEXER
//Environment macros
#define VERSION "001A"
#define MAX_LINE_LENGTH 512


//LEXER TOKENS
#define DECLARATOR 0x1
#define INT 0x2
#define IDENTIFIER 0x3
#define ASSIGN 0x4
#define STRING 0x6
#define APPROXIMATOR 0x7
#define PAREN_OPEN 0x8
#define PAREN_CLOSE 0x9
#define BRACKET_OPEN 0xA
#define BRACKET_CLOSE 0xB
#define BRACE_OPEN 0xC
#define BRACE_CLOSE 0xD
#define DEVISION_OPR 0xE
#define MULT_OPR 0xF
#define ADDITION_OPR 0x10
#define SUBTRACTION_OPR 0x11
#define MODULUS_OPR 0x12
#define LINE_END 0x13


//Lex error
#define LEX_ERROR 0xFFFF

//Functions
int lex(char line[], int tokens[], int line_length);
#define _LEXER
#endif