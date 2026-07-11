#include <stdio.h>

int main() {

    int idade;

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Você tem mais de 18 anos, deve jogar na categoria profissional.");
    } else {
        printf("Você tem menos de 18 anos, deve jogar na categoria sub20");
    }
}