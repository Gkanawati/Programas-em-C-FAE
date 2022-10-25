#include <stdio.h>
struct dadosPessoa
{
  char nome[30];
  int rg;
  int cpf;
} pessoa;

// typedef
// cria um tipo de variavel => nao declara variavel depois como tipo struct;
typedef struct
{
  int idade;
  char cidade;
} Pessoa;

struct Pessoa2
{
  int idade;
  char cidade;
};

int main()
{
  pessoa.rg = 123;

  Pessoa pessoa1;
  struct Pessoa2 pessoa2;

  printf("%d", pessoa.rg);
}