#include <stdio.h>

int main() {
	int matriz[4][4];
	int identidade = 1;
	
	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 4; j++) {
			scanf("%d", &matriz[i][j]);
			
			if((i == j && matriz[i][j] != 1) || (i != j && matriz[i][j] != 0)) {
				identidade = 0;
			}
		}
		
	if(identidade) {
		printf("\nMatriz identidade? SIM\n\n");
	} else {
		printf("\nMatriz identidade? NAO\n\n");
	}
	
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			printf("%3d ", matriz[i][j]);
		}
	}
	
	return 0;
}
