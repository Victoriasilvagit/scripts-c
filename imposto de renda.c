/*7) Calcular o imposto de renda de uma pessoa de acordo com a tabela:
              Renda anual                            Alíquota*
            Até R$ 10.000,00                            0%
      > R$ 10.000,00 e <= R$ 25.000,00                  10%
        Acima de R$ 25.000,00                           25%
*Alíquota é o percentual para realizar o cálculo do imposto de renda a ser pago.
Se informado valor negativo, não realizar o cálculo e informar o usuário.
*/
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
