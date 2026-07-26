#include <stdio.h>

int main() {

    int num1 = 10, num2 = 2;
    int resultado;

    resultado = num1 + num2;

    printf("Adicao: %d + %d = %d \n", num1, num2, resultado);
    printf("Subtracao: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplicacao: %d * %d = %d\n", num1, num2, num1 * num2);
    printf("Divisao: %d / %d = %d\n", num1, num2, num1 / num2);
    printf("Resto: %d %% %d = %d\n", num1, num2, num1 % num2);

    return 0;
}