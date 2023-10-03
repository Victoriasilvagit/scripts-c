/*[EXERC´ICIO 29] Sabendo-se que a unidade l´ogica e aritm´etica (ULA) calcula a divis˜ao por meio
de subtra¸c˜oes sucessivas, criar um algoritmo que calcule e imprima o resto da divis˜ao de n´umeros inteiros
lidos.
Para isso, basta subtrair o divisor ao dividendo, sucessivamente, at´e que o resultado seja menor do que
o divisor.
O n´umero de subtra¸c˜oes realizadas corresponde ao quociente inteiro e o valor restante da subtra¸c˜ao
corresponde ao resto. Valide para que os n´umeros lidos sejam positivos e que o dividendo seja maior do
que o divisor.
*/
#include <stdio.h>
int main(){
  int divisor, dividendo, i;
  printf("Informe o divisor:");
  scanf("%d", &divisor);
  printf("Informe o dividendo:");
  scanf("%d", &dividendo);

  if(divisor <= 0 || dividendo < 0)
  {
    printf("Valor informado invalido! Os valores devem ser positivos");
  }
  else
  {
    if(divisor > dividendo)
    {
      printf("O dividendo deve ser maior que o divisor!");
    }
    else
    {
       for(i=0; dividendo >= divisor; i++)
        {
          dividendo-= divisor;
    
        }
    }

    printf("O quociente eh %d", i);
    printf("O resto da divisao eh %d", dividendo);
    
  }

 
  
}