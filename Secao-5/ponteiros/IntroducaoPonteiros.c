#include <stdio.h>

int main() {
	int numero = 42;
	int *n = &numero;
	
	printf("Antes: %d\n", numero);
	
	*n = 10;
	
	printf("Depois: %d\n", numero);
	
	return 0;
}
