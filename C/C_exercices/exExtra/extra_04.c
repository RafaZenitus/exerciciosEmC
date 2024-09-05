#include <stdio.h>

const float piNum = 3.14;

float calcArea(int raio, float pi);

int main(void)
{
    float pi = piNum;
    int raio;

    printf("Raio: ");
    scanf("%d", &raio);

    float result = calcArea(raio, pi);
    printf("Área = %.2f\n", result);
}

float calcArea(int raio, float pi)
{
    float area = 0;

    if(raio == 0)
    {
        return 0;
    }
    else
    {
        area = pi*(raio*raio);
        return area;
    }
}
