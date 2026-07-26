#include <stdio.h>

float calcularMedia(float n1, float n2, float n3) {
	return (n1 + n2 + n3) / 3;
}

void classificar(float media) {
	if(media >= 9)
		printf("Excelente\n");
	else if(media >= 7)
		printf("Bom\n");
	else if(media >= 5)
		printf("Regular\n");
	else
		printf("Ruim\n");
}

int main() {
	float n1, n2, n3, media;
	for(int i = 1; i <= 5; i++) {
		printf("Jogador %d:\n", i);
		printf("Digite as 3 notas: \n");
		scanf("%f %f %f", &n1, &n2, &n3);
		media = calcularMedia(n1, n2, n3);
		printf("Media: %.2f - ", media);
		classificar(media);
		printf("\n================= \n\n");
	}
	
	return 0;
}
