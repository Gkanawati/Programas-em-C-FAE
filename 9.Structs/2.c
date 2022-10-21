#include <stdio.h>

int main()
{
  struct veiculo
  {
    char marca[30];
    char modelo[30];
    int preco;
  };
  struct veiculo carro;

  printf("Digite a marca do carro: ");
  gets(carro.marca);

  fflush(stdin);

  printf("Digite o modelo do carro: ");
  gets(carro.modelo);
  fflush(stdin);

  printf("Digite o preco do carro: ");
  scanf("%d", &carro.preco);

  printf("\nSeu %s %s custa: R$ %d", carro.marca, carro.modelo, carro.preco);
}