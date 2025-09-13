#include <stdio.h>

//Estudar conversão explicita e implicita atraves do calculo de media

int main(){

//    int nota1, nota2, nota3;
    float nota1, nota2, nota3;
    float media;
    char resultado;
    char opcao;

    printf("*** Cálculo da Média ***\n");
    
    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a sua terceira nota: ");
    scanf("%f", &nota3);

//    media = (float)(nota1 + nota2 + nota3) / 3; // Usando casting e convertendo as variáveis antes do cálculo
    media = (nota1 + nota2 + nota3) / 3;

    printf("Sua média é %.1f\n", media);

//     Se média maior que 6, aprovado
    resultado = (media >= 6) ? printf("Aprovado!\n"): printf("Reprovado!\n");
    //if (media >= 6){
    //    printf("Aprovado!");
    //} else{
    //    printf("Reprovado!");
    //}

    printf("Escolha uma opção: ");
    scanf(" %c", &opcao);

    switch(opcao){
        case 'm':
        //case 'M':
            printf("Vc escolheu maior\n");
        break;
        case 'n':
        //case 'N':
            printf("Vc escolheu menor\n");
        break;
        case 's':
        //case 'S':
            printf("Saindo... \n"); //digo
        break;
        default:
            printf("Opcao invalida\n");
        break;

    }

    return 0;
}
