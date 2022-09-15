#include <stdio.h>

int i;

void imprimeAst(number)
{
  for (i = 0; i <= number; i++)
  {
    printf("*");
  }
  printf("\n");
}

int main()
{
  imprimeAst(3);
  imprimeAst(6);
  imprimeAst(9);
  imprimeAst(6);
  imprimeAst(3);

  return 0;
}