#include <stdio.h>

int main()
{
  int a, b, *c = NULL, d;

  a = 10;
  b = 20;
  c = &a;
  d = a + b;
  printf("\n%d\n", d);
  *c = 30;
  d = *c + b;

  printf("%d\n", d);

  d = a + b;
  printf("%d\n", d);
}