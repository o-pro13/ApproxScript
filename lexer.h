#ifndef LEXER
    //Environment macros
    #define VERSION "000A"
    #define MAX_LINE_LENGTH 512

    //Lex tokens
    #define INT_DECLARATOR 0x1
    #define INT 0x2

    //Lex error
    #define LEX_ERROR 0xffff

    //Functions
    //TODO: update for refactor
    void lex(char line[MAX_LINE_LENGTH]);
    #define LEXER
#endif