#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *arquivo = fopen("produtos.txt", "w"); 
	FILE *arquivo2 = fopen("clientes.txt", "w"); 
	
	if(arquivo == NULL) {
		printf("\nErro ao abrir o arquivo! \n");
		return 1;
	}
	
	if(arquivo2 == NULL) {
		printf("\nErro ao abrir o arquivo! \n");
		return 1;
	}
	
	char nomeProduto[100];
	char nomeCliente[100];
	float preco;
	int idade;
	int codigoProduto;
	int codigoCliente;
	int quantidadeDesejada;

	// Produtos
	printf("Digite o nome do produto: ");
	scanf("%99s", nomeProduto);
	
	printf("Digite o valor do produto: ");
	scanf("%f", &preco);
	
	printf("Digite codigo do produto: ");
	scanf("%d", &codigoProduto);
	
	fprintf(arquivo, "%s, %.2f, %d\n", nomeProduto, preco, codigoProduto);
	
	fclose(arquivo);
	
	printf("Dados salvos com sucesso!\n\n");
	
	// Clientes
	printf("Digite o nome do cliente: ");
	scanf("%99s", nomeCliente);
	
	printf("Digite o codigo do cliente: ");
	scanf("%d", &codigoCliente);
	
	fprintf(arquivo2, "%s, %d\n", nomeCliente, codigoCliente);
	
	fclose(arquivo2);
	
	printf("Dados salvos com sucesso!");
	
	// Pedidos
	FILE *arquivo3 = fopen("pedidos.txt", "r");
	
	if(arquivo3 == NULL) {
		printf("\nErro ao abrir o arquivo! \n");
		return 1;
	}
	
	printf("=== Lendo Pedidos ===\n");
	
	while(fscanf(arquivo3, "%d %d %d", &codigoCliente, &codigoProduto, &quantidadeDesejada) != EOF) {
		printf("Codigo do cliente: %d | Codigo do produto: %d | Quantidade: %d\n", codigoCliente, codigoProduto, quantidadeDesejada);
	}
	
	fclose(arquivo3);
	
	system("notepad pedidos.txt");
	
	return 0;
}

