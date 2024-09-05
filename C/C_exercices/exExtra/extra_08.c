#include <stdio.h>

int calcCubo(int x);

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    int resultado = calcCubo(num);

    printf("O cubo de %d é %d\n", num, resultado);

    return 0;
}

int calcCubo(int x)
{
    return x * x * x;
}
