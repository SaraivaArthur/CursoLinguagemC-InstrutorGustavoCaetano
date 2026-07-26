#include <stdio.h>
#include <string.h>

int main() {
	char nome[50];
	int tamanho, proibidos = 0;
	
	printf("Digite seu nome de usuario: ");
	scanf("%s", &nome);
	
	tamanho = strlen(nome);
	
	for(int i = 0; i < tamanho; i++) {
		char c = nome[i];
		
		if(c == '@' || c == '#' || c == '$' || c == '%' || c == '!') {
			proibidos++;
		}
	}
	
	if(proibidos > 0) {
		printf("Nome invalido! %d caractere(s) proibido(s).\n", proibidos);
	} else {
		printf("Nome valido!\n");
	}
	
	return 0;
}
