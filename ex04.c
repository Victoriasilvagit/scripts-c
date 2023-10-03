//Fa¸ca um programa em C que leia um n´umero inteiro e imprima o seu antecessor e o seu sucessor.
#include <stdio.h>
int main() 
{
  int num1;
  
  printf("poe a porra do numero ai:");
  scanf("%d", &num1);
  
  printf("O antecessor do numero eh %d e o sucessor %d", num1-1, num1+1);

  return 0;
}