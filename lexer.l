%{
    #include "lexer.h"
%}

%%

([A-Z])+            {return (DECLARATOR);}
([a-z])+            {return (IDENTIFIER);}
\=                  {return (ASSIGN);}
([0-9])+            {return (INT);}
(^"[a-zA-Z]+"$)     {return (STRING);}
\~                  {return (APPROXIMATOR);}
\(                  {return (PAREN_OPEN);}
\)                  {return (PAREN_CLOSE);}
\[                  {return (BRACKET_OPEN);}
\]                  {return (BRACKET_CLOSE);}
\{                  {return (BRACE_OPEN);}
\}                  {return (BRACE_CLOSE);}
\/                  {return (DEVISION_OPR);}
\*                  {return (MULT_OPR);}
\+                  {return (ADDITION_OPR);}
\-                  {return (SUBTRACTION_OPR);}
\%                  {return (MODULUS_OPR);}
\;                  {return (LINE_END);}

[ \t\n]             {;}
.                   {return (LEX_ERROR);}

%%

int yywrap(void) {
    return 1;
}