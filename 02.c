/*2) Considerando que para um consórcio sabe-se o número total de prestações, a quantidade de prestações
pagas e o valor de cada prestação (que é fixo). Escreva um programa que determine o valor total já pago pelo
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
 
 
 
