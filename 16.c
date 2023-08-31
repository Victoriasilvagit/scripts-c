/*5) Ler três valores inteiros diferentes e colocá-los em ordem crescente. Os valores 
devem ser apresentadoscom uma instrução:
printf("Menor: %d Meio: %d Maior: %d\n", menor, meio, maior);*/

#include <stdio.h>

int main() 
{
  	int num1, num2, num3;
  
  	printf("Informe o primeiro numero:"); 
  	scanf("%d", &num1);
  	printf("Informe o segundo numero:"); 
  	scanf("%d", &num2);
  	printf("Informe o primeiro numero:"); 
  	scanf("%d", &num3);
  
  	if (num3 > num1)
    {
	    if (num1 > num2)
		{
		  printf("Menor: %d Meio: %d Maior: %d\n", num2, num1, num3);
		}
	    else 
		{
		  	if (num2 < num3)
		    {
		      printf("Menor: %d Meio: %d Maior: %d\n", num1, num2, num3);
		    }
		}
    }
  
  	if(num1 > num2)
	{
	    if (num2 > num3)
		{
		  printf("Menor: %d Meio: %d Maior: %d\n", num3, num2, num1);
		}
	    else 
		{
		  	if (num3 < num1)
		    {
		      printf("Menor: %d Meio: %d Maior: %d\n", num2, num3, num1);
		    }
		}
    }
  
  	if(num1 < num2)
	{
      	if (num3 < num1)
		{
	  		printf("Menor: %d Meio: %d Maior: %d\n", num3, num1, num2);
		}
      	else 
		{
	  		if (num3 < num2)
			{
	      		printf("Menor: %d Meio: %d Maior: %d\n", num1, num3, num2);
	    	}
		}
    }
  return 0;
}
