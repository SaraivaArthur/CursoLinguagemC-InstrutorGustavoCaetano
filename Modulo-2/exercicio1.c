#include <stdio.h>

int main() {

    char nome[];
    int idade;
    int quantidadeGols;

    printf("Digite o seu primeiro nome: ");
    scanf("%s \n", nome);

    printf("Digite a sua idade: ");
    scanf("%d \n", &idade);

    printf("Digite a quantidade de gols: ");
    scanf("%d \n", &quantidadeGols);

    return 0;
}