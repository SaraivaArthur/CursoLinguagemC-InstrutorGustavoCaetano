#include <stdio.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int numero = rand() % 100;
	
	printf("Numero aleatorio: %d\n", numero);
	
	return 0;
}
