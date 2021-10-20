# makefile for ApproxScript 000A

#Compiler variables
CC = gcc
LEX = flex
CMPFLAGS = -c -g

#compile targets
ApproxScript: main.o lexer.o lex.yy.o
	$(CC) main.o lexer.o lex.yy.o -o ApproxScript

main.o : main.c lexer.h
	$(CC) $(CMPFLAGS) main.c

lexer.o: lexer.c lexer.h
	$(CC) $(CMPFLAGS) lexer.c

lex.yy.c: lexer.l
	$(LEX) lexer.l

lex.yy.o: lex.yy.c lexer.h
	$(CC) $(CMPFLAGS) lex.yy.c

clean:
	rm *.o ApproxScript