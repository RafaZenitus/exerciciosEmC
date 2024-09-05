#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int find(int array[], int count, int frase);

const int N = 50;

int main(void)
{
    int array[N];
    int frase = 0;
    int count = 0;

    srand(time(NULL));

    find(array, count, frase);

    return 0;
}

int find(int array[], int count, int frase)
{
    printf("Número: ");
    scanf("%d", &frase);

    for(int i = 0; i < N; i++)
    {
        array[i] = (rand() % 20) + 50;
        if(frase == array[i])
        count++;
    }

    if (count >= 1)
    {
        printf("O número %d foi encontrado %d vezes\n", frase, count);
    }
    else
    {
        printf("Não foi encontrado o número %d\n", frase);
    }
    return 0;
}
