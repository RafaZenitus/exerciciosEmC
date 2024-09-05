#include <stdio.h>

int main (void)
{
    int i;
    for (i = 0; i <= 100; i++) // loop para adcionar os números
    {
        if (i % 2 == 0) // condição que avalia se o numero x, dividido por 2 dá resto 0. Se verdadeiro ele exibe o número
        {
            printf("%d \n", i); // exibe o número 
        }
    }
}