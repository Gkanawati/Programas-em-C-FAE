#include <stdio.h>

/*
  Faça um programa que leia um número, criar uma função para imprimir
  a tabuada desse número.
*/

int tabuada(int num)
{
  for (int i = 0; i <= 10; i++)
  {
    printf("%d * %d = %d\n", num, i, (num * i));
  }
}

int main()
{
  int num;
  printf("Digite o numero: ");
  scanf("%d", &num);
  tabuada(num);
  return 0;
}