#include <stdio.h>

int Soma(int n1, int n2);

int main(void)
{
    int n1, n2;

    printf("Digite o 1° número: ");
    scanf("%d", &n1);

    printf("Digite o 2° número: ");
    scanf("%d", &n2);

    int resultado = Soma(n1, n2);

    printf("Resultado: %d\n", resultado);

    return 0;
}

int Soma(int n1, int n2)
{
    if (n1 == 0)
    {
        return 0;
    }
    return n2 + Soma(n1 - 1, n2);
}
