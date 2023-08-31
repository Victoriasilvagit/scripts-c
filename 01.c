/*1) Ler um número double. Separar a parte inteira e a parte decimal desse número. Apresentar a parte decimal
como um valor double e como um inteiro de três dígitos. Da parte inteira separar o número que representa
unidade, dezena e centena e mostrar.*/
#include <stdio.h>
int main()
{
    double num;//123.456789
    int parteInteira, parteDecInt, unidade, dezena, centena;
    float parteDecimal;//0.456789
    //Entrada
    printf("Informe um numero Double:");
    scanf("%lf",&num);
    //Processamento
    parteInteira = (int)num;
    parteDecimal = num - parteInteira;
    parteDecInt = parteDecimal * 1000; //0.456789 => 456.789
    centena = num / 100; //1
    dezena = parteInteira%100/10;
    unidade = parteInteira%10;//resto da divisão 
    //saida
    printf("Numero que foi informado: %lf\n", num);
    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte decimal: %f\n", parteDecimal);
    printf("Parte decimal como inteira: %d\n", parteDecInt);
    printf("Centena(s):%d\n", centena);
    printf("Dezena(s):%d\n", dezena);
    printf("Unidade(s):%d\n", unidade);

    return 0;
}
