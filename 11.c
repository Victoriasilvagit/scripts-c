/*2) Uma árvore de decisão obtém a decisão pela execução de uma sequência de testes. Cada nó interno da árvore
corresponde a um teste do valor de uma das propriedades e os ramos deste nó são identificados com os possíveis
valores do teste. Cada nó folha da árvore especifica o valor de retorno se a folha for atingida. A figura a seguir
apresenta um exemplo fictício de árvore de decisão, tomando atributos de clientes de uma instituição financeira.
Elabore um programa que implemente essa árvore de decisão. As entradas podem ser do tipo char, portanto, considere
a primeira letra de cada palavra como entrada. Caso o usuário informe um caractere diferente dos aceitáveis, apresente
a mensagem "Caractere inválido".*/
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
