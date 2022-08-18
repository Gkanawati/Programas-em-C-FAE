#include <stdio.h>

int main()
{
    int i, j;

    const int Linhas = 5;  // Alunos
    const int Colunas = 5; // Notas

    float Notas[Linhas][Colunas];
    float Media[Linhas][1];
    float acumulator;

    for (i = 0; i < Linhas; i++)
    {
        for (j = 0; j < Colunas; j++)
        {
            printf("Didite a nota do aluno %d: ", i + 1);
            scanf("%f", &Notas[i][j]);
        }
    }

    printf("\nTodas as Notas: \n");
    for (i = 0; i < Linhas; i++)
    {
        for (j = 0; j < Colunas; j++)
        {
            printf("%5.1f", Notas[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    // Calc media do aluno na coluna j
    for (i = 0; i < Linhas; i++)
    {
        for (j = 0; j < Colunas; j++)
        {
            acumulator += Notas[i][j];
        }
        Media[i][1] = acumulator / Colunas;
        printf("Media do aluno %d eh: %.2f\n", i, Media[i][1]);
        acumulator = 0;
    }
}