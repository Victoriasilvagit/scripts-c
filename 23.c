/* 2)Escreva um programa que leia um número e verifique se ele é maior, menor ou igual a 10*/
#include <stdio.h>

int main()
{
	int num;
	
	printf("Digite um numero:");
	scanf("%d", &num);
	
	if(num < 10)
	{
		printf("O numero digitado eh menor que 10");
	}
	else if(num == 10)
	{
		printf("O numero digitado eh igual a 10");
	}
	else
	{
		printf("O numero eh maior que 10");
	}
}
