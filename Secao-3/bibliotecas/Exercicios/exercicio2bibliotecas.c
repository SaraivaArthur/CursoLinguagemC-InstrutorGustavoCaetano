#include <stdio.h>
#include <stdlib.h>

int main() {
	char texto[] = "17";
	int idade = atoi(texto);
	
	printf("Idade: %d\n", idade);
	
	if(idade >= 18) {
		printf("Voce e maior de idade.\n");
	} else {
		printf("Voce e menor de idade.\n");
	}
	
	return 0;
}
