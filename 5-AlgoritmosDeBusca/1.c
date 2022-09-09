#include <stdio.h>
#include <string.h>
int main()
{

  int numeros[10], chave;
  int i, achou = 0, inicio = 0, meio, fim;
  for (i = 0; i < 10; i++)
  {

    printf("Digite um numero: ");
    scanf("%d", &numeros[i]);
  }
  printf("Digite o numero que deseja buscar: ");
  scanf("%d", &chave);
  fim = 9;
  meio = (inicio + fim) / 2;
  while (inicio <= fim && achou == 0)
  {
    if (numeros[meio] == chave)
      achou = 1;
    else
    {
      if (chave < numeros[meio])
        fim = meio - 1;

      else
        inicio = meio + 1;
      meio = (inicio + fim) / 2;
    }
  }
  if (achou == 1)
    printf("\nEncontrou %d na posicao %d", chave, meio);

  else
    printf("\nNao encontrou");
}