#include <stdio.h>

int main() {
	int numero;
	
	do {
		printf("Digite um numero entre 1 a 10: ");
		scanf("%d", &numero);
	} while (numero != 7);
	
	printf("\nParabens! Voce acertou.");
	
	return 0;
}
