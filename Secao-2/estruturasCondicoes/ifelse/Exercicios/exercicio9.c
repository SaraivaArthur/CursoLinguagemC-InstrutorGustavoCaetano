#include <stdio.h>

int main() {

    int idade, gols;
    
    printf("Digite a idade do jogador: ");
    scanf("%d", &idade);

    printf("Digite a quantidade de gols marcados: ");
    scanf("%d", &gols);

    if (idade <= 20 && gols > 10) {
        printf("Jovem talento promissor!\n");
    } else if (idade <= 20 && gols <= 10) {
        printf("Jovem em desenvolvimento.\n");
    } else if (idade > 20 && gols > 15) {
        printf("Jogador experiente em grande fase!\n");
    } else if (idade > 20 && gols <= 15) {
        printf("Estevao.\n");
    }

    return 0;
}