#include <stdio.h>

int main(void)
{
    float r, h;

    printf("Raio: ");
    scanf("%f", &r);

    printf("Altura: ");
    scanf("%f", &h);

    float area = 2 * 3.1415 * (float) r * ((float) r + (float) h);
    printf ("Área: %f \n", area);

    return 0;
}