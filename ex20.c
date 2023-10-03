/*EXERC´ICIO 20] A pol´ıcia rodovi´aria resolveu fazer cumprir a lei e vistoriar ve´ıculos para cobrar
dos motoristas o DUT. Sabendo-se que o mˆes em que o emplacamento do carro deve ser renovado ´e
determinado pelo ´ultimo n´umero da placa do mesmo, fa¸ca um programa que, a partir da leitura da placa
do carro, informe o mˆes em que o emplacamento deve ser renovado.*/
#include<stdio.h>

int main()
{
  int placa;
  
  printf("Informe o ultimo numero da placa do veiculo:");
  scanf("%d", &placa);

  switch(placa)
  {
    case 1:
      printf("O emplacamento deve ser resnovado em Janeiro");
      break;
    case 2:
      printf("O emplacamento deve ser resnovado em Fevereiro");
      break;
    case 3:
      printf("O emplacamento deve ser resnovado em Marco");
      break;
    case 4:
      printf("O emplacamento deve ser resnovado em Abril");
      break;
    case 5:
      printf("O emplacamento deve ser resnovado em Maio");
      break;
    case 6:
      printf("O emplacamento deve ser resnovado em Junho");
      break;
    case 7:
      printf("O emplacamento deve ser resnovado em Julho");
      break;
    case 8:
      printf("O emplacamento deve ser resnovado em Agosto");
      break;
    case 9:
      printf("O emplacamento deve ser resnovado em Setembro");
      break;
  }
  return 0;
  
}