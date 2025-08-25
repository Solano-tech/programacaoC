#include <stdio.h>

int main(){
    
    //estudo de conversão explicita e implicita de variaveis

    int a = 5;
    int b = 12;
    int x = 5;
    int y = 12;
    int soma = x + y;
    int diferenca = y - x;
    float multiplicacao = x * y;
    float divisao = y / x; // nesta divisao o resultado é truncado, mostra apenas o valor inteiro
    float quociente = (float) b / a; // nesta divisao, mostra o resultado de forma decimal, completo

    printf("Soma: %d \n", soma);
    printf("Diferença: %d \n", diferenca);
    printf("Multiplicação: %.2f \n", multiplicacao);
    printf("Divisão: %.2f \n", divisao);
    printf("Divisão: %.2f \n", quociente);

    return 0;
}
