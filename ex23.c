/*Fa¸ca um programa que imprima os m´ultiplos de 5, no intervalo de 1 at´e 500.*/

#include<stdio.h>

int main()
{
  int i;
  for(i=1; i <=500;i++)
  {
    if(i%5==0)
    {
      printf("%d\t", i);
    }
  }
  return 0;
}
