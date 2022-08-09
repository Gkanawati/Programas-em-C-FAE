#include <stdio.h>

int main()
{

    int numAlunos;
    float nota1, nota2, mediaFinal;
    int i;

    printf("Quantos alunos tem na turma?");
    scanf("%d", &numAlunos);

    for (i = 0; i <= numAlunos; i++)
    {
        printf("\n");
        printf("Nota1:");
        scanf("%f", &nota1);
        printf("Nota2:");
        scanf("%f", &nota2);
        printf("\n");

        mediaFinal = (nota1 + nota2) / 2;

        printf("\nMedia Final: %.2f\n", mediaFinal);
    }

    return 0;
}