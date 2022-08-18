#include <stdio.h>

int main()
{
    int i, j;

    const int Linhas = 3;
    const int Colunas = 4;

    int Notas[Linhas][Colunas];
    int Soma[Linhas][1];
    int acumulator = 0;

    for (i = 0; i < Linhas; i++)
    {
        for (j = 0; j < Colunas; j++)
        {
            printf("Didite o numero da linha %d: ", i + 1);
            scanf("%d", &Notas[i][j]);
        }
    }

    printf("\nToda a Matriz: \n");
    for (i = 0; i < Linhas; i++)
    {
        for (j = 0; j < Colunas; j++)
        {
            printf(" %5.d ", Notas[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < Linhas; i++)
    {
        for (j = 0; j < Colunas; j++)
        {
            acumulator += Notas[i][j];
        }
        printf("Soma da linha %d eh: %d\n", i + 1, acumulator);
        acumulator = 0;
    }

    printf("\n");

    for (i = 0; i < Colunas; i++)
    {
        for (j = 0; j < Linhas; j++)
        {
            acumulator += Notas[j][i];
        }
        printf("Soma da coluna %d eh: %d\n", i + 1, acumulator);
        acumulator = 0;
    }
}