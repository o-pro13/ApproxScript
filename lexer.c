/*
--APPROX SCRIPT--
Version: 000A = 0.0.0-A
Date: October-19-2021

--lexer.c--
Version:S(lexer)0.0.0-A = S000A

Author: Olivier van Asperen
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


#include "lexer.h"

//declare external variables
extern int yylex();
extern int yylineno;
extern FILE * yyin;
extern char * yytext;

//delcare token type names in order
char * TOKENS[] = {
    NULL, 
    "INT_DECLARATOR", 
    "INT", 
    "IDENTIFIER", 
    "ASSIGN", 
    "OPERATOR", 
    "STRING"};


 void lex(char line[], int * tokens[]) {
    //declare token variables for lexing
    int declarator_token, value_token;

    //-load LINE into YYIN-
    /*YYIN is of type FILE; hence this workaround to load LINE into YYIN*/
    
    //tempfile for storing LINE
    FILE * line_temp_file = tmpfile();
    //store line in tempfile
    for (int i = 0; i < strlen(line); i++) {
        fputc(line[i], line_temp_file);
    }
    //rewind pointer for LINE_TEMP_FILE
    rewind(line_temp_file);
    //write LINE_TEMP_FILE to YYIN
    yyin = line_temp_file;

    int token = yylex();
    //loop through tokens
    while(token) {
        if (token == LEX_ERROR){
            printf("SyntaxError in line %d; unexpexted char: [%s]", yylineno, yytext);
        }
        printf("%d\n", token);
        token = yylex();
    }
}
