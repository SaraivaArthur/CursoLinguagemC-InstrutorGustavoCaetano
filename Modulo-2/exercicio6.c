#include <stdio.h>

int main() {

    int cartoes;

    printf("Digite a quantidade de cartoes: ");
    scanf("%d", &cartoes);

    if (cartoes >= 2) {
        printf("O jogador foi expulso");
    } else {
        printf("O jogador nao foi expulso");
    }

    return 0;
}