#include <stdio.h>
#include <stdlib.h>

const int N = 3;
const int M = 3;

int transposta(int linha, int coluna, int array[N][M]);

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

    transposta(N, M, array);

}

int transposta(int linha, int coluna, int array[N][M])
{
    for(int j = 0; j < coluna; j++)
    {
        for(int i = 0; i < linha; i++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}