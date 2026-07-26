#include <stdio.h>

float calcularSoma(float numero1, float numero2) {
	return numero1 + numero2;
}

float calcularMedia(float soma) {
	return soma / 2;
}

int main() {
	float n1, n2, soma, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1); 
	
	printf("Digite a segunda nota: ");
	scanf("%f", &n2); 
	
	soma = calcularSoma(n1, n2);
	media = calcularMedia(soma);
	
	printf("Soma das notas: %.2f\n", soma);
	printf("Media final: %.2f\n", media);
	
	return 0;
}


