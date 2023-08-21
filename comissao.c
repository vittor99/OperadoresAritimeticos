#include <stdio.h>

int main() {

float numCarros, totalVendas, salarioFixo, valorPorCarro, salarioFinal, comissaoFixa = 0.05;

  printf ("digite a quantidade de carros vendidos:");
  scanf("%f", &numCarros);

  
  printf ("digite o valor total de vendas:");
  scanf("%f", &totalVendas);


  printf ("digite o salario fixo:");
  scanf("%f", &salarioFixo);


  printf ("digite a comissao por carro vendido:");
  scanf("%f", &valorPorCarro);

  salarioFinal = (numCarros * valorPorCarro) + (totalVendas * comissaoFixa);

  printf("salarioFinal: %f", salarioFinal);




  
}