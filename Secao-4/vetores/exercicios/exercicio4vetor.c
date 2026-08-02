#include <stdio.h>

int main() {
	char nomes[5][50];
	char letra;
	int j, encontrou;
	
	// Entrada da letra a ser buscada
	printf("Digite a letra que deseja buscar: ");
	scanf(" %c", &letra);
	
	// Entrada dos 5 nomes
	for(int i = 0; i < 5; i++) {
		printf("Digite o nome %d: ", i + 1);
		scanf("%s", nomes[i]);
	}
	
	// Verifica e imprime nomes que contêm a Letra
	printf("\Nomes que contem a letra '%c':\n", letra);
	
	for(int i = 0; i < 5; i++) { // Nomes
		encontrou = 0;
		
		for(j = 0; nomes[i][j] != '\0'; j++) { // Caracter
			if(nomes[i][j] == letra) {
				encontrou = 1;
				break;
			}
		}
		
		if(encontrou) {
			printf("%s\n", nomes[i]);
		}
	}
	
	return 0;
}
