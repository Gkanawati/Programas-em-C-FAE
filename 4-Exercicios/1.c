#include <stdio.h>

int main()
{

  const int tamanho = 10;

  int i;
  char nome[tamanho][30];
  int idade[tamanho];

  char maisVelho[30];
  char maisNovo[30];

  int maior = 0;
  int menor = 1000;

  for (i = 0; i < tamanho; i++)
  {
    fflush(stdin);
    printf("Digite nome: ");
    gets(nome[i]);
    fflush(stdin);
    printf("Digite idade: ");
    scanf("%d", &idade[i]);

    if (idade[i] > maior)
    {
      maior = idade[i];
      strcpy(maisVelho, nome[i]);
    }

    if (idade[i] < menor)
    {
      menor = idade[i];
      strcpy(maisNovo, nome[i]);
    }
    printf("\n");
  }

  for (i = 0; i < tamanho; i++)
  {
    printf("Nome: %s - ", nome[i]);
    printf("Idade: %d \n", idade[i]);
    printf("\n");
  }

  printf("Mais Velho: %s - Idade: %d \n", maisVelho, maior);
  printf("Mais Novo: %s - Idade: %d \n", maisNovo, menor);

  return 0;
}