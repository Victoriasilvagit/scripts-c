/*4) Fazer um programa que leia um n�mero inteiro de at� tr�s d�gitos (considere que ser� fornecido um
n�mero de at� 3 d�gitos), calcule e imprima a soma dos seus d�gitos.*/
#include <stdio.h>

int main()
{
	int num;
	int centena;
	int dezena;
	int unidade; 
	int soma;
	//Entrada 
	printf("Informe um tumero inteiro de tres digitos:");
	scanf("%d", &num);
	
	//processamento
	centena = num / 100; 
	dezena = (num % 100) / 10;
	unidade = num % 10;
	soma = centena + dezena + unidade;
	
	//saida
	printf("%d = %d + %d + %d = %d", num, centena, dezena, unidade, soma);
	
	
	 return 0;
		
}
