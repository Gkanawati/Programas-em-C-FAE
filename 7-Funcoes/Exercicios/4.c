#include <stdio.h>
/*
  Faça um função que verifique e mostre os números entre 1000 e 2000
  (inclusive) que, quando divididos por 11, produzam resto igual a 5.
*/

int verificaDiv()
{
  for (int i = 1000; i <= 2000; i++)
  {
    if ((i % 11) == 5)
    {
      printf("%d\n", i);
    }
  }
}

int main()
{
  verificaDiv();
}