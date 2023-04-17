#include <stdio.h>
#include <math.h>

int main()
{
	double troco;
	float centavos;
	int reais;
	
	//Entrada
	printf("Informe o valor do troco: R$");
	scanf("%lf", &troco);
	
	//processamento
	reais = round(troco);
	centavos = (troco - reais) * 100 ; 
	
	//Saida
	printf("O valor informado eh %d reais e %.0f centavos. ", reais, centavos);
	
	return 0;
}
