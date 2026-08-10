#include <stdio.h>

void bubbleSort(int numeros[]) {
	for(int i = 1; i < 10; i++) {
		for(int j = 0; j < 10 - i; j++) {
			if(numeros[j] > numeros[j + 1]) { // Aqui determina a ordem: crescente ou decrescente
				int temp = numeros[j];
				numeros[j] = numeros[j + 1];
				numeros[j + 1] = temp;
			}
		}
	}
}

void imprimirVetor(int numeros[]) {
	for(int i = 0; i < 10; i++) {
		printf("%d ", numeros[i]);
	}
}

int main() {
	int numeros[10] = {0, 3, 5, 8, 9, 2, 1, 4, 6, 7};
	
	printf("Vetor original: \n");
	imprimirVetor(numeros);
	
	printf("\nVetor ordenado de forma crescente: \n");
	bubbleSort(numeros);
	imprimirVetor(numeros);
	
	return 0;
}
