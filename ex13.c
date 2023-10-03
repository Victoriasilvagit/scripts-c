/*Faça um programa que leia um número e imprima uma das duas mensagens: ”E multiplo de 4” ou ”Não é múltiplo de 4”.*/

#include<stdio.h>
int main()
{
  int num1;

  printf("Informa o primeiro numero:");
  scanf("%d", &num1);

  if(num1%4==0)
  {
    printf("eh multiplo de 4");
  }
  else
  {
    printf("Nao eh multiplo de 4");
  }
  
  return 0;
}