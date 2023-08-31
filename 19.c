/*11) Números palíndromos são aqueles que escritos da direita para a esquerda ou da esquerda para a direita
tem o mesmo valor. Ex.: 9229, 4554, 9779. Fazer um programa que dado um número de 4 dígitos, calcular e
escrever se este número é ou não palíndromo.*/

#include <stdio.h>

int main() 
{
    int num, original, resto;
    int reverso = 0;
	//Entrda
    printf("Digite um numero com quatro digitos: ");
    scanf("%d", &num);

	//processamento
    original = num;
    resto = num % 10;
    reverso = reverso * 10 + resto;
    num = num / 10;
    resto = num % 10;
    reverso = reverso * 10 + resto;
    num = num / 10;
    resto = num % 10;
    reverso = reverso * 10 + resto;
    num = num / 10;
    resto = num % 10;
    reverso = reverso * 10 + resto;

   //análilise e saida 
    if (original == reverso) 
	{
        printf("%d eh um palindromo.\n", original);
    } else {
        printf("%d nao eh um palindromo.\n", original);
    }

    return 0;
}
