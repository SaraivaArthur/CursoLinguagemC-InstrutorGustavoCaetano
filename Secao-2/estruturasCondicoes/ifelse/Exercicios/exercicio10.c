#include <stdio.h>

int main() {

    int capacidade, torcedores;
    float ocupacao;

    printf("Digite a capacidade total do estadio: ");
    scanf("%d", &capacidade);

    printf("Digite a quantidade de torcedores presentes: ");
    scanf("%d", &torcedores);

    ocupacao = (float)torcedores / capacidade * 100;

    printf("\n=== RESULTADO ===\n");

    printf("Lotacao: %.2f%% \n", ocupacao);

    if (ocupacao > 90) {
    	printf("Lotado!\n");
	} else if (ocupacao >= 70) {
		printf("Otima presenca de publico!\n");
	} else if (ocupacao >= 50) {
		printf("Publico razoavel.\n");
	} else {
		printf("Morumbis.\n");
	}
	
	return 0;
}
