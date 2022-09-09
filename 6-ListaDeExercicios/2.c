#include <stdio.h>
#include <string.h>

#define tamanho 12

int main()
{
  int i;

  int temperaturas[tamanho];
  char meses[tamanho][30] = {"JANEIRO",
                             "FEVEREIRO",
                             "MARCO",
                             "ABRIL",
                             "MAIO",
                             "JUNHO",
                             "JULHO",
                             "AGOSTO",
                             "SETEMBRO",
                             "OUTUBRO",
                             "NOVEMBRO",
                             "DEZEMBRO"};
  char maiorTemp[30];
  char menorTemp[30];
  int maior = 0;
  int menor = 100;

  for (i = 0; i < tamanho; i++)
  {
    fflush(stdin);
    printf("Digite temperatura: ");
    scanf("%d", &temperaturas[i]);

    if (temperaturas[i] > maior)
    {
      maior = temperaturas[i];
      strcpy(maiorTemp, meses[i]);
    }

    if (temperaturas[i] < menor)
    {
      menor = temperaturas[i];
      strcpy(menorTemp, meses[i]);
    }
  }

  for (i = 0; i < tamanho; i++)
  {
    printf("meses: %s - ", meses[i]);
    printf("Idade: %d \n", temperaturas[i]);
    printf("\n");
  }

  printf("Maior Temp: %s - Temperatura: %d \n", maiorTemp, maior);
  printf("Menor Temp: %s - Temperatura: %d \n", menorTemp, menor);

  return 0;
}