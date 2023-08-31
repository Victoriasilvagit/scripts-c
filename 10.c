/*10)Fazer o programa para o algoritmo representado no fluxograma a seguir:*/
#include <stdio.h>

int main()
{
	float salarioBase, gratificacao, salarioBruto, ir, salarioLiquido;
	
	//Entrada
	printf("Informe o Salario Base:");
	scanf("%f", &salarioBase);
	printf("Informe A Gratificacao:");
	scanf("%f", &gratificacao);
	//procesamento
	salarioBruto = salarioBase + gratificacao;
	if (salarioBruto < 1000)
	{
		ir = salarioBruto * 15/100;
		salarioLiquido = salarioBruto - ir;
		printf("O salario liquido: %.2f", salarioLiquido); 
	}
	else
	{
		ir = salarioBruto * 20/100;
		salarioLiquido = salarioBruto - ir;
		printf("O salario liquido: %.2f", salarioLiquido); 
	}
	
}

