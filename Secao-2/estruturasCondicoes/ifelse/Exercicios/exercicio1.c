#include <stdio.h>

int main() {

    int idade, gols;
    char nome[20];
    
    printf("\nDigite o nome do jogador: ");
    scanf("%s", &nome);
    
    printf("\nDigite a idade: ");
    scanf("%d", &idade);
    
    printf("\nDigite a quantidade de gols: ");
    scanf("%d", &gols);
    
    printf("===============================\n");
    
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Quantidade de gols: %d\n", gols);

    return 0;
}
