/*A prefeitura de Pato Branco abriu uma linha de crédito para os funcionários estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. Faça um programa em linguagem C que permita entrar com o salário bruto e o valor da prestação e informar se o empréstimo pode ou não ser concedido*/

#include<stdio.h>
 int main(){
    float prestacao, bruto;

   printf("informe o valor do salario bruto:");
   scanf("%f", &bruto);
   
  printf("informe o valor da prestacao:");
  scanf("%f", &prestacao);
   
  if(prestacao > bruto*0.03)
  {
     printf("O emprestimo nao pode ser cocedido"); 
  }
  else
  {
    printf("O emprestimo pode ser concedido");
  }
   
  return 0;
 }