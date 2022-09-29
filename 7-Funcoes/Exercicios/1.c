#include <stdio.h>

void printRes(float media)
{
  printf("Media = %.2f\n", media);

  if (media > 6)
  {
    printf("Maior que 6");
  }
  else if (media == 6)
  {
    printf("Igual a 6");
  }
  else
  {
    printf("Menor");
  }
}

int main()
{
  float num1, num2;
  float media;

  printf("Digite o 1 numero: ");
  scanf("%f", &num1);

  printf("Digite o 2 numero: ");
  scanf("%f", &num2);

  media = (num1 + num2) / 2;

  printRes(media);

  return 0;
}