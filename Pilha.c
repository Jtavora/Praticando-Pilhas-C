#include "Pilha.h"

int main(){

    header *x = aloca_header();
    int quant, valor;

    printf("Digite quantos valores deseja colcar na pilha: ");
    scanf("%d", &quant);

    for(int i = 0; quant > i; i++){
        printf("Digite o valor que deseja colocar: ");
        scanf("%d", &valor);

        cria_pilha(x, valor);
    }

    imprime_pilha(x);

    libera_pilha(x);

    return 0;
}