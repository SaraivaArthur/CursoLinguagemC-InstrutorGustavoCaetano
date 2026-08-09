#include <stdio.h>
#include <stdlib.h>

struct No {
	int valor;
	struct No *proximo;
};

int main() {
	struct No *primeiro = (struct No*) malloc(sizeof(struct No));
	
	primeiro->valor = 42;
	
	struct No *segundo = (struct No*) malloc(sizeof(struct No));
	
	segundo->valor = 99;
	primeiro->proximo = segundo;
	
	printf("=== Primeiro No ===\n");
	
	printf("Valor do primeiro no: %d\n", primeiro->valor);
	
	printf("\n=== Segundo No ===\n");
	
	printf("Valor do segundo no: %d\n", primeiro->proximo->valor);
	
	return 0;
}
