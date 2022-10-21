#include <stdio.h>

int main()
{
  struct individuo
  {
    int idade;
    char nome[30], estado_civil[15], sexo[5];
  };
  struct individuo pessoa;

  printf("Nome: ");
  gets(pessoa.nome);

  fflush(stdin);

  printf("Idade: ");
  scanf("%d", &pessoa.idade);

  fflush(stdin);

  printf("Estado Civil: ");
  gets(pessoa.estado_civil);

  printf("Sexo: ");
  gets(pessoa.sexo);

  printf("\n\n%s", pessoa.nome);
  printf("\n%d", pessoa.idade);
  printf("\n%s", pessoa.estado_civil);
  printf("\n%s", pessoa.sexo);
}