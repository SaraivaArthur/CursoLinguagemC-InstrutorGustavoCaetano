#include <stdio.h>

int main() {

    float fps[6], soma = 0, media;
    
    printf("==== Digite o FPS registrados em 6 momentos: ====\n");
    
    for(int i = 0; i < 6; i++) {
        printf("Digite o FPS %d: ", i + 1);
        scanf("%f", &fps[i]);
        soma += fps[i];
    }
    
    media = soma / 6;
    
    printf("\nMedia de FPS: %.2f", media);

    return 0;
}