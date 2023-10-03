/*[EXERCICIO 32] Crie um programa que calcule e imprima o CR do per´ıodo para os alunos de
Engenharia de Computa¸c˜ao. Para cada aluno, o algoritmo dever´a ler:
• n´umero da matr´ıcula;
• quantidade de disciplinas cursadas;
• notas em cada disciplina.
Al´em do CR de cada aluno, o programa deve imprimir o melhor CR dos alunos que cursaram 5 ou mais
disciplinas.
O fim da entrada de dados é marcada por uma matr´ıcula inv´alida (matr´ıculas v´alidas de 1 a 5000).
Obs.: CR do aluno ´e igual `a m´edia aritm´etica de suas notas.
*/

#include <stdio.h>

int main() {
    int ra, disciplinas, i;
    float nota, somaNotas, melhorCr = -1.0, cr;

    while (1) {
        somaNotas = 0;

        printf("Número de matrícula: ");
        scanf("%d", &ra);

        if (ra < 1 || ra > 5000) {
            break;
        }

        printf("Informe a quantidade de disciplinas cursadas: ");
        scanf("%d", &disciplinas);
        
        
       
        for (i = 0; i < disciplinas; i++) {
            printf("Nota da %da disciplina: ", i + 1);
            scanf("%f", &nota);
            somaNotas += nota;
        }

        cr = somaNotas / disciplinas;
        printf("O CR do aluno de número de Matrícula %d é %.2f\n", ra, cr);

        if (disciplinas >= 5 && cr > melhorCr) {
            melhorCr = cr;
        }
    }

    if (melhorCr > -1.0) {
        printf("O melhor CR entre os alunos cursando 5 ou mais disciplinas é %.2f\n", melhorCr);

    }
    return 0;
}
      ----------------------CODIGO DA GLORINHA-------------------
/*[EXERCICIO 32] Crie um programa que calcule e imprima o CR do per´ıodo para os alunos de
Engenharia de Computa¸c˜ao. Para cada aluno, o algoritmo dever´a ler:
• n´umero da matr´ıcula;
• quantidade de disciplinas cursadas;
• notas em cada disciplina.
Al´em do CR de cada aluno, o programa deve imprimir o melhor CR dos alunos que cursaram 5 ou mais
disciplinas.
O fim da entrada de dados é marcada por uma matr´ıcula inv´alida (matr´ıculas v´alidas de 1 a 5000).
Obs.: CR do aluno ´e igual `a m´edia aritm´etica de suas notas.
*/

#include <stdio.h>

int main()
{
    int alunos=0, matricula, disciplinas, i, j;
    float nota, media=0, CR, melhorCR;

    for(i=1; i > alunos; i++)
    {
      printf("Digite o numero da matricula do aluno %d: ", i);
      scanf("%d", &matricula);
      
      if(matricula < 1 || matricula > 5000)
      {
        printf("Matricula invalida, matriculas validas de 1 a 5000.\n");
        break;
      }
      else
      {
        printf("Digite a quantidade de disciplinas cursadas: ");
        scanf("%d", &disciplinas);

        for(j=1; j < disciplinas+1; j++)
        {
          printf("Digite a nota da %da disciplina: ", j);
          scanf("%f", &nota);
          
          media+=nota;
        }
        CR=media/disciplinas;
        printf("O CR do aluno %d eh %.2f\n", i, CR);
        
        if(disciplinas >= 5 && CR > melhorCR)
          {
            
            melhorCR = CR;
            
          }
        
      }
  }
  printf("O melhor CR eh %.2f", melhorCR);

    return 0;
}