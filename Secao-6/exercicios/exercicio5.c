#include <stdio.h>
#include <string.h>

char fila[5][50];
int inicio = 0, fim = 0;

void enqueue(char nome[]) {
	if(fim == 5) {
		printf("Fila cheia!");
		return;
	}
	
	strcpy(fila[fim++], nome);
}

void dequeue() {
	if(inicio == fim) {
		printf("Fila acabou!");
		return;
	}
	
	printf("Atendendo o cliente: %s\n", fila[inicio]);
	for(int i = 0; i < fim -1; i++) {
		strcpy(fila[i], fila[i + 1]);
	}
	
	fim--;
}

void mostrarFila() {
	if(inicio == fim) {
		printf("Fila acabou!");
		return;
	}
	
	printf("Fila atual: \n");
	for(int i = inicio; i < fim; i++) {
		printf("%d - %s\n", i, fila[i]);
	}
}

int main() {
	
	int opcao;
	char nome[50];
	
	do {
		printf("\n1=Inserir cliente\n2=Atender Cliente\n3=Mostrar fila\n0=Sair\n\nOpcao: ");
		scanf("%d", &opcao);
		
		switch(opcao) {
			case 1:
				printf("Nome do cliente: ");
				scanf(" %[^\n]", nome);
				enqueue(nome);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				mostrarFila();
				break;
		}
	} while(opcao != 0);
	
	printf("Saiu do programa!");
	return 0;
}
