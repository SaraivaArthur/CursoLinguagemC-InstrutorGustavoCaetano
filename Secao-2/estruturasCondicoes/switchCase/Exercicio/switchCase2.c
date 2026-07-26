#include <stdio.h>

int main() {

    int opcao;
    float nota, frequencia;

    printf("Digite 1 para verificar se o aluno foi aprovado ou 2 para sair: \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite a nota do aluno: ");
            scanf("%f", &nota);
            printf("Digite a presenca do aluno: ");
            scanf("%f", &frequencia);

            if (nota >= 7 && frequencia >= 75) {
                printf("\nAprovado!\n");
            } else {
                printf("\nReprovado!\n");
            }
            break;
        case 2:
            printf("Fim!");
            break;
        default:
            printf("Opcao invalida!");
    }
    return 0;
}