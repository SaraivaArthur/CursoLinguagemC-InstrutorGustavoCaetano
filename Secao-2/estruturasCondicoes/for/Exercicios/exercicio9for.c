#include <stdio.h>

int main() {
	int quantidadeCarros;
	
	printf("Digite a quantidade de carros a serem registrados: ");
	scanf("%d", &quantidadeCarros);
	
	for(int i = 0; i < quantidadeCarros; i++) {
		char modelo[50];
		int ano;
		int carro_funcionando;
		
		printf("\nCarro %d:\n", i + 1);
		printf("Modelo do carro: ");
		scanf("%s", &modelo);
		
		printf("Ano de fabricacao: ");
		scanf("%d", &ano);
		
		printf("O carro esta funcionando normalmente? (1 ou 0): ");
		scanf("%d", &carro_funcionando);
		
		if(ano < 2005 && carro_funcionando == 0) {
			printf("O carro %s precisa de REPAROS URGENTES!\n", modelo);
		} else if(ano < 2005) {
			printf("O carro %s é antigo, recomenda-se uma revisao!\n", modelo);
		} else if(carro_funcionando == 0) {
			printf("O carro %s precisa de manutencao!\n", modelo);
		} else {
			printf("O carro %s esta em boas condicoes!\n", modelo);
		}
	}
	
	return 0;
}
