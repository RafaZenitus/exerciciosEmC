#include <stdio.h>

void maximoMinimo(int *v, int N, int *maximo, int *minimo);

int main(void)
{

    int vetor[] = {4, 2, 7, 1, 9, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int max, min;

    maximoMinimo(vetor, tamanho, &max, &min);

    printf("Máximo: %d\n", max);
    printf("Mínimo: %d\n", min);

    return 0;
}

void maximoMinimo(int *v, int N, int *maximo, int *minimo)
{
    if (N <= 0)
    {
        printf("Erro: Vetor vazio\n");
        return;
    }

    *maximo = *minimo = v[0];

    for (int i = 1; i < N; i++)
    {
        if (v[i] > *maximo)
        {
            *maximo = v[i];
        }
        else if (v[i] < *minimo)
        {
            *minimo = v[i];
        }
    }
}

