programa: arq.o
	gcc functions.o pilha.o -o programa.exe

arq.o: Pilha.c Functions.c Pilha.h
	gcc -c Functions.c -o functions.o
	gcc -c Pilha.c -o pilha.o

run: programa
	./programa.exe

clean:
	rm functions.o pilha.o programa.exe

all: programa run clean
