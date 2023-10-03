/*Crie um programa que ajude o DETRAN a saber o total de recursos que foram
arrecadados com a aplica¸c˜ao de multas de trˆansito.
O algoritmo deve ler as seguintes informa¸c˜oes para cada motorista:
• n´umero da carteira de motorista (de 1 a 4327);
• n´umero de multas;
• valor de cada uma das multas.
Deve ser impresso o valor da d´ıvida para cada motorista e ao final da leitura o total de recursos arrecadados (somat´orio de todas as multas). O programa dever´a imprimir tamb´em o n´umero da carteira do
motorista que obteve o maior n´umero de multas.
Obs.: O programa encerra ao ler a carteira de motorista de valor 0*/


#include<stdio.h>

int main(){
  int carteira, quantmultas, i, maiormulta=0, motorista=0;
  float multas, totalmultas, recursos=0;
  do{
      totalmultas=0;

      printf("Infome o numero da carteira de motorista ou digite zero para encerrar o programa:");
      scanf("%d", &carteira);
      if(carteira == 0){
        break;
      }
      printf("Informe o numero de multas:");
      scanf("%d", &quantmultas);
      
      for(i=0; i < quantmultas; i++)
      {
        printf("Informe o valor da multa:");
        scanf("%f", &multas);

        totalmultas+=multas;
        
      }
      if(quantmultas > maiormulta)
      {
        maiormulta = quantmultas;
        motorista = carteira;
      }
      recursos+=totalmultas;
      printf("O valor das multas a pagar: R$%.2f\n", totalmultas);

  }while(carteira >=1 && carteira <=4327);

  printf("O valor arrecadado eh: R$%.2f", recursos);
  printf("O motorista que obteve  o maior numero de multas foi %d", motorista);
  
  return 0;
}
