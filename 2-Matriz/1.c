#include <stdio.h>

const int numLinhas = 5; // ou #define ALUNO 5
const int numCol = 3;

int main()
{
    int i, j;
    float notas[numLinhas][numCol];

    for (i = 0; i < numLinhas; i++)
    {
        for (j = 0; j < numCol; j++)
        {
            printf("\nDigite a nota do aluno:");
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\nValores lidos: \n\n");

    for (i = 0; i < numLinhas; i++)
    {
        for (j = 0; j < numCol; j++)
        {
            printf("%5.1f", notas[i][j]);
        }
        printf("\n");
    }
}