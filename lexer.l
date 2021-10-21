%{
    #include "lexer.h"
%}

%%

([A-Z])+        {return (DECLARATOR);}
([a-z])+        {return (IDENTIFIER);}
=               {return (ASSIGN);}
([0-9])+        {return (INT);}
[ \t\n]         {;}
.               {return (LEX_ERROR);}

%%

int yywrap(void) {
    return 1;
}