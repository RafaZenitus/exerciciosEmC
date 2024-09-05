#include <stdio.h>

int divv(int a, int b);

int main (void)
{
    int a;
    int b;

    printf("Digite o 1° valor: ");
    scanf("%d", &a);
    printf("Digite o 2° valor: ");
    scanf("%d", &b);

    int result = divv(a, b);
    printf("%d / %d = %d\n", a, b, result);
}

int divv(int a, int b)
{
    int div;

    if(a == 0 || b == 0)
    {
        return 0;
    }

    div = a / b;

    return div;
}
