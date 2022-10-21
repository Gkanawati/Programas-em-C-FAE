#include <stdio.h>

int main()
{
  struct materias
  {
    char nome[15];
    int notaMat;
    int notaAlg;
  };
  struct materias alunos[3];

  for (int i = 0; i < 3; i++)
  {
    fflush(stdin);
    printf("Digite o nome do alunos: ");
    gets(alunos[i].nome);
    printf("Digite a nota de matematica: ");
    scanf("%d", &alunos[i].notaMat);
    printf("Digite a nota de algoritmo: ");
    scanf("%d", &alunos[i].notaAlg);
    printf("\n");
  }

  for (int i = 0; i < 3; i++)
  {
    printf("\nO aluno %s: tirou %d em Mat, %d em Algoritmo e a sua media final eh: %d",
           alunos[i].nome,
           alunos[i].notaMat,
           alunos[i].notaAlg,
           (alunos[i].notaMat + alunos[i].notaAlg) / 2);
  }
}