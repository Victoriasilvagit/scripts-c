/*6) Ler o gênero (F ou f para feminino, M ou m para masculino.
Para qualquer outro caractere informar que é inválido e finalizar
 o programa). Se informado um caractere válido, ler a altura da pessoa e calcular e mostrar
o seu peso ideal, utilizando as seguintes fórmulas:
a) Para homens: (72.7 * h) - 58;
b) Para mulheres: (62.1 * h) - 44.7.*/
#include<stdio.h>
int main()
{
	char genero;
	float altura, peso;
	
	printf("Informe o genero: [M]para masculino e [F] para feminino: ");
	scanf("%c", &genero);
	
		if(genero == 'M' || genero =='m')
		{
			printf("Informe a altura:");
			scanf("%f", &altura);
			peso = (72.7 * altura) - 58;
			printf("Seu peso ideal: %.2f", peso);
		}
		else if(genero == 'F' || genero =='f')
		{
			printf("Informe a altura:");
			scanf("%f", &altura);
			peso = (62.1 * altura) - 44.7;
			printf("Seu peso ideal; %.2f", peso);	
		}
		
		else
		{
			printf("Valor invalido");	
		}		


}
