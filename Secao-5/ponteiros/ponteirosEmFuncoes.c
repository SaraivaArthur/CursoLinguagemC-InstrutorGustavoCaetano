#include <stdio.h>

// Ao invés de mudar o endereço, aponte ao endereço e mude o valor

	void aumenta(int *n) {
		(*n)++;
	}

int main() {
	int numero = 5;
	
	aumenta(&numero);
	
	printf("%d", numero);
	
	return 0;
}
