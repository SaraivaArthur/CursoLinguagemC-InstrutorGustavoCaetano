#include <stdio.h>

int main() {
	float notas[3][4], soma;
	
	for(int i = 0; i < 3; i++) {
		soma = 0;
		for(int j = 0; j < 4; j++) {
			printf("Aluno %d, Prova %d: ", i + 1, j + 1);
			scanf("%f", &notas[i][j]);
			soma += notas[i][j];
		}
	
		printf("\nMedia do aluno %d: %.2f\n\n", i + 1, soma / 4);
	}
	
	return 0;

}
