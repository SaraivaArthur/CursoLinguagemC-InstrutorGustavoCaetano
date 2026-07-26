#include <stdio.h>

int main() {

    int vitorias, empates, derrotas, pontos;

    printf("Quantas vitorias o time tem? ");
    scanf("%d", &vitorias);

    printf("Quantos empates o time tem? ");
    scanf("%d", &empates);

    printf("Quantas derrotas o time tem? ");
    scanf("%d", &derrotas);

    pontos = (vitorias * 3) + empates;
    
    printf("O time tem %d pontos", pontos);

    return 0;
}
