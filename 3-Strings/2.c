#include <stdio.h>

int main()
{
    char email[20];
    char nome[20];
    int i = 0;

    printf("Digite seu email: ");
    // Para ler nomes completos
    gets(email);

    while (email[i] != '\0' && email[i] != '@')
    {
        nome[i] = email[i];
        i++;
    }
    nome[i] = '\0';

    printf("Ola, %s!\n", nome);
    printf("Tamanho: %d!\n", i);
    return 0;
}