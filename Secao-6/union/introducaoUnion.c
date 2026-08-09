#include <stdio.h>

union Dados {
	int numero;
	float flutuante;
	char c;
};

int main() {
	union Dados d1;
	
	printf("Numero: %d\n", d1.numero);
	
	d1.flutuante = 3.14;
	
	printf("Numero flutuante: %.2f", d1.flutuante);
	
	return 0;
}
