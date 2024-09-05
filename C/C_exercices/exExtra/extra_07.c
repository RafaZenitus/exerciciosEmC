#include <stdio.h>

void star(int a);

int main(void)
{
    int a;
    printf("Número: ");
    scanf("%d", &a);
    star(a);

}

void star(int a)
{
    for(int i = 0; i < a; i++)
    {
        printf("*");
    }
}
