/* No dia da estr´eia do filme ”Avatar: O Caminho da Agua ´ ”, uma grande emissora de TV realizou uma pesquisa logo ap´os o encerramento do filme. Cada espectador respondeu a um question´ario no qual constava sua idade e a sua opini˜ao em rela¸c˜ao ao filme: excelente - 3; bom - 2; regular - 1. Criar um programa que receba a idade e a opini˜ao de 5 espectadores, calcule e imprima:
• A m´edia das idades das pessoas que responderam excelente;
• A quantidade de pessoas que responderam regular;
• A percentagem de pessoas que responderam bom entre todos os espectadores analisados.*/

#include<stdio.h>
int main()
{
  int idade, opiniao, i, cont1=0, cont2=0, soma=0;

  for(i=0; i<5; i++)
  {
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a nota: ");
    scanf("%d", &opiniao);
    
    switch(opiniao)
    {
      case 1:
        cont1++;
        break;
      case 2:
        cont2++;
        break;
      case 3:
        soma+=idade;
        break;
    }
  }
  printf("A percentagem das idade eh: %.2f%%", (float)cont2*10);
  printf("pessoas que responderam regular: %d", cont1);
  printf("A media das idade eh: %.2f", (float)soma/5);
  
  return 0;
}
