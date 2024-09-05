#include <stdio.h>

const int N = 10;

int main(void)
{
    int numeros[10]; // declara um array chamado numeros com tamanho 10
    int maior = 0;   // variável maior valor inicial 0
    int menor = 0;   // variável menor valor inicial 0

    for (int i = 0; i < N; i++) // Loop para ler 10 números
    {
        printf("Digite o %dº número ", i + 1);
        scanf("%d", &numeros[i]); // lê um número digitado e armazena na array
    }

    maior = menor = numeros[0]; // as variaveis maior e menor recebem o valor do primeiro elemento da array

    for (int i = 1; i < N; i++) // loop para encontrar o maior e o menor número na array
    {
        if (numeros[i] > maior) // verifica se o número atual é maior que o da variável maior
            maior = numeros[i]; // atualiza a variavel maior se o número atual for maior

        if (numeros[i] < menor) // verifica se o número atual é menor que o da variável menor
            menor = numeros[i]; // atualiza a variavel maior se o número atual for menor
    }
    printf("Maior número: %d\n", maior); // exibe o maior número
    printf("Menor número: %d\n", menor); // exibe o menor número

    return 0;
}