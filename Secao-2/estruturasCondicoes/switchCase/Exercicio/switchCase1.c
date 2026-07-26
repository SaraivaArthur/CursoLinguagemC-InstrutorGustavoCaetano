#include <stdio.h>

int main() {

    int opcao;

    printf("Escolha um numero de 1 a 3 (1 para Hamburguer, 2 para Cachorro-quente e 3 para Pizza) ou 4 para encerrar o pedido: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: printf("Hamburguer"); break;
        case 2: printf("Cachorro-quente"); break;
        case 3: printf("Pizza"); break;
        case 4: printf("Encerrando pedido ..."); break;
        default: printf("Opcao invalida!"); break;
    }
    return 0;
}