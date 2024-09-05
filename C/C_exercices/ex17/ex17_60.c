#include <stdio.h>

int soma(int array[], int N);

int main(void)
{
    int N;
    printf("Tamanho da array: ");
    scanf("%d", &N);

    int array[N];
    for(int i = 0; i < N; i++)
    {
        printf("Número: ");
        scanf("%d", &array[i]);
    }

    int result = soma(array, N);
     printf("Soma dos números positivos: %d\n", result);
}

int soma(int array[], int N)
{
    if (N == 0)
    {
        return 0;
    }

    int ult = array[N - 1];

    if(ult > 0)
    {
        return ult + soma(array, N - 1);
    }
    else
    {
        return soma(array, N - 1);
    }
}
