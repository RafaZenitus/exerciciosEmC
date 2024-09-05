#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int N = 20;

int menor(int array[], int temp);

int main(void)
{
    srand(time(NULL));

    int array[N];
    for(int i = 0; i < N; i++)
    {
        array[i] = (rand() % 100);
    }

    int result = menor(array, 0);
    printf("%d é o menor numero\n", result);
}

int menor(int array[], int temp)
{
    if(temp == N - 1)
    {
        return array[temp];
    }

    int num = menor(array, temp + 1);

    if (array[temp] < num)
    {
        return array[temp];
    }

    else
    {
        return num;
    }
}
