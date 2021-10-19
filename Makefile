# makefile for ApproxScript 000A

#Compiler variables
CC = gcc
LEX = flex
CMPFLAGS = -c -g


ApproxScript: main.o lexer.o
	$(CC) main.o lexer.o -o ApproxScript

main.o : main.c lexer.h
	$(CC) $(CMPFLAGS) main.c

lexer.o: lexer.c lexer.h
	$(CC) $(CMPFLAGS) lexer.c

clean:
	rm *.o ApproxScript