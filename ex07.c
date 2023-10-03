/*[EXERC´ICIO 07] Fa¸ca um programa em C que leia o saldo de uma conta poupan¸ca e imprima o
novo saldo, considerando um reajuste de 2%.*/

#include <stdio.h>
int main() 
{
  float saldoPoupanca, novoSaldo;

  printf("Digite o saldo na poupanca: ");
  scanf("%f", &saldoPoupanca);
  
  novoSaldo = saldoPoupanca + (saldoPoupanca * 0.02);
  printf("O novo saldo com reajuste eh %.2f.", novoSaldo);
  
  return 0;
}