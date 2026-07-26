#include <stdio.h>
#include <string.h>

int main() {
	char nome[] = "Arthur";
	char sobrenome[] = " Saraiva";
	
	strcat(nome, sobrenome); // concatena
	printf("Nome completo: %s\n", nome);
	
	printf("Tamanho: %d\n", strlen(nome));
	
	if(strcmp(nome, "Arthur Saraiva") == 0) {
		printf("Nome correto.\n");
	} else {
		printf("Nome incorreto.\n");
	}
	
	return 0;
}
