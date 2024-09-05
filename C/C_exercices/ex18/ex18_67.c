#include <stdio.h>

int somaRecursiva(int n);

int main(void)
{
    int numero;
    printf("Número: ");
    scanf("%d", &numero);

    if (numero < 1)
    {
        printf("O número deve ser maior ou igual a 1.\n");
    }
    else
    {
        int resultado = somaRecursiva(numero);
        printf("%d\n", resultado);
    }

    return 0;
}

int somaRecursiva(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + somaRecursiva(n - 1);
    }
}
