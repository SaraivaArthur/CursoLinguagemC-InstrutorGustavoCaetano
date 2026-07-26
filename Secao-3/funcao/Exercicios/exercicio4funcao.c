#include <stdio.h> 

void classificarNota(float nota) {
	if(nota >= 6) {
		printf("Aprovado\n");
	} else if(nota >= 4) {
		printf("Recuperacao\n");
	} else {
		printf("Reprovado\n");
	}
}

int main() {
	float nota;
	
	printf("Digite uma nota: ");
	scanf("%f", &nota);
	
	classificarNota(nota);
	
	return 0;
}
