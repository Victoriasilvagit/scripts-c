/*2) Considerando que para um cons�rcio sabe-se o n�mero total de presta��es, a quantidade de presta��es
pagas e o valor de cada presta��o (que � fixo). Escreva um programa que determine o valor total j� pago pelo
consorciado e o saldo devedor.*/

#include <stdio.h>

 
 int main()
 {
	int totalPrestacoes;
	int quantidadePrestacoes;
	float valorFixo;
	float valorPago;
	float valorDevedor;
	
	// entrada
	printf("Informe a quantidade total de prestacoes:");
	scanf("%d", &totalPrestacoes);
	printf("Informe a quantidade de prestacoes pagas:");
	scanf("%d", &quantidadePrestacoes);
	printf("Informe o valor (fixo) da prestacao:");
	scanf("%f", &valorFixo);
	
	//processamento
	valorPago = valorFixo * quantidadePrestacoes;
	valorDevedor = (totalPrestacoes * valorFixo) - valorPago;
	
	//saida
	printf("O valor ja pago: R$%.2f\n", valorPago); 
	printf("Valor devedor: R$%.2f" , valorDevedor);

	
	return 0;
	
 }
 
 
 
