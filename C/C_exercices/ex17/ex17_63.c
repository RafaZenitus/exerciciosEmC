#include <stdio.h>

int invert(int array[], int N, int inicio, int fim);

int main(void)
{
    int N;
    printf("Tamanho da array: ");
    scanf("%d", &N);

    int array[N];
    for(int i = 0; i < N; i++)
    {
        printf("Digite o %d° numero: ", i + 1);
        scanf("%d", &array[i]);
    }

    invert(array, N, 0, N - 1);

    for (int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}

int invert(int array[], int N, int inicio, int fim)
{
    int temp;

    if (inicio < fim)
    {
        temp = array[inicio];
        array[inicio] = array[fim];
        array[fim] = temp;

        invert(array, N, inicio + 1, fim - 1);
    }
    return 0;
}
