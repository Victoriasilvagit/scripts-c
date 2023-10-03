/*[EXERC´ICIO 09] Fa¸ca um programa em C que calcule a convers˜ao entre graus cent´ıgrados e
Fahrenheit. Para isso, leia o valor em cent´ıgrados e calcule com base na f´ormula a seguir. Ap´os calcular
o programa deve imprimir o resultado da convers˜ao.
f= (9*c+160)/5
Em que: F = Graus em Fahrenheit e C = Graus cent´ıgrados*/

#include<stdio.h>
int main()
{
  float farint, celsius_portioli;
  
  printf("Digite o centrigado: ");
  scanf("%f", &celsius_portioli);

  farint = ((9*celsius_portioli)+160)/5;
  
  printf("O valor do celsius portioli no ferenight eh %.1f", farint);
  return 0;
}