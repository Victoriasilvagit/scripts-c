//[EXERCICIO 02] Faça um programa em C que imprima a média aritmetica entre os números 5, 8 e 12.
#include <stdio.h>

int main() 
{
  float media, soma;
  soma = 5+8+12;
  media = (float)soma / 3;
  printf("A media entre 5, 8 e 12 é %.2f", media);
  return 0;
}