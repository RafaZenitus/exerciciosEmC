#include <stdio.h>
#include <stdlib.h>

const int N = 4;
const int M = 4;

int maior10(int linha, int coluna, int array[N][M]);

int main(void)
{
    int array[N][M];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            array[i][j] = printf("Digite para a posição (%d, %d): ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    maior10(N, M, array);
}

int maior10(int linha, int coluna, int array[N][M])
{
    int count = 0;

    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            if(array[i][j] > 10)
            {
                count++;
                printf("%d\n", array[i][j]);
            }
        }
    }
    printf("Foram encontrados %d numeros maiores que 10\n", count);
    return 0;
}