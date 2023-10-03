/*No Campeonato Mundial de Voleibol, se inscreveram 4 pa´ıses. Sabendo-se que na lista oficial de cada pa´ıs consta, al´em de outros dados, peso e idade de 6 jogadores, crie um programa que apresente as seguintes informa¸c˜oes:
• O peso m´edio e a idade m´edia de cada um dos times;
• O atleta mais pesado de cada time;
• O atleta mais jovem de cada time;
• O peso m´edio e a idade m´edia de todos os participantes.*/

#include<stdio.h>

int main()
{
  int idade, pais=0, i, menorIdade, somaIdade, idadeTotal=0, pesoTotal=0;
  float peso, somaPeso, maiorPeso;

  do
  {
    
    maiorPeso=0;
    somaIdade=0;
    somaPeso=0;
    menorIdade = 99;
    
    for(i=0; i<6; i++)
    {
      printf("Informe o peso:");
      scanf("%f", &peso);

      printf("Informe a idade:");
      scanf("%d", &idade);
  
      somaPeso+=peso;
      somaIdade+=idade;
      idadeTotal+=idade;
      
      if(maiorPeso < peso)
      {
        maiorPeso = peso;
      }
      if(menorIdade > idade)
      {
        menorIdade = idade;
      }
  
    }
    
    pais++;
    printf("O atleta mais pesado do %d° pais: %.2f\n",pais,  maiorPeso);
    printf("A media de peso do %d° pais : %.2f\n", pais, somaPeso/6);
    printf("A media de idade do %d° pais : %.2f\n", pais, (float)somaIdade/6);
    printf("O atleta mais jovem do %d° pais : %d\n", pais, menorIdade); 
  }while(pais <= 4);
  printf("A media de idade dos paises: %.2f\n", (float)idadeTotal/24);
  return 0;
}