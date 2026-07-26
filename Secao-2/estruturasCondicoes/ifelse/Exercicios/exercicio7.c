#include <stdio.h>

int main() {

    int idade;

    printf("Qual a idade do jogador? ");
    scanf("%d", &idade);

    if (idade <= 20) {
        printf("Pode jogar no sub-20.");
    } else {
        printf("Jogar no profissional.");
    }
    
    return 0;
}
