#include <stdio.h>

int main()
{
    /*    // declaração de variáveis
    int index;

    char * nomeAlunos[3][3] = 
    {
        {"Aluno0", "Port: 30", "Mat: 80"},
        {"Aluno1", "Port: 60", "Mat: 30"},
        {"Aluno2", "Port: 93", "Mat 67"}
    };

    printf("Digite 0 para Aluno 0\n");
    printf("Digite 1 para Aluno 1\n");
    printf("Digite 2 para Aluno 2\n");    
    printf("Digite o número do aluno: ");

    scanf("%d", &index);

    printf("As notas do %s são: %s , %s \n", nomeAlunos[index][0], nomeAlunos[index][1],nomeAlunos[index][2]);
    */
    int i, j;
    int tabuleiro[10][11] = {
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {4, 0, 0, 3, 3, 3, 0, 0, 0, 0, 0},
    {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {7, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
    {8, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
    {9, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
    {10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 11; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
