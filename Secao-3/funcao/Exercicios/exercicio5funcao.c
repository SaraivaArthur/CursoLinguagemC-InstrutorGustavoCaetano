#include <stdio.h>

void criaQuadrado(int n, char caracter) {
	printf("\n");
	for(int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%c", caracter);
		}
		printf("\n");
	}
}

int main() {
	int n;
	char caracter;
	
	printf("Digite o tamanho do quadrado: ");
	scanf("%d", &n);
	
	printf("Digite qual caracter voce quer: ");
	scanf(" %c", &caracter);
	
	criaQuadrado(n, caracter);
	
	return 0;
}
