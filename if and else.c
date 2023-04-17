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
    if (media>= 6 && <=10)
    {
        printf("Aprovado");
    }
    
    else if(media>=4 && media<=6)
    {
		printf("Aluno de recuperacao. Por Favor informe a nota da recuperacao:");
		scanf("%f", notaRec);
		mediaFinal = (mediaFinal + notaRec)/2;  
		
		if(mediaFinal >5)
		{
			printf("Reprovado apos a recuperacao");
		}
		if()	
	}
    else
    {
     printf("Reprovado");
    }

    return 0;
}
