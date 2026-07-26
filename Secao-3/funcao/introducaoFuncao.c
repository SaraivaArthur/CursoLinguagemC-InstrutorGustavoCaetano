#include <stdio.h>

int somar(int numero1, int numero2) {
	return numero1 + numero2;
}

int main() {
	printf("Resultado: %d\n", somar(3, 2));
	printf("Resultado: %d\n", somar(5, 5));
	printf("Resultado: %d\n", somar(10, 1));
	
	return 0;
}
