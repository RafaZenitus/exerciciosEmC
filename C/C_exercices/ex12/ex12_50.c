#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N = 60;
    int M = 10;
    srand(time(NULL));

    int arry[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arry[i][j] = (rand() % 20) + 50;
        }
    }

    for (int i = 0; i < N; i++)
    {
        int soma = 0;
        for (int j = 0; j < M; j++)
        {
            soma += arry[i][j];
        }

        arry[i][M] = soma;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= M; j++)
        {
            printf("%3d ", arry[i][j]);
        }

        printf("\n");
    }

    int somas_das_N[N];
    for (int i = 0; i < N; i++) {
        somas_das_N[i] = arry[i][M];
    }

    int soma_total = 0;
    for (int i = 0; i < N; i++) {
        soma_total += somas_das_N[i];
    }

    double media = (double)soma_total / N;
    printf("Média das somas: %.2lf\n", media);

    return 0;
}