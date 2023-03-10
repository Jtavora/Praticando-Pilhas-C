#include "Pilha.h"

header *aloca_header(void){
    header *x = (header*) malloc(sizeof(header));
    x -> primeiro = NULL;

    return x;
}

void cria_pilha(header *h, int num){
    lifo *x = (lifo*) malloc(sizeof(lifo));

    x -> anterior = h -> primeiro;
    h -> primeiro = x;
    x -> num = num;
}

void imprime_pilha(header *x){
    lifo *p = x -> primeiro;

    while(p != NULL){
        printf("Num: %d\n", p -> num);
        p = p -> anterior;
    }
}

void libera_pilha(header *x){
    lifo *p = x -> primeiro;
    lifo *aux;

    while(p != NULL){
        aux = p -> anterior;
        free(p);
        p = aux;
    }

    free(x);
}