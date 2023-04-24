/*8) Ler três valores inteiros que representam os lados de um triângulo e determinar se esses valores podem
formar um triângulo (obs.: para ser um triângulo cada lado deve ser menor que a soma dos outros dois lados).
Se for um triângulo, determinar o seu tipo: equilátero (todos os lados iguais), isósceles (dois lados iguais) e
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
