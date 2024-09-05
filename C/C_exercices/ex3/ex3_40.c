#include <stdio.h>

int prime(int number); // função que verifica se um número é primo

int main (void)
{
    int min;
    int max;
    // recebe um valor mínimo que seja maior ou igual a 1
    do
    {
        printf("Mínimo: ");
        scanf("%d", &min);
    }
    while (min < 1);

    // recebe um valor máximo, garantindo que seja maior que o mínimo
    do
    {
        printf("Máxmimo: ");
        scanf("%d", &max);
    }
    while (min >= max);

    //Loop para verificar e imprimir números primos no intervalo entre min e max
    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

int prime(int num) // Função que verifica se um número é primo
{
    if (num < 2)
    {
        return 0; // Se for menor que 2 não é primo
    }

    int j;
    for (j = 2; j < num; j++)
    {
        if (num % j == 0)
        {
            return 0; // Se for divisível não é primo
        }
    }
    return 1; // Se não foi encontrado divisor é primo
}
