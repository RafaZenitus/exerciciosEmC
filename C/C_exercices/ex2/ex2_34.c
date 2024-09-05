#include <stdio.h>

int main(void)
{
    int numero;
    int sum = 0;

    //Adciona 20 números por meio de um for loop e os armazena em numero
    for (int i = 1; i <= 20; i++)
    {
        printf("Digite o %dº numero:", i);
        scanf("%d", &numero);
        sum += numero; //operação composta de soma, onde acumula os números
    }

    float media = (float)sum / 20.0; //calcula a média da soma

    printf("Média: %.2f\n", media); // mostra a média

    return 0;
}