%{
    #include "lexer.h"
%}

%%

"INT"           {return (INT_DECLARATOR);}
([0-9])+        {return (INT);}
[ \t\n]         {;}
.               {return (LEX_ERROR);}

%%

int yywrap(void) {
    return 1;
}