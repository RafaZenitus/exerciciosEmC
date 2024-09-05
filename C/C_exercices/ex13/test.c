#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int N = 5;
const int M = 5;

void bingo(int array[N][M], int max);

int main(void)
{
    srand(time(NULL));

    int cartela[N][M];

    bingo(cartela, 99);

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            printf("%d ", cartela[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void bingo(int array[N][M], int max)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            array[i][j] = (rand() % max) + 1;
        }
    }
}

