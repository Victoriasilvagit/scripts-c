/*[EXERC´ICIO 33] Construa um programa que receba o valor e o c´odigo de v´arias mercadorias
vendidas em um determinado dia. Os c´odigos obedecem a lista a seguir:
• L-limpeza
• A-Alimenta¸c˜ao
• H-Higiene
Calcule e imprima:
• O total vendido naquele dia, com todos os c´odigos juntos;
• O total vendido naquele dia em cada um dos c´odigos.
Obs.: Para encerrar a entrada de dados, digite o valor da mercadoria zero.*/
#include<stdio.h>

int main(){
  char codigo;
  float preco, totalL=0, totalA=0, totalH=0, totalGeral=0;

  
  
  do
  {
    printf("Informe  o valor da mercadoria ou digite zero para sair:");
    scanf("%f", &preco);

    if(preco==0)
    {
      break;
    }
    
    printf("Tabela de mercadoria\n");
    printf("Codigos:\n");
    printf("L - Limpeza\n");
    printf("A - Alimentacao\n");
    printf("H - Higiene\n");

    printf("Informe o  valor do codigo:");
    fflush(stdin);
    scanf("%c", &codigo);

    
    totalGeral+=preco;

    switch(codigo)
    {
      case 'L':
      case 'l':
        totalL+=preco;
        break;

      case 'A':
      case 'a':
        totalA+=preco;
        break;

      case 'H':
      case 'h':
        totalH+=preco;
        break;
      
    }
    
  }while(codigo > 0 || preco > 0);

  printf("O total vendido naquele dia, com todos os codigos juntos %.2f\n", totalGeral);
  printf("O total vendido naquele dia do codigo A %.2f\n", totalA);
  printf("O total vendido naquele dia do codigo H %.2f\n", totalH);
  printf("O total vendido naquele dia do codigo L %.2f\n", totalL);

  return 0;
}