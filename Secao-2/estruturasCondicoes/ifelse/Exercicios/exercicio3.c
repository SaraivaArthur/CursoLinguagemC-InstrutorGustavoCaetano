#include <stdio.h>

int main() {
	
	int minutos, horas, min_restantes;
	
	printf("Digite o tempo jogado em minutos: ");
	scanf("%d", &minutos);
	
	horas = minutos / 60;
	min_restantes = minutos % 60;
	
	printf("Resultado: %d horas e %d minutos.", horas, min_restantes);
}
