#include <stdio.h>

const int Linhas = 2;
const int Col = 2;

int main()
{
    int i, j;
    int matrizA[Linhas][Col];
    int matrizB[Linhas][Col];
    int matrizC[Linhas][Col];

    printf("\nMatriz A: ");
    for (i = 0; i < Linhas; i++)
    {
        for (j = 0; j < Col; j++)
        {
            printf("\nDigite um numero: ");
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("\nMatriz B: ");
    for (i = 0; i < Linhas; i++)
    {
        for (j = 0; j < Col; j++)
        {
            printf("\nDigite um numero: ");
            scanf("%d", &matrizB[i][j]);
        }
    }

    printf("\nMatriz C:\n");
    for (i = 0; i < Linhas; i++)
    {
        for (j = 0; j < Col; j++)
        {
            matrizC[i][j] = (matrizA[i][j] + matrizB[i][j]);
            printf("%5.1d", matrizC[i][j]);
        }
        printf("\n");
    }
}