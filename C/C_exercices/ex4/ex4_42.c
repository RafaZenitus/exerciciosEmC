#include <stdio.h>

int main(void)
{
    int const N  = 70;
    int array[N];

    for (int i = 0; i < N; i++)
    {
        if ((i + 1) % 3 == 0)
        {
            array[i] = 10;
        }
        else
        {
            array[i] = (i + 1) * 10;
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}





