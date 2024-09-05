#include <stdio.h>

struct hm
{
    int horas;
    int minutos;
};

struct hm conversao(int minutos)
{
    struct hm result;

    result.horas = minutos / 60;
    result.minutos = minutos % 60;

    return result;
}

int main (void)
{
    int minutos;
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    struct hm result = conversao(minutos);

    printf("%d horas e %d minutos\n",result.horas ,result.minutos);

    return 0;
}
