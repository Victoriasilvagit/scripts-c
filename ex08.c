/*8) Ler um n�mero inteiro com at� 5 d�gitos. Separar os d�gitos desse n�mero e mostr�-los em linhas distintas.
Tamb�m calcular e mostrar a soma dos d�gitos.*/

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
