//Faça um programa em C que leia dois numeros reais e os imprima com 3 casas decimais.

#include <stdio.h>
int main() 
{
  float num1, num2;
  
  printf("poe a porra do numero ai:");
  scanf("%f", &num1);

  printf("poe a porra do numero ai dnv:");
  scanf("%f", &num2);
  printf("A porra do primeiro numero eh %.3f e %.3f", num1, num2);

  return 0;
}