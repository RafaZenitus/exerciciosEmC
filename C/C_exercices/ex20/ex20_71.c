#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *vetor = (int *)malloc(3 * sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o valor da posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor original:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    vetor = (int *)realloc(vetor, 6 * sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro ao realocar memória.\n");
        return 1;
    }

    for (int i = 3; i < 6; i++)
    {
        printf("Digite o valor da posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor completo:\n");

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    printf("\n");

    free(vetor);

    return 0;
}
