#include <stdio.h>
#include <stdlib.h>

const int N = 6;
const int M = 6;

int main(void)
{
    int num;
    int mult[N][M];
    printf ("Digite um valor para multiplicar a matriz: ");
    scanf("%d", &num);
    int arry[N][M] =
    {
    {1, 2, 3, 4, 5, 6},
    {1, 2, 3, 4, 5, 6},
    {1, 2, 3, 4, 5, 6},
    {1, 2, 3, 4, 5, 6},
    {1, 2, 3, 4, 5, 6},
    {1, 2, 3, 4, 5, 6}
    };

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            mult[i][j] = arry[i][j] * num;
        }
    }
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            printf("%d ", mult[i][j]);
        }
            printf("\n");
    }
}