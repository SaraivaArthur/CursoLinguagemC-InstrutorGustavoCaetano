#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int megasena[6];
    int fezinha[6] = {3, 12, 23, 55, 10, 42};
    int contador = 0;
    
    srand(time(NULL));
    
    printf("=== Numeros da Megasena! ===\n");
    for(int i = 0; i < 6; i++) {
        megasena[i] = rand() % 60 + 1;
        printf("%d ", megasena[i]);
    }
    
    printf("\n=== Numeros da Fezinha! ===\n");
    for(int i = 0; i < 6; i++) {
        printf("%d ", megasena[i]);
    }
    
    printf("\n\n==== Resultados ====\n");
    
    for(int i = 0; i < 6; i++) { // fezinha
        for(int j = 0; j < 6; j++) { // megasena
            if(megasena[j] == fezinha[i]) {
                printf("%d ", fezinha[i]);
                contador++;
            }
        }
    }
    
    printf("\nTotal de acertos: %d", contador);
    
    return 0;
}