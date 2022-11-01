#include <stdio.h>
#include <string.h>

/*  Fazer um programa que leia o nome
    do cliente, telefone, data da
    última compra e o endereço de entrega. Utilizar
    uma estrutura para armazenar os dados dos
    15 clientes da empresa, uma estrutura para
    data e outra para o endereço.
    Imprimir todos os dados.
*/

struct data
{
  int dia, mes, ano;
};

struct endereco
{
  char cidade[40], estado[40];
};

struct cliente
{
  char nome[20];
  char telefone[20];
  struct data dataDeCompra;
  struct endereco enderecoDeEntrega;
};

int main()
{
  struct cliente clientes[2];

  int i;

  for (i = 0; i < 2; i++)
  {
    fflush(stdin);
    printf("\nDigite o nome do cliente: ");
    gets(clientes[i].nome);
    printf("Digite o telefone do cliente: ");
    gets(clientes[i].telefone);
    printf("Digite a cidade do endereco: ");
    gets(clientes[i].enderecoDeEntrega.cidade);
    printf("Digite o estado do endereco: ");
    gets(clientes[i].enderecoDeEntrega.estado);
    printf("Digite a data de nascimento em DD MM AA: ");
    scanf("%d %d %d", &clientes[i].dataDeCompra.dia, &clientes[i].dataDeCompra.mes, &clientes[i].dataDeCompra.ano);
  }

  for (i = 0; i < 2; i++)
  {
    printf("\nNome: ");
    printf("%s\n", clientes[i].nome);
    printf("%s\n", clientes[i].telefone);
    printf("Endereco de Entrega: ");
    printf("%s - ", clientes[i].enderecoDeEntrega.cidade);
    printf("%s\n", clientes[i].enderecoDeEntrega.estado);
    printf("Data da compra: ");
    printf("%d/", clientes[i].dataDeCompra.dia);
    printf("%d/", clientes[i].dataDeCompra.mes);
    printf("%d\n", clientes[i].dataDeCompra.ano);
  }
}