#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        // = -> atribuicao
        // == -> comparacao
        // > -> maior
        // < -> menor
        // >= -> maior ou igual
        // <= -> menor ou igual
        // != -> diferente
        // && -> AND - E
        // || -> OR - OU
        printf("Maior");
    } else {
        printf("Menor");
    }
}