/*
--APPROX SCRIPT--
Version: 000A = 0.0.0-A
Date: October-19-2021

--lexer.c--
Version:S(lexer)0.0.0-A = S000A

Author: Olivier van Asperen
*/

#include <stdio.h>

#include "lexer.h"

extern int yylex();
extern int yylineno;
extern char * yytext;

char * TOKENS[] = {NULL, "INT_DECLARATOR", "INT"};


void lex(char line[MAX_LINE_LENGTH]) {
    int declarator_token, value_token;

    declarator_token = yylex();
    
}
