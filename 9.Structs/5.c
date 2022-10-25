#include <stdio.h>

struct data
{
  int dia, mes, ano;
};

struct endereco
{
  char cidade[40], estado[40];
};

struct aluno
{
  char nome[20];
  struct data data_nascimento;
  struct endereco end;
};

int main()
{
  struct aluno alunos[3];

  int i;

  for (i = 0; i < 3; i++)
  {
    printf("Digite o nome:");
    gets(alunos[i].nome);
    printf("Digite a data de nascimento dd mm aa: ");
    scanf("%d %d %d", &alunos[i].data_nascimento.dia, &alunos[i].data_nascimento.mes, &alunos[i].data_nascimento.ano);
  }
}