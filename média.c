 /*4) Faça um programa que leia três notas de um aluno e calcule a média ponderada, com os pesos 1, 3 e 4,
respectivamente, e:
a) Se a média obtida está entre 6 a 10 informar que o aluno está aprovado;
b) Se a média obtida está entre 4 e 5,9 informar que o aluno está em recuperação. Nesse caso, ler a nota de
recuperação e calcular a média final (que é a média entre a média anual e a nota de recuperação);
b.1) Se a média final é menor que 5 informar que o aluno está reprovado após recuperação;
b.2) Se é igual ou maior que 5 informar que o aluno está aprovado após recuperação;
c) Se a média obtida é menor que 4 informar que o aluno está reprovado antes da recuperação.*/
 
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
