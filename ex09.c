/*9) Ler um n�mero inteiro com at� 3 d�gitos. Separar os d�gitos desse n�mero e mostr�-los em linhas distintas.
Na sequ�ncia calcular e mostrar o inverso do n�mero.*/
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
