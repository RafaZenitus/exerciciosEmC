#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

const int N = 5;
const int M = 5;

int fatorial(int array[N][M]);

int main(void)
{
    printf("Antes do fatoramento\n");
    int array[N][M] =
    {
    {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5},
    };

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    fatorial(array);
}

int fatorial(int array[N][M])
{
printf("Após o fatoramento\n");
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            int fator = 1;
            for(int k = 1; k <= array[i][j]; k++)
            {
                fator = fator * k;
            }
            printf("%d ", fator);
        }
        printf("\n");
    }
    return 0;
}


