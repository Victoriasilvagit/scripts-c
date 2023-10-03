/*[EXERCicICIO 11] Fa¸ca um programa em C que leia dois valores num´ericos inteiros e efetue a
adi¸c˜ao, caso o resultado seja maior que 10. Ao final, apresentar o resultado.*/
#include<stdio.h>
int main()
{
  int num1, num2, soma;

  printf("Informa o primeiro numero:");
  scanf("%d", &num1);
  
  printf("Informa o primeiro numero:");
  scanf("%d", &num2);
  
  if(num1+num2 > 10)
  {
    soma=num1+num2;
    printf("O resultado da soma eh: %d", soma);
  }
  else
  {
    printf("Os valores informados sao:  %d e %d", num1, num2);
  }
  
  return 0;
}