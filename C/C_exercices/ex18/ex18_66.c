#include <stdio.h>

int fatorial_duplo(int n);

int main(void)
{
    int n;
    printf("Digite um número ímpar positivo: ");
    scanf("%d", &n);

    if (n % 2 == 0 || n < 1)
    {
        printf("Por favor, insira um número ímpar positivo.\n");
    }
    else
    {
        int resultado = fatorial_duplo(n);
        printf("O fatorial duplo de %d é %d\n", n, resultado);
    }

    return 0;
}

int fatorial_duplo(int n)
 {
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fatorial_duplo(n - 2);
    }
}
