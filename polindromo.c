/*11) N�meros pal�ndromos s�o aqueles que escritos da direita para a esquerda ou da esquerda para a direita
tem o mesmo valor. Ex.: 9229, 4554, 9779. Fazer um programa que dado um n�mero de 4 d�gitos, calcular e
escrever se este n�mero � ou n�o pal�ndromo.*/

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

   //an�lilise e saida 
    if (original == reverso) 
	{
        printf("%d eh um palindromo.\n", original);
    } else {
        printf("%d nao eh um palindromo.\n", original);
    }

    return 0;
}
