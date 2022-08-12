#include <stdio.h>

int main()
{
    int i, j;
    float notas[5][3];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nDigite a nota do aluno:");
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\nValores lidos: \n\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5.1f", notas[i][j]);
        }
        printf("\n");
    }
}