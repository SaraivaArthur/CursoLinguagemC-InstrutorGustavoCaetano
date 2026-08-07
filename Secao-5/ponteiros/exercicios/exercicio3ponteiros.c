#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverteString(char *string) {
	int tamanho = strlen(string);
	
	for(int i = 0; i < tamanho /2; i++) {
		char temp = string[i];
		string[i] = string[tamanho - 1 - i];
		string [tamanho - 1 - i] = temp;
	}
}

int main() {
	char *string = (char *) malloc(100 * sizeof(char));
	
	printf("Digite uma string: ");
	scanf("%s", string);
	
	inverteString(string);
	
	printf("String invertida: %s", string);
	
	return 0;
}
