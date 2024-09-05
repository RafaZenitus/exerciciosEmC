#include <stdio.h>
#include <stdlib.h>

const int N = 10;
const int M = 10;

int main(void)
{
    int troca_linha;
    int troca_coluna;
    int arry[N][M] =
    {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
        {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
        {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
        {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
        {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
        {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
        {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}
    };

    for(int i = 0; i < N; i++)
    {
        troca_coluna = arry[i][3];
        arry[i][3] = arry[i][9];
        arry[i][9]= troca_coluna;
    }

    for(int j = 0; j < M; j++)
    {
        troca_linha = arry[1][j];
        arry[1][j] = arry[7][j];
        arry[7][j] = troca_linha;
    }
     for (int i = 0; i < 10; i++)
     {
        for (int j = 0; j < 10; j++)
        {
            printf("%4d ", arry[i][j]);
        }
        printf("\n");
     }
     return 0;
}