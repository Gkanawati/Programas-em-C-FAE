#include <stdio.h>
#include <string.h>

void foundLetter(char phrase[30], char letter)
{
  int positions[strlen(phrase)], i;

  int flag = 0;
  for (i = 0; i < strlen(phrase); i++)
  {
    if (phrase[i] == letter)
    {
      if (flag == 0)
      {
        printf("Posicao da letra: [");
        flag++;
      }
      printf(" %d,", i);
    }
  }
  if (flag == 1)
    printf("]");
}

int main()
{
  char letter;
  char phrase[30];

  printf("Digite uma frase: ");
  gets(phrase);

  printf("Digite uma letra a ser encontrada: ");
  scanf("%c", &letter);

  foundLetter(phrase, letter);
}