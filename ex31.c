/*[EXERC´ICIO 31] Foi feita uma pesquisa de audiˆencia de canal de TV em v´arias casas de Pato
Branco, em um determinado dia. Para cada casa visitada foram fornecidos o n´umero do canal (4, 5, 7,
12) e o n´umero de pessoas que estavam assistindo a ele naquela casa. Se a televis˜ao estivesse desligada,
nada seria anotado, ou seja, esta casa n˜ao entraria na pesquisa.
Criar um programa que:
• Leia um n´umero indeterminado de dados, isto ´e, o n´umero do canal e o n´umero de pessoas que estavam
assistindo;
• Calcule e imprima a porcentagem de audiˆencia em cada canal.
Obs1.: Para encerrar a entrada de dados, digite o n´umero do canal zero.
Obs2.: Crie um menu para mostrar ao usu´ario as op¸c˜oes de canais.*/

#include<stdio.h>
int main()
{
  int canal, assistindo, audiencia4=0, audiencia5=0, audiencia7=0, audiencia12=0, total=0;

    printf(" Audiencia de Canal de TV\n");
    printf("Opcoes de Canais:\n");
    printf("4 - Canal\n");
    printf("5 - Canal\n");
    printf("7 - Canal\n");
    printf("12 - Canal\n");
    printf("0 - Encerrar a entrada de dados\n");

  do{
    
    printf("Informe o numero de canal, ou digite zero para sair: ");
    scanf("%d", &canal);

    if(canal == 0)
    {
      break;
    }
    
    printf("Informe o numero de pessoas que estavam assistindo: ");
    scanf("%d", &assistindo);

    total+= assistindo;
    switch(canal){
      case 4:
        audiencia4+= assistindo;
        break;
      
      case 5:
        audiencia5+= assistindo;
        break;
      
      case 7:
        audiencia7+=assistindo;
        break;
      
      case 12:
        audiencia12+=assistindo;
        break;
    }
    
  }while(canal >= 4 && canal <= 12);

  printf("A porcentagem de audiencia do canal 4 eh %.2f%%", (float)audiencia4/total*100);
  printf("A porcentagem de audiencia do canal 5 eh %.2f%%", (float)audiencia5/total*100);
  printf("A porcentagem de audiencia do canal 7 eh %.2f%%", (float)audiencia7/total*100);
  printf("A porcentagem de audiencia do canal 12 eh %.2f%%",(float)audiencia12/total*100);

  return 0;
}