/*9) Ler um número inteiro com até 3 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
Na sequência calcular e mostrar o inverso do número.*/
#include <stdio.h>

int main()
{
	int num, dig1, dig2, dig3;

	//entrada
	printf("Informe um numero de tres digitos:");
	scanf("%d", &num);
	
	//processamento
	dig1 = num /100;
	dig2 = num /10 % 10;
	dig3 = num / 1 % 10;
	
	//saida
	printf("%d eh o primeiro digito\n", dig1);
	printf("%d eh o segundo digito\n", dig2);
	printf("%d\eh o terceiro digito \n", dig3);
	printf("O inverso do numero eh %d%d%d", dig3, dig2, dig1);
	
	return 0;
	
	
}
