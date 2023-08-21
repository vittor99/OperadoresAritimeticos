#include <stdio.h>

int main() {


//faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em anos. considerar ano em 365 dias , e mes com 30 dias 

int anos, meses, dias, totalDias;

  printf("digite a idade em anos:");
  scanf("%d", &anos);

  printf("digite a idade em meses:");
  scanf("%d", &meses);
  
  printf("digite a idade em dias:");
  scanf("%d", &dias);

totalDias = (anos * 365) + (meses * 30) + dias;
  
printf ("total dias vividos: %d", totalDias);





  
}