#include <stdio.h>

int main (void)
{
    int N = 100;
    int valores[N];
    int i = 0;
    int sum = 0;

    printf("Digite valores inteiros positivos (ou um valor negativo para sair):\n");

 // Le os valores e armazena eles em uma array até que um valor negativo seja inserido ou a array esteja cheia
    while (i < N)
    {
    scanf("%d", &valores[i]);

    if (valores[i] < 0)
    {
        break; // Sai do loop se um valor negativo for inserido
    }

    sum += valores[i];
    i++;

    }
    // Calcula a média
    if (i > 0)
    {
        float media = sum /(float) i;
        printf("Média: %f", media);
    }
}