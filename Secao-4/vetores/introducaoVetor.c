#include <stdio.h>
int main() {
    
    int notas[5] = {10, 32, 9, 2, 3};

    // printf("%d\n", notas[0]); tradicional
    
    for(int i = 0; i < 5; i++) {
        printf("%d\n", notas[i]);
    }
    
    return 0;
}