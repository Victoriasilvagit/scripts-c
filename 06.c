/*6) Fazer um programa que leia um valor double que representa o salário de uma pessoa. Apresente
separadamente os reais (parte inteira) e os centavos (parte decimal).*/

#include <stdio.h>
#include <math.h>

int main()
{
	double salario;
	int reais;
	float centavos; 
	//entrada
	printf("Informe o valor do salario:");
	scanf("%lf", &salario);
	
	//processamento
	
	reais = round(salario);
	centavos = (salario - reais)* 100;
	
	//saida
	printf("Salario informado: R$%.2lf\n", salario);
	printf("Reais: %d\n", reais);
	printf("Centavos: %.0f", centavos);
	
	return 0;
	
}
