/*[EXERC´ICIO 27] Dado um pa´ıs A, com 5 milh˜oes de habitantes e uma taxa de natalidade de
3% ao ano, e um pa´ıs B com 7 milh˜oes de habitantes e uma taxa de natalidade de 2% ao ano, fazer
um programa que calcule e imprima o tempo necess´ario para que a popula¸c˜ao do pa´ıs A ultrapasse a
popula¸c˜ao do pa´ıs B.*/

#include<stdio.h>

int main()
{
  int paisA= 5000000, paisB=7000000, anos=0;
  double taxaA = 0.03, taxaB = 0.02;
   while(paisA <= paisB)
   {
     paisA += paisA * taxaA;
     paisB += paisB * taxaB;
     anos++;
   }
    printf("A populacao A ultrapassara a populacao B em %d anos.", anos);
  
  return 0;
}