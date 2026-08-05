#include <stdio.h>

int main() {
	int numero1 = 20;
	int *n1 = &numero1;
	
	int numero2 = 10;
	int *n2 = &numero2;
	
	int soma;
	
	soma = numero1 + numero2;
	
	printf("Resultado da soma: %d\n", soma);
	
	return 0;
}
