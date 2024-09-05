#include <stdio.h>

const int N = 10;
const int M = 10;

void find_min_max(int array[10][10], int *min_max, int *linha, int *coluna);

int main(void)
{
    int min_max;
    int linha;
    int coluna;

    int array[N][M] =
    {
        {12, 45, 67, 23, 56, 78, 34, 89, 10, 50},
        {34, 87, 21, 95, 62, 17, 43, 71, 28, 39},
        {51, 92, 16, 73, 37, 80, 59, 24, 64, 11},
        {68, 31, 88, 42, 19, 53, 76, 27, 65, 94},
        {22, 58, 84, 49, 15, 70, 36, 81, 47, 29},
        {74, 26, 69, 44, 82, 35, 98, 14, 60, 25},
        {97, 63, 38, 86, 52, 20, 72, 33, 91, 66},
        {48, 75, 32, 55, 13, 93, 30, 61, 85, 18},
        {79, 46, 64, 67, 50, 22, 11, 38, 90, 73},
        {37, 54, 80, 79, 17, 25, 42, 96, 29, 68}
    };

    find_min_max(array, &min_max, &linha, &coluna );
    return 0;
}

void find_min_max(int array[10][10], int *min_max, int *linha, int *coluna)
{
    int linha_max = 0;
    int max = array[0][0];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(array[i][j] > max)
            {
                max = array[i][j];
                linha_max = i;
            }
        }
    }

    int coluna_min = 0;
    int min = array[linha_max][0];

    for(int j = 1; j < M; j++)
    {
        if(array[linha_max][j] < min)
        {
            min = array[linha_max][j];
            coluna_min = j;
        }
    }

    *min_max = min;
    *linha = linha_max;
    *coluna = coluna_min;

    printf("Minimax: %d\nPosição (%d, %d)\n", *min_max, *linha, *coluna);
}
