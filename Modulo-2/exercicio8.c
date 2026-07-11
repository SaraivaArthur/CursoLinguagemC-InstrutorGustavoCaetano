#include <stdio.h>

int main() {

    int gols;

    printf("Digite a quantidade de gols marcados pelo jogador: ");
    scanf("%d", &gols);

    if (gols > 10) {
        printf("Excelente temporada!");
    } else if (gols >= 5) {
        printf("Boa temporada!");
    } else {
        printf("Temporada abaixo do esperado.");
    }

    return 0;
}