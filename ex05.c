//Fa¸ca um programa em C que leia um n´umero real e imprima 1/4 deste n´umero

#include <stdio.h>
int main() 
{
  float num;
  
  printf("Poe o numero porra:");
  scanf("%f", &num);
  printf("Um quarto do numero eh %.2f", num/4);
  return 0;
}