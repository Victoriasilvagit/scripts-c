/*8) Ler tr�s valores inteiros que representam os lados de um tri�ngulo e determinar se esses valores podem
formar um tri�ngulo (obs.: para ser um tri�ngulo cada lado deve ser menor que a soma dos outros dois lados).
Se for um tri�ngulo, determinar o seu tipo: equil�tero (todos os lados iguais), is�sceles (dois lados iguais) e
escaleno (todos os lados diferentes).*/
#include <stdio.h>

int main() {
    int lado1, lado2, lado3;

    printf("Informe o primeiro lado do triangulo: ");
    scanf("%d", &lado1);
    printf("Informe o segundo lado do triangulo: ");
    scanf("%d", &lado2);
    printf("Informe o Terceiro lado do triangulo: ");
    scanf("%d", &lado3);

    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2) 
	{
        printf("Os lados formam um triangulo.\n");

        if (lado1 == lado2 && lado2 == lado3)
		{
            printf("O triangulo eh equilatero.\n");
        } 
		else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) 
		{
            printf("O triangulo eh isosceles.\n");
        } 
		else
		{
            printf("O triangulo eh escaleno.\n");
        }
    } 
	else 
	{
        printf("Os lados nao formam um triangulo.\n");
    }

    return 0;
}
