/*Faça um programa em C que leia dois valores inteiros e efetue a adição. Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8, caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5*/

#include<stdio.h>
int main()
{
  int num1, num2, soma;

  printf("Informa o primeiro numero:");
  scanf("%d", &num1);
  
  printf("Informa o primeiro numero:");
  scanf("%d", &num2);
  
  soma=num1+num2;
  
  if(soma > 20)
  {
    soma+=8;
    printf("O resultado da soma eh: %d", soma);
  }
  else if(soma <=20)
  {
    soma-=5;
    printf("O resultado final eh %d", soma);
  }
  
  return 0;
}