/*3) Escreva um programa que leia um número e verifique se ele se encontra no intervalo entre 5 e 20 ou fora
do fora do intervalo entre 5 e 20. */
#include <stdio.h>

int main()
{
	int num;
	printf("Digite um numero:");
	scanf("%d", &num);
	
	if(num >= 5 && num<=20)
	{
		printf("%d esta no intervalo de 5 e 20", num);
	}
	else
	{
		printf("%d esta fora intervalo de 5 e 20", num);
	}
}
