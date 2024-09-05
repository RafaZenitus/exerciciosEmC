#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma(int array[], int N);

int main(void)
{
    int N;
    printf("Tamanho da array: ");
    scanf("%d", &N);

    srand(time(NULL));

    int array[N];
    for(int i = 0; i < N; i++)
    {
        array[i] = (rand() % 100);
    }

    int result = soma(array, N);
    printf("Resultado: %d\n", result);

}

int soma(int array[], int N)
{
    if (N == 0)
    {
        return 0;
    }

    int ult = array[N - 1];

    if (ult > 0)
    {
        return ult + soma(array, N - 1);
    }

    else
    {
        return soma(array, N - 1);
    }
}
