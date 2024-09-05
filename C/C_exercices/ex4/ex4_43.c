#include <stdio.h>
#include <stdlib.h>

const int N = 100;

int main(void)
{
    int numeros[N];
    int frase;
    int achei = 0;

    printf("Numero: \n");
    scanf("%d", &frase);

    for (int i = 0; i < N; i++)
    {
        numeros[i] = (rand() % 20) + 50;

        if (frase == numeros[i])
            achei++;
    }

    if (achei == 1)
        printf("Achei\n");
    else
        printf("Não achei\n");

    return 0;
}