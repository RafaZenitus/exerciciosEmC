#include <stdio.h>

const int N = 50;

int main(void)
{

    char timeA[N];
    printf("Qual o nome do primeiro time: ");
    scanf("%s", timeA);

    char timeB[N];
    printf("Qual o nome do segundo time: ");
    scanf("%s", timeB);

    int A = 0;
    printf("Quantos gols foram marcados pelo time %s: ", timeA);
    scanf("%d", &A);

    int B = 0;
    printf("Quantos gols foram marcados pelo time %s: ", timeB);
    scanf("%d", &B);

    if (A == B)
    {
        printf("Empate\n");
    }

    if (A > B)
    {
        printf("Time %s venceu!\n", timeA);
    }

    if (A < B)
    {
        printf("Time %s venceu!\n", timeB);
    }
}