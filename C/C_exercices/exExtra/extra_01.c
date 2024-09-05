#include <stdio.h>

int diff(int a, int b);

int main (void)
{
    int a;
    int b;

    printf("Digite o 1° valor: ");
    scanf("%d", &a);
    printf("Digite o 2° valor: ");
    scanf("%d", &b);

    int result = diff(a, b);
    printf("%d - %d = %d\n", a, b, result);
}

int diff(int a, int b)
{
    int dif;

    dif = a - b;

    return dif;
}
