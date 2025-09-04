#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    /*
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
    */

    // JOGO JOKENPO

    int escolhaJogador, escolhaComputador; //declaração variáveis

    srand(time(0));

    printf("--- JOGO DE JOKENPO ---\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    switch (escolhaJogador) {
        case 1:
        printf("Jogador: Pedra - ");
        break;

        case 2:
        printf("Jogador: Papel - ");
        break;

        case 3:
        printf("Jogador: Tesoura - ");
        break;

        default:
        printf("Opção inválida!\n");
        break;
    }

    switch (escolhaComputador) {
        case 1:
        printf("Computador: Pedra.\n");
        break;

        case 2:
        printf("Computador: Papel. \n");
        break;

        case 3:
        printf("Computador: Tesoura. \n");
        break;
    }

    if (escolhaComputador == escolhaJogador) {
        printf(" O JOGO EMPATOU!\n");
    } else if ((escolhaJogador == 1) && (escolhaComputador == 3) || 
                (escolhaJogador == 2) && (escolhaComputador == 1) || 
                (escolhaJogador == 3) && (escolhaComputador == 2)) {
        printf(" PARABÉNS! VOCÊ GANHOU.\n");
    } else {
        printf(" VOCÊ PERDEU!\n");
    }

    return 0;
}
