/*EXERC´ICIO 17] Um comerciante comprou um produto e quer vendˆe-lo com um lucro de 45% se
o valor da compra for menor que R$20,00, caso contr´ario, o lucro ser´a de 30%. Fa¸ca um programa em
C que leia o valor do produto e imprima o valor da venda.*/

#include<stdio.h>
int main()
{
  float preco;
  printf("Digite o valor do produto: ");
  scanf("%f", &preco);

  if(preco < 20)
  {
    preco+=preco*0.45;
  }
  else
  {
    preco+=preco * 0.30;
  }
  printf("O novo valor a ser vendido eh de %.2f ", preco);
  return 0;
}