#include <stdio.h>

void trocaNada(int x, int y)
{
  int aux;
  aux = x;
  x = y;
  y = aux;
}

void troca(int *x, int *y)
{
  int aux = *x;
  *x = *y;
  *y = aux;
}

int main()
{
  int a = 10, b = 20;
  trocaNada(a, b);
  printf("Troca nada: a=%d b=%d", a, b);

  printf("\n");

  troca(&a, &b);
  printf("Troca: a=%d b=%d", a, b);
  return 0;
}
