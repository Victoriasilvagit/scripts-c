/*2) Uma �rvore de decis�o obt�m a decis�o pela execu��o de uma sequ�ncia de testes. Cada n� interno da �rvore
corresponde a um teste do valor de uma das propriedades e os ramos deste n� s�o identificados com os poss�veis
valores do teste. Cada n� folha da �rvore especifica o valor de retorno se a folha for atingida. A figura a seguir
apresenta um exemplo fict�cio de �rvore de decis�o, tomando atributos de clientes de uma institui��o financeira.
Elabore um programa que implemente essa �rvore de decis�o. As entradas podem ser do tipo char, portanto, considere
a primeira letra de cada palavra como entrada. Caso o usu�rio informe um caractere diferente dos aceit�veis, apresente
a mensagem "Caractere inv�lido".*/
#include<stdio.h>
 int main ()
 {
 	char opcao, opcao2; 
 	printf("O saldo da conta corrente \nOpcoes: \n [P]Positivo\n [N]Negativo\n");
 	printf("Digite a opcao desejada: ");
    scanf("%c", &opcao);
    fflush(stdin); 
    
    switch (opcao)
    {
    	case 'P':
    	case 'p':
    		printf("Cliente sem risco");
    		break;
    	case 'N':
    	case 'n':
    		printf("Aplicacao: possui aplicacoes \nOpcoes: \n [S]Sim\n [N]Nao:\n ");
    		printf("Digite a opcao desejada: ");
    		scanf("%c", &opcao2);
    		fflush(stdin);
    		switch(opcao2)
			{
			  	case 'S':
			  	case 's':
			  		printf("Cliente sem risco");
			  		break;
			  	case 'N':
			  	case 'n':
			  		printf("Cliente com risco");
			  		break;
			  
			}
    
	}
	return 0;
 }
