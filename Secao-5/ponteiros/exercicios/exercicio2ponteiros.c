#include <stdio.h>
#include <stdlib.h>

int main() {
	float *vetor;
	float media;
	float numero1;
	float numero2;
	
	printf("Digite o numero 1: ");
	scanf("%f", &numero1);
	
	printf("Digite o numero 2: ");
	scanf("%f", &numero2);
	
	vetor = (int *) malloc(numero1 * sizeof(float));
	vetor = (int *) malloc(numero2 * sizeof(float));
	
	if(vetor == NULL) {
		printf("Erro: memoria insuficiente.");
		return 1;
	}
	
	media = (numero1 + numero2) / 2;
	
	printf("\n=== Valor Media ===\n");
	
	printf("Media: %.2f\n", media);
	
	return 0;
}
