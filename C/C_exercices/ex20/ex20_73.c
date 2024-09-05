#include <stdio.h>
#include <stdlib.h>

float calcularMedia(int quantidade, int *vetor);

int main(void)
{
    int quantidade;

    printf("Digite a quantidade de números: ");
    scanf("%d", &quantidade);

    int *numeros = (int *)malloc(quantidade * sizeof(int));

    if (numeros == NULL)
    {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    printf("Digite os números:\n");

    for (int i = 0; i < quantidade; ++i)
    {
        scanf("%d", &numeros[i]);
    }

    float media = calcularMedia(quantidade, numeros);

    printf("A média é: %.2f\n", media);

    free(numeros);

    return 0;
}

float calcularMedia(int quantidade, int *vetor)
{
    int soma = 0;
    for (int i = 0; i < quantidade; ++i)
    {
        soma += vetor[i];
    }
    return (float)soma / quantidade;
}
