#include <stdio.h>
#include <string.h>

void troca(char *vet)
{
  for (int i = 0; i < strlen(frase); i++)
  {
    switch (*vet)
    {
    case 'a':
      *vet = 'u';
      break;
    case 'e':
      *vet = 'o';
      break;
    case 'i':
      *vet = 'a';
      break;
    case 'o':
      *vet = 'a';
      break;
    case 'u':
      *vet = 'i';
      break;
    }
    vet++;
  }
}

void imprime(char *vet)
{
  printf("\n\n");
  int tam = strlen(vet);
  for (int i = 0; i < tam; i++)
  {
    printf("%s", vet[i]);
  }
}

int main()
{
  char frase[100];
  printf("\nDigite uma frase:");
  gets(frase);
  troca(frase);
  imprime(frase);
}