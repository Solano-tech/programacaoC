#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    //JOGO PARA ADIVINHAR NÚMEROS

    int opcao, numeroSecreto, palpite; //Definição de variáveis

    //Criando o menu
    printf("*Menu Principal*\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Exibir Regras\n");
    printf("3. Sair\n");
    //escolhendo a opção
    printf("Escolha uma opção\n");
    scanf("%d", &opcao);

    //estrutura de tomada de decisão
    switch (opcao) {
        case 1:
        srand(time(0));
        numeroSecreto = rand() % 10 + 1;

        printf("Adivinhe o número! (entre 1 e 10)\n");
        scanf("%d", &palpite);

        if (palpite == numeroSecreto) {
            printf("Parabéns! Você acertou.\n");
        } else {
            printf("Você errou! O número era %d.\n", numeroSecreto);
        }
        break;

        case 2:
        printf("***Regras do Jogo***\n");
        printf("1- Escolha uma opção no menu.\n");
        printf("2- Caso escolha 'Iniciar Jogo', digite um número entre 0 e 9 para tentar adivinhar o número secreto.\n");
        printf("3- Para terminar o jogo, escolha a opção 'Sair'\n");
        break;

        case 3:
        printf("Saindo...\n");
        break;
        
        default:
            printf("Você digitou uma opção inválida!\n");
        break;
    }
    return 0;
}
