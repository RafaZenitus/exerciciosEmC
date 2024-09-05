#include <stdio.h>

int ptnc(int k, int n);

int main(void)
{
    int k = 0;
    printf("Número: ");
    scanf("%d", &k);

    int n = 0;
    printf("Potência: ");
    scanf("%d", &n);

    int result = ptnc(k, n);
    printf("Resultado: %d\n", result);

}

int ptnc(int k, int n)
{
    if (k == 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }

    if (n > 0)
    {
        return k * ptnc(k, n - 1);
    }
    else
    return 0;
}
