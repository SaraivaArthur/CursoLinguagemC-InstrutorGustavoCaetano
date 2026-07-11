#include <stdio.h>

int main() {

    int gols, partidas;
    float media;

    printf("Digite a quantidade de gols: ");
    scanf("%d", &gols);

    printf("Digite a quantidade de partidas jogadas: ");
    scanf("%d", &partidas);

    media = (float)gols / partidas;

    printf("\nMedia: %.2f", media);

    return 0;
}
