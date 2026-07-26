#include <stdio.h>
#include <stdlib.h>

int main() {
	char texto[] = "25.7";
	float temp = atof(texto);
	
	printf("Temperatura: %.2f\n", temp);
	
	if(temp < 18) {
		printf("O ambiente esta frio.\n");
	} else if (temp >= 18 && 26){
		printf("O ambiente esta agradavel.\n");
	} else {
		printf("O ambiente esta quente.\n");
	}
	
	return 0;
}
