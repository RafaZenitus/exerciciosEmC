#include <stdio.h>

int fatorial(int a);

int main(void)
{
    int a;
    printf("Número: ");
    scanf("%d", &a);

    int result = fatorial(a);
    printf("Fatorial de %d = %d\n", a, result);

    return 0;
}

int fatorial(int a)
{
    if(a == 0)
    {
        return 0;
    }

    if(a == 1)
    {
        return 1;
    }

    if(a > 0)
    {
        return a * fatorial(a - 1);
    }
    else
    {
        return 0;
    }
}


