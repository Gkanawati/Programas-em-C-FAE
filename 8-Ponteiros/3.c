#include <stdio.h>

void troca(int *i, int *j)
{
  printf("entrou\n");
  int temp;
  printf("\n i = %d\n", *i);
  temp = *i;
  *i = *j;
  *j = temp;
}

int main()
{
  int valor1, valor2;
  printf("Digite o 1o valor: ");
  scanf("%d", &valor1);

  printf("Digite o 2o valor: ");
  scanf("%d", &valor2);

  troca(&valor1, &valor2);

  printf("\nvalor1: %d", valor1);
  printf("\nvalor2: %d", valor2);
}