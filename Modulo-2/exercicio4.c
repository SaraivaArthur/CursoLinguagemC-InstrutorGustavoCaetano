#include <stdio.h>

int main() {

    int vitorias, empates, derrotas;

    printf("Quantas vitorias o time tem? ");
    scanf("%d", &vitorias);

    printf("Quantos empates o time tem? ");
    scanf("%d", &empates);

    printf("Quantas derrotas o time tem? ");
    scanf("%d", &derrotas);

    float pontos = (vitorias * 3) + (empates * 1) + (derrotas * 0);
    printf("O time tem %.2f pontos", pontos);

    return 0;
}