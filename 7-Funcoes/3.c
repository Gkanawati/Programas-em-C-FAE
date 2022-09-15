#include <stdio.h>

void calculo(char nome[30])
{
  int ano;

  printf("Digite seu ano de nascimento:\n");
  scanf("%d", &ano);

  int idade = (2022 - ano);

  printf("%s tem %d anos\n", nome, idade);
}

int main()
{
  char nome[20];

  printf("Digite o seu nome:\n");
  gets(nome);

  calculo(nome);
}