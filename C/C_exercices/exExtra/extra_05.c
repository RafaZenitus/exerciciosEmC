#include <stdio.h>

void Saldo(float saldo);
void depositar(float *saldo);
void sacar(float *saldo);

int main()
{
    float saldo = 15000.00; //saldo inicial

    int opcao;

    do
    {
        printf("1. Consultar Saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Encerrar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                Saldo(saldo);
                break;
            case 2:
                depositar(&saldo);
                break;
            case 3:
                sacar(&saldo);
                break;
            case 4:
                printf("Obrigado pela preferência\n");
                break;
            default:
                printf("Opção inválida\n");
        }
    }
    while (opcao != 4);

    return 0;
}

void Saldo(float saldo)
{
    printf("Saldo disponível: R$ %.2f\n", saldo);
}

void depositar(float *saldo) //ao realizar a função o valor original de saldo é modificado
{
    float valor;
    printf("Digite o valor a ser depositado: R$ ");
    scanf("%f", &valor);

    if (valor > 0)
    {
        *saldo += valor;
        printf("Depósito realizado com sucesso\n");
    }
    else
    {
        printf("Valor inválido\n");
    }
}

void sacar(float *saldo)//ao realizar a função o valor original de saldo é modificado
{
    float valor;
    printf("Digite o valor a ser sacado: R$ ");
    scanf("%f", &valor);

    if (valor > 0 && valor <= *saldo)
    {
        *saldo -= valor;
        printf("Saque realizado com sucesso.\n");
    }
    else
    {
        printf("Saldo insuficiente ou valor inválido para saque.\n");
    }
}
