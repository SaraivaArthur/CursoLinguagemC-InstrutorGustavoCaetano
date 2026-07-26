#include <stdio.h>
#include <math.h>

int main() {

    float salario1, salario2, diferenca;

    printf("Digite o salario do jogador 1: ");
    scanf("%f", &salario1);

    printf("Digite o salario do jogador 2: ");
    scanf("%f", &salario2);

    diferenca = fabs(salario1 - salario2);
    
    printf("A diferença entre os salarios: %.2f", diferenca);

    return 0;
}
