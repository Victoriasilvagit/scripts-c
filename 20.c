/*1) Elaborar um programa que leia um número que representa uma senha e verifica se a mesma está correta
ou não, comparando-a com 12345 e informa "Acesso autorizado" ou "Acesso negado", conforme o caso.*/
#include <stdio.h>
int main()
{
	int senha; 
	
	//entradas 
	printf("Senha:");
	scanf("%d", &senha);
	if(senha == 12345)
	{
		printf("Acesso autorizado");
	}
	else 
	{
		printf("Acesso negado");
	}
}
