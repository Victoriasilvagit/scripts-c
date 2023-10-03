/*[EXERC´ICIO 19] Construa um programa que leia o percurso em quil´ometros, o tipo do carro e
informe o consumo estimado de combust´ıvel, sabendo-se que um carro tipo A faz 12 km com um litro
de gasolina, um tipo B faz 9 km e o tipo C, 8 km por litro.*/
#include<stdio.h>

int main()
{
  int quilometros;
  float consumo;
  char carro;
  
  printf("Informe o quilometro:");
  scanf("%d", &quilometros);
 // __fpurge(stdin); linux
//fflush(stdin); windows
  printf("Informe o tipo do carro:");
  scanf("%c", &carro);
  
  switch(carro)
  {
    case 'A':
    case 'a':
      consumo=quilometros*(float)12;
      printf("O valor de consumo do carro tipo A eh %.2f l", consumo);
      break;
    case 'B':
    case 'b':
      consumo=quilometros*(float)9;
      printf("O valor de consumo do carro tipo B eh %.2f l", consumo);
      break;
    case 'C':
    case 'c':
      consumo=quilometros*(float)8;
      printf("O valor de consumo do carro tipo C eh %.2f l", consumo);
  }
  return 0;
}