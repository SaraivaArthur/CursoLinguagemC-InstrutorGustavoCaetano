#include <stdio.h>

int main() {

    int salario1, salario2;
    int salarios;

    printf("Digite o salario do jogador 1: ");
    scanf("%d", &salario1);

    printf("Digite o salario do jogador 2: ");
    scanf("%d", &salario2);

    salarios = (float)salario1  salario2;
    printf("A diferença entre os salarios é: %d", salarios);

    return 0;
}