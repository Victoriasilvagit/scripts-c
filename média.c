 /*4) Fa�a um programa que leia tr�s notas de um aluno e calcule a m�dia ponderada, com os pesos 1, 3 e 4,
respectivamente, e:
a) Se a m�dia obtida est� entre 6 a 10 informar que o aluno est� aprovado;
b) Se a m�dia obtida est� entre 4 e 5,9 informar que o aluno est� em recupera��o. Nesse caso, ler a nota de
recupera��o e calcular a m�dia final (que � a m�dia entre a m�dia anual e a nota de recupera��o);
b.1) Se a m�dia final � menor que 5 informar que o aluno est� reprovado ap�s recupera��o;
b.2) Se � igual ou maior que 5 informar que o aluno est� aprovado ap�s recupera��o;
c) Se a m�dia obtida � menor que 4 informar que o aluno est� reprovado antes da recupera��o.*/
 
 #include <stdio.h>

 int main()
{
    float nota1, nota2, nota3, media,  mediaFinal, notaRec;
	//entradas
    printf("Nota 1:");
    scanf("%f", &nota1);
    printf("Nota 2:");
    scanf("%f", &nota2);
	printf("Nota 3:");
    scanf("%f", &nota3);
    //processamento
    
    media = (nota1*1 + nota2*3 + nota3*4)/8;
    
    //saida
    
    printf("Media: %.1f\n", media);
    if (media>= 6 && media<=10)
    {
        printf("Aprovado");
    }
    
    else if(media>=4 && media<6)
    {
		printf("Aluno de recuperacao. Por Favor informe a nota da recuperacao:");
		scanf("%f", &notaRec);
		mediaFinal = (media + notaRec)/2;  
		
		if(mediaFinal >=5 && media<=10)
		{
			printf("Aprovado apos a recuperacao");
		}
		else
		{
			printf("Reprovado apos a recuperacao");
		}	
	}
    else
    {
     printf("Reprovado antes da recuperacao");
    }

    return 0;
}
