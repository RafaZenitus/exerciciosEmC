#include <stdio.h>
#include <stdlib.h>

const int N = 4;
const int M = 4;

int main(void)
{
    int arry[N][M];
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if (i < j)
            {
                printf("0 ");
            }
            else if (i == 0 && j == 0){
                printf("%d ", i + 1 * j + 1);
            }
            else if (i == 1 && j <= i)
            {
                printf("%d ", i * (j + 1) * 2);
            }
            else if (i == 2 && j <= i)
            {
                printf("%d ", (i - 1) * (j + 1) * 3);
            }
            else if (i == 3 && j <= i)
            {
                printf("%d ", (i - 2) * (j + 1) * 4);
            }
        }
                printf("\n");
    }
    return 0;
}