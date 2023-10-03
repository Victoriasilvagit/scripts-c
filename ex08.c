/*[EXERC´ICIO 08] Fa¸ca um programa em C que leia o valor de um produto, o percentual do desconto desejado e imprima o valor do desconto e o valor do produto subtraindo o desconto.*/

#include<stdio.h>
int main()
{
  float valor, desconto;
  
  printf("Informa o valor do produto bct:");
  scanf("%f", &valor);

  printf("Informa o valor do percentual bct:");
  scanf("%f", &desconto);

  desconto=desconto/100;
  
  printf("O valor do desconto eh %2.f.\nO valor do produto com desconto eh R$%.2f", valor*desconto, valor-(valor*desconto));
  return 0;
}