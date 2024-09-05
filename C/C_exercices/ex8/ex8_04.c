#include<stdio.h>

int main(void)
{
    int i = 0;
    while (i <= 100000)
    {
        printf("%d\n",i);
        i += 1000;
    }
}