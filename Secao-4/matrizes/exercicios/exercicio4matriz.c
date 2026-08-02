#include <stdio.h>

int main() {
	int matriz[3][2];
	
	printf("Digite os 6 valores da matriz 3x2 (linha por linha):\n");
	for(int i = 0; i < 3; i++) 
		for(int j = 0; j < 2; j++) {
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
		
	printf("\nMatriz original:\n\n");
	for(int i = 0; i < 3; i++) {
		printf("| ");
		for(int j = 0; j < 2; j++) 
			printf("%3d ", matriz[i][j]);
		printf("|\n");
	}
	
	printf("\nMatriz transposta:\n\n");
	for(int j = 0; j < 2; j++) {
		printf("| ");
		for(int i = 0; i < 3; i++) 
			printf("%3d ", matriz[i][j]);
		printf("|\n");
	}
	
	return 0;
}
