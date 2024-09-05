#include <stdio.h>

const int N = 3; // define quantos numeros serão pedidos

float calculo(int tamanho, int array[]);

int main(void)
{
    int numeros[N];

    // prompt para pegar e guardar números em uma array
    for (int i = 0; i < N; i++)
    {
        printf("Número: ");
        scanf("%d", &numeros[i]);
    }

    // Chama a função calculo e printa o resultado
    printf("Resultado: %f\n", calculo(N, numeros));

    return 0;
}

float calculo(int tamanho, int array[])
{
    // Calcula o resultado usando a fórmula (numeros[0] * numeros[1]) - numeros[2]
    float equacao = (array[0] * array[1]) - array[2];
    return equacao; // Retorna o resultado calculado
}
