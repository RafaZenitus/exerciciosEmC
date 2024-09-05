#include <stdio.h>

int f(int n);

int main(void)
{
    int n;
    printf("Digite o valor: ");
    scanf("%d", &n);
    int result = f(n);
    printf("Resultado: %d\n", result);
}
int f(int n)
{
  if (n < 4)
    return 3*n;
  else
    return 2 * f(n - 4) + 5;
}
/*
F(3)
    3 < 4 return 3 * 3 = 9.
F(7)
    7 > 4 return 2 * F(3) + 5 = 2 * 9 + 5 = 23.
F(8)
    8 > 4 return 2 * F(4) + 5 = 2 * [2 * F(0) + 5] + 5 = 2 * [5] + 5 = 15.
*/
