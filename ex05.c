/*5) (DESAFIO) Obter o resto da divis�o de dois valores inteiros informados pelo usu�rio, sem usar o operador
de resto.
*/
#include<stdio.h>

int main()
{
	int num1, num2, divisao, resto;
	
	//entrada
	printf("Digite o primeiro numero:");
	scanf("%d", &num1);
	printf("Digite o segundo numero:");
	scanf("%d", &num2);
	//processamento
	divisao = (num1 / num2) * num2;
	resto = num1 - divisao;
	
	//saida
	printf("Resto da divisao: %d", resto);
}
