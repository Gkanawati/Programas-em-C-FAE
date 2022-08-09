#include <stdio.h>

int main()
{

    float nota1, nota2, mediaFinal;
    char resp;

    do
    {
        do
        {
            printf("Digite a 1 nota: ");
            scanf("%f", &nota1);
        } while (nota1 < 0 || nota1 > 10);

        do
        {
            printf("Digite a 2 nota: ");
            scanf("%f", &nota2);
        } while (nota2 < 0 || nota2 > 10);

        mediaFinal = (nota1 + nota2) / 2;

        if (mediaFinal >= 6)
        {
            printf("Aluno aprovado, Nota Final: %.2f\n", mediaFinal);
        }
        else
        {
            printf("Aluno reprovado, Nota Final: %.2f\n", mediaFinal);
        }

        printf("Deseja ralizar novo calculo? ");
        scanf(" %c", &resp);
    } while (resp == 's');

    return 0;
}