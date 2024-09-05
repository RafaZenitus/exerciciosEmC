#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

const int N = 3;

int maior(int tamanho, int array[]);

int main(void)
{
    int array[N];
    int count = 0;

    for(int i = 0; i < N; i++)
    {
        while(1)
        {
            printf("Digite o %d° número: ", i + 1);
            if (scanf("%d", &array[i]) == 1)
            {
                count++;
                break;
            }
            else
            {
                while(getchar() != '\n');
            }
        }
    }

    maior(N, array);

}

int maior(int tamanho, int array[])
{
    int maior = 0;
    int menor = 0;

    maior = menor = array[0];
    for (int i = 1; i < N; i++)
    {
        if (array[i] > maior)
        {
            maior = array[i];
        }
        if (array[i] < menor)
        {
            menor = array[i];
        }
    }
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    return 0;
}