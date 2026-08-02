#include <stdio.h>

int main() {
	int valores[2][3];
	int soma = 0;
	
	for(int i = 0; i < 2; i++) { // Linhas das agencias
		for(int j = 0; j < 3; j++) { // Colunas dos dias
			printf("Valores da agencia %d, Dia %d: ", i + 1, j + 1);
			scanf("%d", &valores[i][j]);
		}
	}
	
	printf("\n=== Valor Arrecadado ===\n");
	
	for(int i = 0; i < 2; i++) { // Linhas
		for(int j = 0; j < 3; j++) { // Colunas
				soma += valores[i][j];
		}	
	}
	
	printf("Total arrecadado: R$ %d\n", soma);
}
