#include <stdio.h>

int main() {

    int opcao = 4;

    switch (opcao) {
        case 1:
            printf("Fase numero 1");
            break;
        case 2:
            printf("Fase numero 2");
            break;
        case 3:
            printf("Fase numero 3");
            break;
        case 4:
            printf("Fase numero 4");
            break;
        default:
            printf("Opcao invalida");
            break;
    }

    return 0;
}
