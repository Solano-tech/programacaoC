//=================================================================================
// PRÁTICA: SISTEMA DE BIBLIOTECA - PARTE 1
//
// Objetivo: Implementar o cadastro e listagem de livros usando um array estático
//
//=================================================================================

// Declaracao de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definicao de constantes Globais
#define MAX_LIVROS 50
#define TAM_STRING 100

// Definicao da Estrutura (Struct)
struct Livro {
    char titulo[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
};

// Função para limpar o Buffer de entrada
void LimparBufferEntrada(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
};

// Descricao da Funcao Principal (main)
int main(){
    struct Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    int opcao;

    // Criar o menu de opcoes
    do {
        // Exibir menu de opcoes
        printf("====================================\n");
        printf("     BIBLIOTECA - PARTE 1 \n");
        printf("====================================\n");
        printf("1 - Cadastrar novo Livro \n");
        printf("2 - Listar Livros \n");
        printf("0 - Sair \n");
        printf("------------------------------------\n");
        printf("Escolha uma opcao: ");

        // Ler a opcao escolhida pelo usuario
        scanf("%d", &opcao);
        LimparBufferEntrada(); // Limpa o '\n' deixado pelo scanf

        // Definicao das opcoes
        switch (opcao) {
        case 1: // CADASTRO DO LIVRO
            printf("--- Cadastrar novo livro ---\n\n");
            if (totalLivros < MAX_LIVROS) {
                printf("Digite o titulo do livro: ");
                fgets(biblioteca[totalLivros].titulo, TAM_STRING, stdin);

                printf("Digite o autor: ");
                fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);

                
            }
            break;
        
        default:
            break;
        }

    }
};
