/*EXERC´ICIO 10] Fa¸ca um programa em C que calcule a quantidade de litros de combust´ıvel
consumidos em uma viagem, sabendo-se que o carro tem autonomia de 12 km por litro de combust´ıvel.
O programa dever´a ler o tempo decorrido na viagem e a velocidade m´edia e aplicar as f´ormulas: Em
que:
D=T*V
L=D/12
• D = Distˆancia percorrida
• T = Tempo decorrido em horas
• V = Velocidade m´edia
• L = Litros de combust´ıvel consumidos
Ao final, o programa dever´a imprimir a distˆancia percorrida e a quantidade de litros consumidos na
viagem.
*/

#include<stdio.h>
int main()
{
  float velocidade, tempo, distancia,litros;
  
  printf("informa ai o tempo:");
  scanf("%f", &tempo);

  printf("informa ai a velocidade:");
  scanf("%f", &velocidade);
  
  distancia = tempo * velocidade;
  litros = distancia/12;
  
  printf("A distancia percorrida eh %.2f Km e a quantidade de litros consumidos a viagem eh de %.3f  ", distancia, litros);
  return 0;
}