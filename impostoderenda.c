//ex07

#include <stdio.h>

int main()
{
	float rendaAnual, ir;
	printf("Informe a renda anual:");
	scanf("%f", &rendaAnual);
	
	if(rendaAnual >0)
	{
	
		if(rendaAnual <= 10000)
		{
			printf("Insento de impsto de renda");
		}
		
		else if(rendaAnual > 10000 && rendaAnual <= 25000 )
		{
			ir=(rendaAnual*10) / 100;
			printf("Inposto de renda: %.2f", ir);
		}
		else 
		{
			ir = (rendaAnual * 25) / 100 ;
			printf("Inposto de renda: %.2f", ir);
		}
	}
	
	else
	{
		printf("Valor invalido");
	}
	
}
