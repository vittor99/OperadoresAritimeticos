#include <stdio.h>

int main() {


// escreva um lagoritmo para ler o salario mensal atual de um funcionario e o percentual de reajuste. calcular e escrever o valor do novo salario

  float salarioAtual, porcentagem, porcentagemReajuste,  novoSalario; 
  
  printf ("digite o salario atual:");
  scanf ("%f", &salarioAtual);

    printf ("digite a porcentagem de reajuste:");
  scanf ("%f", &porcentagem);

  
porcentagemReajuste = porcentagem/100;

  novoSalario = (salarioAtual * porcentagemReajuste) + salarioAtual;

  

printf("novo salario: r$%.2f", novoSalario);




















  

}