/*7) Fazer um programa para ler o sal�rio de uma pessoa, o percentual de aumento e o percentual de
descontos. Os descontos incidem sobre o sal�rio com aumento. Calcular o novo sal�rio e mostr�-lo como no
exemplo a seguir.*/
#include <stdio.h>
#include <math.h>

int main()
{
	double percentualAumento, percentualDesconto, salario, centavos;
	int aumento, desconto, reais;


	//entrada
	printf("Informe o salario:");
	scanf("%lf", &salario);
	printf("Informe o percentual de aumento: (Ex: 10 para 10)");
	scanf("%d", &aumento);
	printf("Informe o percentual de desconto:(Ex: 3 para 3)");
	scanf("%d", &desconto);

	//processamento
	percentualAumento = (salario * aumento / 100) + salario;
	percentualDesconto =  percentualAumento - (percentualAumento * desconto / 100);
	reais = round(percentualDesconto);
	centavos = (percentualDesconto - reais) * 100 ;
	//saida
	printf("Salario aumentado: %.2lf\n", percentualAumento);
	printf("Salario liquido: %.2lf\n", percentualDesconto);
	printf("O salario liquido eh: %d reais e %.0lf centavos", reais, centavos);

	return 0;

}
