#include <stdio.h>

const int Linhas = 2;
const int Col = 2;

int main()
{
    int i, j, mult;
    int matrizA[Linhas][Col];
    int matrizB[Linhas][Col];

    printf("\nMatriz A: ");
    for (i = 0; i < Linhas; i++)
    {
        for (j = 0; j < Col; j++)
        {
            printf("\nDigite um numero: ");
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("\nDigite o multiplicador: ");
    scanf("%d", &mult);

    printf("\nMatriz B:\n");
    for (i = 0; i < Linhas; i++)
    {
        for (j = 0; j < Col; j++)
        {
            matrizB[i][j] = matrizA[i][j] * mult;
            printf("%5.1d", matrizB[i][j]);
        }
        printf("\n");
    }
}