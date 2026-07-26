#include <stdio.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int numero1 = rand() % 100;
	
	srand(time(NULL));
	int numero2 = rand() % 100;
	
	srand(time(NULL));
	int numero3 = rand() % 100;
	
	srand(time(NULL));
	int numero4 = rand() % 100;
	
	srand(time(NULL));
	int numero5 = rand() % 100;
	
	srand(time(NULL));
	int numero6 = rand() % 100;
	
	printf("Numero aleatorio: %d\n", numero1);
	printf("Numero aleatorio: %d\n", numero2);
	printf("Numero aleatorio: %d\n", numero3);
	printf("Numero aleatorio: %d\n", numero4);
	printf("Numero aleatorio: %d\n", numero5);
	printf("Numero aleatorio: %d\n", numero6);
	
	return 0;
}
