/*Fa¸ca um programa em C que leia trˆes n´umeros inteiros e imprima os trˆes em
ordem crescente.*/
  
#include<stdio.h>
int main()
{
  int num1, num2, num3;
  printf("informe o primeiro numero:");
  scanf("%d", &num1);
  printf("informe o segundo o numero:");
  scanf("%d", &num2);
  printf("informe o terceiro o numero:");
  scanf("%d", &num3);

  if(num1 > num2 && num1 > num3 && num2 > num3)
  {
    printf("%d, %d, %d",num3, num2, num1);
  }
  else if(num1 > num2 && num1 > num3 && num3 > num2)
  {
     printf("%d, %d, %d",num2, num3, num1);
  }
  else if(num2 > num1 && num2 > num3 && num1 > num3)
  {
    printf("%d, %d, %d",num3, num1, num2);
  }
  else if(num2 > num1 && num2 > num3 && num3 > num1)
  {
    printf("%d, %d, %d",num1, num3, num2);
  }
  else if(num3 > num1 && num3 > num2 && num2 > num1)
  {
    printf("%d, %d, %d",num1, num2, num3);
  }
  else if(num3 > num1 && num3 > num2 && num1 > num2)
  {
    printf("%d, %d, %d",num2, num1, num3);
  }
  
  return 0;
}