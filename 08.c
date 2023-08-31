/*8) Ler um número inteiro com até 5 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
Também calcular e mostrar a soma dos dígitos.*/

#include <stdio.h>

int main()
{
	int num, primeiroDig, segundoDig, terceiroDig, quartoDig, quintoDig, soma;

    //entrada
    printf("Informe um numero de cinco digitos: ");
    scanf("%d", &num);
    
    //processamento
	quintoDig = num / 1 % 10;
	quartoDig = num / 10 % 10;
	terceiroDig = num / 100 % 10;
	segundoDig = num / 1000 % 10;
	primeiroDig = num / 10000 % 10;
    soma =  primeiroDig + segundoDig + terceiroDig + quartoDig + quintoDig;
    //saida
    printf("%d eh o primeiro digito \n", primeiroDig);
    printf("%d eh o segundo digito \n", segundoDig);
    printf("%d eh o terceiro digito \n", terceiroDig);
    printf("%d eh o quarto digito \n", quartoDig);
	printf("%d eh o quinto digito \n", quintoDig);
	printf("A soma dos digitos eh: %d \n", soma);
	
	return 0;
}
