#include <stdio.h>

int preencherMatriz(int tamanhoMatriz)
{

  int i, j;
  int matriz[tamanhoMatriz][tamanhoMatriz];

  printf("Digite a matriz: \n");
  for (i = 0; i < tamanhoMatriz; i++)
  {
    for (j = 0; j < tamanhoMatriz; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("A diagonal principal eh:\n");

  for (i = 0; i < tamanhoMatriz; i++)
  {
    for (j = 0; j < tamanhoMatriz; j++)
    {
      if (i == j)
      {
        printf("%d ", matriz[i][j]);
      }
    }
  }
}

int main()
{
  int tamanhoMatriz;
  printf("Digite o tamanho da matriz:\n");
  scanf("%d", &tamanhoMatriz);

  preencherMatriz(tamanhoMatriz);
}