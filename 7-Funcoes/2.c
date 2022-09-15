#include <stdio.h>

int ConsumoPLitro(distancia, litros)
{
  int consumo = (distancia / 1000) / litros;

  return consumo;
}

int main()
{
  int distance, litros, consumo;

  printf("Digite a distancia percorrida pelo veiculo (metros):\n");
  scanf("%d", &distance);

  printf("Digite quantos Litros de gasolina foram consumidos.\n");
  scanf("%d", &litros);

  consumo = ConsumoPLitro(distance, litros);
  printf("O consumo do carro foi: %d km/l", consumo);
}