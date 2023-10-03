/*[EXERC´ICIO 28] A COPEL faz a leitura mensal dos medidores de consumo de energia. Para cada
consumidor, s˜ao digitados os seguintes dados:
• n´umero do consumidor;
• quantidade de kWh consumidos durante o mˆes;
• tipo (c´odigo) do consumidor:
1-residencial, pre¸co em reais por kWh = 0,3
2-comercial, pre¸co em reais por kWh = 0,5
3-industrial, pre¸co em reais por kWh = 0,7
Os dados devem ser lidos at´e que seja encontrado o consumidor com n´umero 0 (zero). O programa deve
calcular e imprimir:
• O custo total para cada consumidor;
• O total de consumo para os trˆes tipos de consumidor;
• A m´edia de consumo dos tipos 1 e 2.*/

#include<stdio.h>
int main()
{
  int consumidor, tipo;
  float custoTotal, custoTres;
  double kWh;
  
  do
  {
    
    printf("Digite o numero do consumidor: ");
    scanf("%d", &consumidor);

     if (consumidor == 0)
     {
        break;
     }
  

    printf("Quantidade de kWh consumidos durante o mes: ");
    scanf("%lf", &kWh);
    
    printf("Informe o tipo do consumidor: \n1-residencial, preço em reais por kWh = 0,3\n2-comercial, preco em reais por kWh = 0,5\n3-industrial, preco em reais por kWh = 0,7.:");
  
    scanf("%d", &tipo);
    
    
    
    switch(tipo)
    {
      case 1:
        custoTotal = kWh * 0.3;
        printf("O custo total para o consumidor tipo 1: %.2f\n", custoTotal);
        break;
      case 2:
        custoTotal = kWh * 0.5;
        printf("O custo total para o consumidor tipo 2: %.2f\n", custoTotal);
        break;
      case 3:
        custoTotal = kWh * 0.7;
        printf("O custo total para o consumidor tipo 3: %.2f\n", custoTotal);
        break;
    }
    custoTres+=custoTotal;
  }while(consumidor != 0);

 
    printf("O custo total para os tres tipos: %.2f\n", custoTres);
    printf("A media do custo dos tres tipos: %.2f\n", (custoTres-0.7)/3);
    
  return 0;
}
