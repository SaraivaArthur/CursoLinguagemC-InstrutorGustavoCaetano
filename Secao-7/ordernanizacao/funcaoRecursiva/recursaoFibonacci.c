#include <stdio.h>

int fibonacci(int numero) {
	if(numero == 0) return 0;
	if(numero == 1) return 1;
	
	return fibonacci(numero - 1) + fibonacci(numero - 2);
}

int main() {
	int n;
	
	printf("Digite qual o numero de fibonacci voce quer: ");
	scanf("%d", &n);
	
	printf("Sequencia de Fibonacci: \n");
	
	for(int i = 0; i < n; i++) {
		printf("%d ", fibonacci(i));
	}
	
	return 0;
}
