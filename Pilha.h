#include <stdio.h>
#include <stdlib.h>

typedef struct Header{
    struct Pilha *primeiro;
}header;

typedef struct Pilha{
    struct Pilha *anterior;
    int num;
}lifo;

header *aloca_header(void);
void cria_pilha(header *h, int num);
void imprime_pilha(header *x);
void libera_pilha(header *x);


