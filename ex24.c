/*EXERC´ICIO 24] Sabendo-se que a unidade l´ogica e aritm´etica (ULA) calcula o produto atrav´es
de somas sucessivas, crie um programa que calcule o produto de dois n´umeros inteiros lidos. S´o aceite
n´umeros lidos que sejam positivos e que o multiplicando seja menor do que o multiplicador. Caso
contr´ario mostre uma mensagem para cada situa¸c˜ao */

#include<stdio.h>

int main()
{
  int multiplicando, multiplicador, produto=0,i;

    printf("Informe o  multiplicando numero:");
    scanf("%d", &multiplicando);
  
    printf("Informe o  multiplicador numero:");
    scanf("%d", &multiplicador);

    if(multiplicando <= 0 || multiplicador <= 0)
    {
      printf("Os valores devem  ser positivos!!");
    }
    else if(multiplicando > multiplicador)
    {
      printf("O multiplicando deve ser menor que o multiplicador");
    }
    else
    {
      for(i=0; i < multiplicando; i++)
        {
          produto += multiplicador;
          printf("%d", produto);
        }
    }
  
  return 0;
}