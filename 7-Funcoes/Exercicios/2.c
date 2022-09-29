#include <stdio.h>

void exibeRes(float temp)
{

  if (temp > 46)
  {
    printf("Gasoso");
  }
  else if (temp > 0 && temp < 46)
  {
    printf("Liquido");
  }
  else
  {
    printf("Solido");
  }
}

int main()
{
  float temp;

  printf("Digite a temperatura da agua: ");
  scanf("%f", &temp);

  exibeRes(temp);
}