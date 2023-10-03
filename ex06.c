/*[EXERC´ICIO 06] Fa¸ca um programa em C que leia dois n´umeros reais e calcule as quatro opera¸c˜oes
b´asicas entre estes dois n´umeros, adi¸c˜ao, subtra¸c˜ao, multiplica¸c˜ao e divis˜ao. Ao final, o programa deve
imprimir os resultados dos c´alculos com duas casas decimais.*/

#include <stdio.h>
int main() 
{
  float num1, num2;

  printf("Informa o numero ai:");
  scanf("%f", &num1);
   printf("Informa o numero ai dnv:");
  scanf("%f", &num2);
  
    
  printf("A soma dos numeros eh %.2f.\nA subtracao dos numeros eh %.2f.\nA multiplicacao dos numeros eh %.2f.\nA divisao dos numeros eh %.2f.", num1+num2, num1-num2, num1*num2,num1/num2 );
  
  return 0;
}