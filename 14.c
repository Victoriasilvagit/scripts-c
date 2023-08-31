#include <stdio.h>

int main()
{
    float salario, novoSalario, aumento, imposto;
    int opcao;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    printf("\nMenu de opcoes:\n");
    printf("1 - Imposto\n");
    printf("2 - Novo salario\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            if (salario < 1000)
            {
                imposto = salario * 5/100;
            }
            else if (salario >= 1000 && salario <= 1500)
            {
                imposto = salario * 10/100;
            }
            else
            {
                imposto = salario * 15/100;
            }
            printf("\nO imposto sobre o salario e de: R$ %.2f\n", imposto);
            break;

        case 2:
            if (salario < 1000)
            {
                aumento = 75;
            }
            else if (salario >= 1000 && salario <= 1500)
            {
                aumento = 100;
            }
            else
            {
                aumento = 150;
            }
            novoSalario = salario + aumento;
            printf("\nO valor de aumento de salario e de: R$ %.2f\n", aumento);
            printf("O novo salario do funcionario e de: R$ %.2f\n", novoSalario);
            break;

        default:
            printf("\nOpcao invalida.\n");
            break;
    }

    return 0;
}

