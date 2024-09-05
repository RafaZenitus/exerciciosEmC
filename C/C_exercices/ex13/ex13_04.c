#include <stdio.h>
#include <stdlib.h>

const int N = 3;
const int M = 4;

int result(int linha, int coluna, int array[N][M]);

int main(void)
{
     int array[N][M];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            array[i][j] = printf("Digite para a posição (%d, %d): ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    result(N, M, array);
}

int result(int linha, int coluna, int array[N][M])
{
    for (int i = 0; i < 3; i++)
    {
        array[i][3] = 0;
        for (int j = 0; j < 3; j++)
        {
            array[i][3] += array[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}