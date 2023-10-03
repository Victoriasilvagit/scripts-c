/*Em um campeonato nacional de arco-e-flecha, tem-se equipes de trˆes jogadores
para cada estado. Sabendo-se que os arqueiros de uma equipe n˜ao obtiveram o mesmo n´umero de
pontos, criar um programa em C que informe se uma equipe foi classificada, de acordo com a seguinte
especifica¸c˜ao:
• Ler os pontos obtidos por cada jogador da equipe;
• Mostrar esses valores em ordem decrescente;
• Se a soma dos pontos for maior do que 100, imprimir a m´edia aritm´etica entre eles, caso contr´ario,
imprimir a mensagem ”Equipe desclassificada”.*/

#include<stdio.h>
int main()
{
  float jogador1, jogador2, jogador3, soma;
  printf("Digite o dos pontos: ");
  scanf("%f", &jogador1);

  printf("Digite o dos pontos: ");
  scanf("%f", &jogador2);

  printf("Digite o dos pontos: ");
  scanf("%f", &jogador3);
  
  
  if(jogador1 < jogador2 && jogador1 < jogador3 && jogador2 < jogador3)
  {
    printf("%.2f, %.2f, %.2f", jogador3, jogador2, jogador1);
  }
  else if(jogador1 < jogador2 && jogador1 < jogador3 && jogador3 < jogador2)
  {
     printf("%.2f, %.2f, %.2f",jogador2, jogador3, jogador1);
  }
  else if(jogador2 < jogador1 && jogador2 < jogador3 && jogador1 < jogador3)
  {
    printf("%.2f, %.2f, %.2f", jogador3, jogador1, jogador2);
  }
  else if(jogador2 < jogador1 && jogador2 < jogador3 && jogador3 < jogador1)
  {
    printf("%.2f, %.2f, %.2f",jogador1, jogador3, jogador2);
  }
  else if(jogador3 < jogador1 && jogador3 < jogador2 && jogador2 < jogador1)
  {
    printf("%.2f, %.2f, %.2f",jogador1, jogador2, jogador3);
  }
  else if(jogador3 < jogador1 && jogador3 < jogador2 && jogador1 < jogador2)
  {
    printf("%.2f, %.2f, %.2f", jogador2, jogador1, jogador3);
  }
    soma = jogador1 + jogador2 + jogador3;
  
  if(soma > 100)
  {
    printf("A media %.1f", soma/3);
  }
  else
  {
    printf("A equipe foi desclassificada!");
  }

  return 0;
}