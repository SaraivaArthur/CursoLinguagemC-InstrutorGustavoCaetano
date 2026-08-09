#include <stdio.h>

struct Pessoa {
	char nome[50];
	int idade;
	float altura;
};

int main() {
	struct Pessoa pessoas[3];
	int maisVelha = 0;
	
	for(int i = 0; i < 3; i++) {
		printf("=== Pessoa %d ===\n", i + 1);
		printf("Digite o nome: ");
		scanf(" %[^\n]", pessoas[i].nome);
		printf("Digite a idade: ");
		scanf("%d", &pessoas[i].idade);
		printf("Digite a altura: ");
		scanf("%f", &pessoas[i].altura);
		
		if(pessoas[i].idade > pessoas[maisVelha].idade) {
			maisVelha = 1;
		}
	}
	
	printf("\nPessoa mais velha: %s", pessoas[maisVelha]);
	
	return 0;
}
