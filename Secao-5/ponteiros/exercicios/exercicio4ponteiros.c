#include <stdio.h>
#include <stdlib.h>

int main() {
	int m, n, **matriz, soma = 0;
	
	printf("Digite as dimensoes (m e n): ");
	scanf("%d %d", &m, &n);
	
	matriz = (int **) malloc(m * sizeof(int *));
	
	for(int i = 0; i < m; i++) {
		matriz[i] = matriz = (int *) malloc(n * sizeof(int));
		for(int j = 0; j < n; j++) {
			printf("matriz[%d][%d] = ", i, j);
			scanf("%d", &matriz[i][j]);
			soma += matriz[i][j];
		}
		printf("Soma da linha %d: %d\n", i + 1, soma);
	}
	
	free(matriz);

	return 0;
}
