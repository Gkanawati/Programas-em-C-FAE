#include <stdio.h>
/*
  Escreva uma função que leia 15 valores inteiros entre 1 e 1000,
  encontrar o maior e o menor deles e mostrar o resultado.
*/
const int tam = 5;

int ordena()
{
  int valores[tam], i;
  int maior = 0;
  int menor = 1010;

  for (i = 0; i < tam; i++)
  {
    scanf("%d", &valores[i]);
  }

  for (i = 0; i < tam; i++)
  {
    if (valores[i] < menor)
    {
      menor = valores[i];
    }

    if (valores[i] > maior)
    {
      maior = valores[i];
    }
  }
  printf("Maior = %d\n", maior);
  printf("Menor = %d", menor);
}

int main()
{
  ordena();
}