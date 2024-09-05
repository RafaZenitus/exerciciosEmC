#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int positivo(int num);

int main(void)
{
    int num;
    int count= 0;

    while(1)
    {
        printf("Digite um número: ");

        if (scanf("%d", &num) == 1)
        {
            count++;
            positivo(num);
            break;
        }
        else
        {
            while (getchar() != '\n');
        }
    }
}

int positivo(int num)
{
    if (num >= 0)
    {
        printf("O número digitado é Positivo\n");
    }
    else
    {
        printf("O número digitado é negativo\n");
    }
    return 0;
}