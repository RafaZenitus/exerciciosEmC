#include <stdio.h>

const int N = 10;

int main(void)
{
    int numeros[10]; // Declara um array com tamanho 10
    int par = 0;    // Variável para contar os números pares

    for (int i = 1; i < N + 1; i++)
    {
        printf("Digite o %d° número: ", i);
        scanf("%d", &numeros[i]); //  armazena os numeros na array numeros.
    }

    printf("Números pares digitados: ");

    for (int i = 1; i < N + 1; i++)
    {
        if (numeros[i] % 2 == 0) // Verifica se o número é par.
        {
            par++; // Incrementa o contador de números pares.
            printf("%d ", numeros[i]); // Exibe o número par.
        }
    }

    if (par == 1)
        printf("\nVocê digitou %d número par \n", par); // Mensagem para um unico número par.
    else if (par > 1)
        printf("\nVocê digitou %d números pares \n", par); // Mensagem para mais de um número par.
    else
        printf("\nVocê não digitou nenhum número par \n"); // Mensagem para nenhum número par.

    return 0;
}