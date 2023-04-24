/*9) Ler um número e utilizando uma estrutura if else if else if... (obrigatoriamente encadeada) informar se ele:
a) É divisível por 5, por 3 ou por 2;
Exemplo: 30 é divisível por 2, 3 e 5.
b) É divisível somente por 5 e por 3; por 5 e por 2; ou por 3 e por 2;
Exemplo: 15 é divisível somente por 3 e por 5.
Exemplo: 10 é divisível somente por 5 e por 2.
Exemplo: 6 é divisível somente por 3 e por 2.
c) É divisível somente por 5, por 3 ou por 2;
Exemplo: 25 é divisível somente por 5
d) Não é divisível por nenhum destes;
Exemplo: 7 não é divisível por 5, por 3 ou por 2;*/
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

