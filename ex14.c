/*[EXERC´ICIO 14] Fa¸ca um programa em C que leia um n´umero e informe se ele ´e divis´ıvel por 3
e por 7.*/
#include<stdio.h>
 int main(){
    int num;

   printf("informe um numero:");
   scanf("%d", &num);
   
  if(num%3==0 && num%7==0)
  {
     printf("O numero eh divisivel por 3 e por 7"); 
  }
  else
  {
    printf("O numero nao eh divisivel por 3 e por 7");
  }
   
  return 0;
 }