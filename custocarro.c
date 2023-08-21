#include <stdio.h>

int main() {
// o custo de um carro 



float custoFabrica, custoFinal, impostos = 0.45, distribuidor = 0.28;

  printf("digite o custo de fabrica do carro:");
  scanf("%f", &custoFabrica);

  custoFinal= (custoFabrica * distribuidor);

  custoFinal = (custoFabrica * distribuidor) + (custoFabrica * impostos) + custoFabrica;

  printf("o custo final do carro e: R$%.2f", custoFinal);






















  
  
}