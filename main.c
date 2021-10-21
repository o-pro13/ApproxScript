/*
--APPROX SCRIPT--
Version:000A = 0.0.0-A
Date: October-19-2021

Author: Olivier van Asperen
*/

//include built in headers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//include proprietary
#include "lexer.h"

int main(){
    //allocate memory for a code line
    char * line = malloc(MAX_LINE_LENGTH);

    //Get user input for that line
    printf(": ");
    fgets(line, MAX_LINE_LENGTH, stdin);

//  -Truncate line to inout length and free unused memory-
    int input_length = 0;
    //determine the length of the input
    for (int i = 0; i < MAX_LINE_LENGTH; i++) {
        input_length++;
        if (&line[i] == 0 || &line[i] == '\n'){
            break;
        }
    }
    //make new array of input length
    char refactored_line[input_length];
    //copy the input in LINE to REFACTORED_LINE
    for (int i = 0; i < input_length; i++) {
        refactored_line[i] = line[i];
    }
    //free memory for LINE
    free(line);
    
    int * tokens = malloc((size_t)input_length);

    lex(refactored_line, &tokens);

    return 0;
}