#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *arquivo;
	arquivo = fopen("nomes.txt", "r"); 
	char nome[100];
	
	if(arquivo == NULL) {
		printf("Erro ao abrir o arquivo! \n");
		return 1;
	}
	
	while(fscanf(arquivo, "%s", nome) != EOF) {
		printf("Nome: %s\n", nome);
	}
	
	fclose(arquivo);
	
	return 0;
}

/*

| Modo | O que faz:
| "r"  | Ler
| "w"  | Escrever
| "a"  | Abre para acrescentar
| "r+" | Leitura e escrita
| "w+" | Escrita e leitura
| "a+" | Leitura e acrescentar

*/
