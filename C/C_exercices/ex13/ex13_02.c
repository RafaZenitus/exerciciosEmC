#include <stdio.h>
#include <stdlib.h>

const int N = 4;
const int M = 4;

int maior(int linha, int coluna, int array[N][M]);

int main(void)
{
    int array[N][M];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            array[i][j] = printf("Digite o numero para a posição (%d, %d): ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    maior(N, M, array);
}

int maior(int linha, int coluna, int array[N][M])
{
    int num = 0;
    int x = 0;
    int y = 0;

    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            if(array[i][j] > num)
            {
                num = array[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("O maior valor é: %d (%d, %d)\n", num, x, y);
    return 0;
}