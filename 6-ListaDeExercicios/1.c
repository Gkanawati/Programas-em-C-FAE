#include <stdio.h>

int main()
{

  const int tamanho = 10;

  int i, RA, respCorretas = 0;
  char resp;
  char G[tamanho];
  char R[tamanho];

  for (i = 0; i < tamanho; i++)
  {
    printf("Digite a Resposta da questao [%d]: ", (i + 1));
    scanf(" %c", &G[i]);
  }

  do
  {

    printf("Digite o RA do aluno: ");
    scanf("%d", &RA);

    if (RA == 0)
    {
      return;
    }

    for (i = 0; i < tamanho; i++)
    {
      printf("Resposta do aluno Questao[%d]: ", (i + 1));
      scanf(" %c", &R[i]);

      if (G[i] == R[i])
      {
        respCorretas++;
      }
    }

    printf("Respostas Corretas: %d\n", respCorretas);

    if (respCorretas >= 7)
    {
      printf("APROVADO!\n");
    }
    else if (respCorretas == 5 || respCorretas == 6)
    {
      printf("EXAME!\n");
    }
    else
    {
      printf("ALUNO REPROVADO!\n");
    }
    respCorretas = 0;

  } while (RA != 0);

  return 0;
}
