#include <stdio.h>

int main() {
	int n;
	
	printf("Digite o numero da tabuada que voce quer: ");
	scanf("%d", &n);
	
	for(int i = 0; i <= 10; i++) {
		printf("%d x %d = %d\n", n, i, i * n);
	}
	
	return 0;
}
