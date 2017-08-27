# Makefile

.PHONY: all
all: main

main: main.o sugoroku.o
	gcc -Wall -o main main.o sugoroku.o

main.o: main.c
	gcc -c main.c

sugoroku.o: sugoroku.c
	gcc -c sugoroku.c

.PHONY: clean
clean: 
	rm -f main main.o sugoroku.o
