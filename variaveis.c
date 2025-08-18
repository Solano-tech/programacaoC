#include <stdio.h>

//Estudar entradas e saídas de variáveis na Linguagem C

int main(){
    /*
    int idade = 44;
    float altura = 1.69;
    char sexo = 'M';
    char nome[10]  = "Solano";

    printf("A idade de %s é %d anos. \n", nome, idade);
    printf("A sua altura é %.2f m. \n", altura);
    printf("O seu sexo é %c. \n", sexo);
    */

    int idade;
    float altura;
    char sexo;
    char nome[10];

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Nome: %s. \n", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Idade: %d anos. \n", idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Altura: %.2f m. \n", altura);

    printf("Digite seu sexo: ");
    scanf("%s", &sexo);
    printf("Sexo: %c. \n", sexo);

    return 0;
}
