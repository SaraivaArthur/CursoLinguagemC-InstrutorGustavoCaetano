#include <stdio.h>
#include <stdlib.h>

// Criamos as 3 structs básicas
struct Livro {
    int codigo;
    char titulo[50];
    char autor[50];
    int qtdTotal;
    int qtdDisp;
};

struct Usuario {
    int codigo;
    char nome[50];
    int idade;
};

struct Emprestimo {
    int codUsuario;
    int codLivro;
    int ativo; // 1 = Emprestado, 0 = Devolvido
};

int main() {
    // Vetores para guardar as coisas na memoria
    struct Livro livros[100];
    int totalLivros = 0;

    struct Usuario usuarios[100];
    int totalUsuarios = 0;

    struct Emprestimo emprestimos[100];
    int totalEmprestimos = 0;

    FILE *arq;
    int opcao;

    // --- CARREGAR ARQUIVOS AO INICIAR ---
    
    // Carrega Livros
    arq = fopen("livros.txt", "r");
    if (arq != NULL) {
        while (fscanf(arq, "%d %s %s %d %d", 
                      &livros[totalLivros].codigo, 
                      livros[totalLivros].titulo, 
                      livros[totalLivros].autor, 
                      &livros[totalLivros].qtdTotal, 
                      &livros[totalLivros].qtdDisp) == 5) {
            totalLivros++;
        }
        fclose(arq);
    }

    // Carrega Usuarios
    arq = fopen("usuarios.txt", "r");
    if (arq != NULL) {
        while (fscanf(arq, "%d %s %d", 
                      &usuarios[totalUsuarios].codigo, 
                      usuarios[totalUsuarios].nome, 
                      &usuarios[totalUsuarios].idade) == 3) {
            totalUsuarios++;
        }
        fclose(arq);
    }

    // Carrega Emprestimos
    arq = fopen("emprestimos.txt", "r");
    if (arq != NULL) {
        while (fscanf(arq, "%d %d %d", 
                      &emprestimos[totalEmprestimos].codUsuario, 
                      &emprestimos[totalEmprestimos].codLivro, 
                      &emprestimos[totalEmprestimos].ativo) == 3) {
            totalEmprestimos++;
        }
        fclose(arq);
    }

    // --- MENU DO SISTEMA ---
    do {
        printf("\n=== BIBLIOTECA ===\n");
        printf("1 - Cadastrar Livro\n");
        printf("2 - Listar Livros\n");
        printf("3 - Cadastrar Usuario\n");
        printf("4 - Listar Usuarios\n");
        printf("5 - Fazer Emprestimo\n");
        printf("6 - Devolver Livro\n");
        printf("7 - Listar Emprestimos Ativos\n");
        printf("0 - Salvar e Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\nCodigo do Livro: ");
            scanf("%d", &livros[totalLivros].codigo);
            printf("Titulo (sem espacos): ");
            scanf("%s", livros[totalLivros].titulo);
            printf("Autor (sem espacos): ");
            scanf("%s", livros[totalLivros].autor);
            printf("Quantidade Total: ");
            scanf("%d", &livros[totalLivros].qtdTotal);
            
            // A quantidade disponivel comeca igual a total
            livros[totalLivros].qtdDisp = livros[totalLivros].qtdTotal;
            
            totalLivros++;
            printf("Livro cadastrado com sucesso!\n");

        } else if (opcao == 2) {
            printf("\n--- LISTA DE LIVROS ---\n");
            for (int i = 0; i < totalLivros; i++) {
                printf("ID: %d | Titulo: %s | Autor: %s | Total: %d | Disp: %d\n",
                       livros[i].codigo, livros[i].titulo, livros[i].autor, 
                       livros[i].qtdTotal, livros[i].qtdDisp);
            }

        } else if (opcao == 3) {
            printf("\nCodigo do Usuario: ");
            scanf("%d", &usuarios[totalUsuarios].codigo);
            printf("Nome (sem espacos): ");
            scanf("%s", usuarios[totalUsuarios].nome);
            printf("Idade: ");
            scanf("%d", &usuarios[totalUsuarios].idade);

            totalUsuarios++;
            printf("Usuario cadastrado com sucesso!\n");

        } else if (opcao == 4) {
            printf("\n--- LISTA DE USUARIOS ---\n");
            for (int i = 0; i < totalUsuarios; i++) {
                printf("ID: %d | Nome: %s | Idade: %d\n",
                       usuarios[i].codigo, usuarios[i].nome, usuarios[i].idade);
            }

        } else if (opcao == 5) {
            int codU, codL, achouLivro = -1;
            
            printf("\nCodigo do Usuario: ");
            scanf("%d", &codU);
            printf("Codigo do Livro: ");
            scanf("%d", &codL);

            // Procura o livro na lista
            for (int i = 0; i < totalLivros; i++) {
                if (livros[i].codigo == codL) {
                    achouLivro = i;
                    break;
                }
            }

            // Se o livro existe e tem estoque
            if (achouLivro != -1 && livros[achouLivro].qtdDisp > 0) {
                livros[achouLivro].qtdDisp--; // Tira 1 do estoque

                emprestimos[totalEmprestimos].codUsuario = codU;
                emprestimos[totalEmprestimos].codLivro = codL;
                emprestimos[totalEmprestimos].ativo = 1; // 1 = Emprestado
                totalEmprestimos++;

                printf("Emprestimo realizado com sucesso!\n");
            } else {
                printf("Erro: Livro sem estoque ou nao cadastrado!\n");
            }

        } else if (opcao == 6) {
            int codU, codL, achou = 0;
            
            printf("\nCodigo do Usuario: ");
            scanf("%d", &codU);
            printf("Codigo do Livro: ");
            scanf("%d", &codL);

            // Procura o emprestimo
            for (int i = 0; i < totalEmprestimos; i++) {
                if (emprestimos[i].codUsuario == codU && 
                    emprestimos[i].codLivro == codL && 
                    emprestimos[i].ativo == 1) {
                    
                    emprestimos[i].ativo = 0; // Marca como devolvido

                    // Devolve 1 item ao estoque do livro
                    for (int j = 0; j < totalLivros; j++) {
                        if (livros[j].codigo == codL) {
                            livros[j].qtdDisp++;
                            break;
                        }
                    }

                    achou = 1;
                    printf("Devolucao registrada com sucesso!\n");
                    break;
                }
            }

            if (!achou) {
                printf("Emprestimo ativo nao encontrado!\n");
            }

        } else if (opcao == 7) {
            printf("\n--- EMPRESTIMOS ATIVOS ---\n");
            for (int i = 0; i < totalEmprestimos; i++) {
                if (emprestimos[i].ativo == 1) {
                    printf("Usuario ID: %d | Livro ID: %d\n", 
                           emprestimos[i].codUsuario, emprestimos[i].codLivro);
                }
            }
        }

    } while (opcao != 0);

    // --- SALVAR ARQUIVOS AO SAIR ---

    // Salva Livros
    arq = fopen("livros.txt", "w");
    if (arq != NULL) {
        for (int i = 0; i < totalLivros; i++) {
            fprintf(arq, "%d %s %s %d %d\n", 
                    livros[i].codigo, livros[i].titulo, livros[i].autor, 
                    livros[i].qtdTotal, livros[i].qtdDisp);
        }
        fclose(arq);
    }

    // Salva Usuarios
    arq = fopen("usuarios.txt", "w");
    if (arq != NULL) {
        for (int i = 0; i < totalUsuarios; i++) {
            fprintf(arq, "%d %s %d\n", 
                    usuarios[i].codigo, usuarios[i].nome, usuarios[i].idade);
        }
        fclose(arq);
    }

    // Salva Emprestimos
    arq = fopen("emprestimos.txt", "w");
    if (arq != NULL) {
        for (int i = 0; i < totalEmprestimos; i++) {
            fprintf(arq, "%d %d %d\n", 
                    emprestimos[i].codUsuario, emprestimos[i].codLivro, emprestimos[i].ativo);
        }
        fclose(arq);
    }

    printf("\nDados salvos com sucesso. Programa encerrado!\n");
    return 0;
}
