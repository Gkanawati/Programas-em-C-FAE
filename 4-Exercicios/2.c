#include <stdio.h>
#include <string.h>

int main()
{

  const nPessoas = 20;

  int i, quit;
  char nomes[nPessoas][20];
  char pesquisa[20];

  for (i = 0; i < nPessoas; i++)
  {
    printf("Digite o %do nome: ", i + 1);
    gets(nomes[i]);
    fflush(stdin);
  }

  do
  {
    printf("Digite o nome para pesquisar? ");
    gets(pesquisa);
    fflush(stdin);

    printf("\n");

    for (i = 0; i < nPessoas; i++)
    {
      int comp = strcmp(pesquisa, nomes[i]);

      if (comp == 0)
      {
        printf("==========================\n");
        printf("Nome %s encontrado na posicao: %d.\n", nomes[i], i);
        printf("==========================\n");
        break;
      }

      if (comp != 0 && i == (nPessoas - 1))
      {
        printf("Nome nao encontrado em nosso banco de dados! :(\n");
      }
    }

    quit = strcmp(pesquisa, "FIM");

  } while (quit != 0);

  return 0;
}