#include <stdio.h>

int main(){
    // declaracao das variaveis

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 30.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    // Exibir informações dos produtos

    printf("Produto: %s. Quantidade em estoque: %u. Valor unitário: R$ %.2f. \n", produtoA, estoqueA, valorA);
    printf("Produto: %s. Quantidade em estoque: %u. Valor unitário: R$ %.2f. \n", produtoB, estoqueB, valorB);

    // comparação com valor minimo em estoque
    // quando resultado igual a 1, tem estoque mínimo. Quando resultado 0, não tem estoque mínimo

    /*
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O %s tem estoque mínimo: %d \n", produtoA, resultadoA);
    printf("O %s tem estoque mínimo: %d \n", produtoB, resultadoB);
    */

    printf("O %s tem estoque mínimo: %d \n", produtoA, estoqueA > estoqueMinimoA);
    printf("O %s tem estoque mínimo: %d \n", produtoB, estoqueB > estoqueMinimoB);

    //Comparação dos valores totais

    valorTotalA = estoqueA * valorA;
    valorTotalB = estoqueB * valorB;

    printf("O valor total do %s (R$ %.2f) é maior que o valor total do %s (R$ %.2f): %d \n", produtoA, valorTotalA, produtoB, valorTotalB, valorTotalA > valorTotalB);
    
    return 0;
}
