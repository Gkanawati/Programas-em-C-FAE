#include <stdio.h>

int main()
{
    float notas[5];
    float nota, mediaGeral;

    for (int i = 0; i < 5; i++)
    {
        do
        {
            printf("Digite a Nota: ");
            scanf("%f", &notas[i]);
        } while (notas[i] < 0 || notas[i] > 10);

        mediaGeral += notas[i] / 5;
    }

    for (int i = 0; i < 5; i++)
    {
        if (notas[i] >= mediaGeral)
        {
            printf("\nAlunos acima da media %d", i);
        }
    }

    printf("\nMedia Final: %.2f", mediaGeral);
    return 0;
}