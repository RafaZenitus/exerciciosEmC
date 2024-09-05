#include <stdio.h>

int main(void)
{
    float A;

    printf("Salário: ");
    scanf("%f", &A);

    float calculo = A + (A * 0.3);
    printf("Valor das Férias: %f\n", calculo);
    return 0;
}