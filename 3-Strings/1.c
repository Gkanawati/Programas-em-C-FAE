#include <stdio.h>

int main()
{
    char nome[20];
    char NomeComp[20];
    printf("Digite seu nome: ");
    // nao utiliza & no scanf de string
    scanf("%s", nome);
    printf("Olá, %s!\n", nome);

    // Para ler nomes completos
    gets(NomeComp);
    printf("Olá, %s!\n", NomeComp);
    return 0;
}