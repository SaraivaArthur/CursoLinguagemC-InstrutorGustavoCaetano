#include <stdio.h>

int main() {

    int capacidade, torcedores;
    float ocupacao;

    printf("Digite a capacidade total do estadio: ");
    scanf("%d", &capacidade);

    printf("Digite a quantidade de torcedores presentes: ");
    scanf("%d", &torcedores);

    ocupacao = (float)torcedores / capacidade * 100;

    printf("\n=== RESULTADO ===\n");

    printf("Lotaçao: %.2f%% \n", ocupacao);

    if ()
}