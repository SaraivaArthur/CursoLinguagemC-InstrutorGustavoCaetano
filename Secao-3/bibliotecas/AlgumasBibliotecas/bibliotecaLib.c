#include <stdio.h>
#include <stdlib.h>

int main() {
	char texto[] = "123";
	
	printf("Antes: %s\n", texto + 2);
	
	int valor = atof(texto);
	
	printf("Convertido: %d\n", valor + 2);
	
	return 0;
}
