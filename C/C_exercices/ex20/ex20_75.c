#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimirVetor(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main()
{
    srand(time(NULL));

    int *vetor = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 100;
    }

    printf("Vetor inicial:\n");
    imprimirVetor(vetor, 10);

    vetor = (int *)realloc(vetor, 20 * sizeof(int));

    for (int i = 10; i < 20; i++)
    {
        vetor[i] = rand() % 100;
    }

    printf("\nVetor com 20 posições:\n");
    imprimirVetor(vetor, 20);

    vetor = (int *)realloc(vetor, 25 * sizeof(int));

    for (int i = 20; i < 25; i++)
    {
        vetor[i] = rand() % 100;
    }

    printf("\nVetor final com 25 posições:\n");
    imprimirVetor(vetor, 25);

    free(vetor);

    return 0;
}
