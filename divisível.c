/*9) Ler um n�mero e utilizando uma estrutura if else if else if... (obrigatoriamente encadeada) informar se ele:
a) � divis�vel por 5, por 3 ou por 2;
Exemplo: 30 � divis�vel por 2, 3 e 5.
b) � divis�vel somente por 5 e por 3; por 5 e por 2; ou por 3 e por 2;
Exemplo: 15 � divis�vel somente por 3 e por 5.
Exemplo: 10 � divis�vel somente por 5 e por 2.
Exemplo: 6 � divis�vel somente por 3 e por 2.
c) � divis�vel somente por 5, por 3 ou por 2;
Exemplo: 25 � divis�vel somente por 5
d) N�o � divis�vel por nenhum destes;
Exemplo: 7 n�o � divis�vel por 5, por 3 ou por 2;*/
#include <stdio.h>

int main() 
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
	{
        printf("%d eh divisivel por 2.\n", num);
        if (num % 3 == 0) 
		{
            printf("%d e divisivel por 3.\n", num);
            if (num % 5 == 0) 
			{
                printf("%d eh divisivel por 5.\n", num);
                printf("%d eh divisivel por 2, 3 e 5.\n", num);
            } 
			else 
			{
                printf("%d eh divisivel por 2 e 3.\n", num);
            }
        } 
		else if (num % 5 == 0) 
		{
            printf("%d eh divisivel por 2 e 5.\n", num);
        } else 
		{
            printf("%d eh divisivel por 2.\n", num);
        }
    } 
	else if (num % 3 == 0) 
	{
        printf("%d eh divisivel por 3.\n", num);
        if (num % 5 == 0) 
		{
            printf("%d eh divisivel por 3 e 5.\n", num);
        } 
		else 
		{
            printf("%d eh divisivel por 3.\n", num);
        }
    }
	else if (num % 5 == 0) 
	{
        printf("%d eh divisivel por 5.\n", num);
    } 
	else 
	{
        printf("%d nao eh divisivel por 2, 3 ou 5.\n", num);
    }

    return 0;
}

