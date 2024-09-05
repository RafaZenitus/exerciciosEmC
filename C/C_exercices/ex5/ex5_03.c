#include <stdio.h>

const int N = 5;

int main(void)
{
    int numeros[N];
    for (int i = 0; i < N; i++) //loop para ler 5 números
    {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Valores na ordem inversa:\n");

    for (int i = N - 1; i >= 0; i--)  //loop para exibir os valores na ordem inversa
    {
        printf("%d\n", numeros[i]);
    }

    return 0;
}