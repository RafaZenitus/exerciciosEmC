#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int fatorial(int num);

int main (void)
{
    int num;
    int count = 0;

    while(1)
    {
        printf("Digite um número: ");

        if (scanf("%d", &num) == 1)
        {
            count++;
            fatorial(num);
            break;
        }
        else
        {
            while (getchar() != '\n');
        }
    }
}

int fatorial(int num)
{
    int fator = 1;
    int numero = 0;

    for (int i = 1; i <= num; i++)
    {
        fator = fator * i;
    }

    printf("%d\n", fator);
    
    return 0;
}