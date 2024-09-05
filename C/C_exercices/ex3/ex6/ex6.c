#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int vetor[5];
    int escolhas[3];
    int i, j;
    int acertos = 0;
    srand(time(NULL));

    for (i = 0; i < 5; i++)
    {
        vetor[i] = rand() % 10 + 1;
    }

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar 3 números entre 1 e 10.\n");

    for (i = 0; i < 3; i++)
    {
        printf("Digite o %do número: ", i + 1);
        scanf("%d", &escolhas[i]);
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (escolhas[i] == vetor[j])
            {
                acertos++;
                break;
            }
        }
    }

    if (acertos == 3)
    {
        printf("Parabéns! Você ganhou!\n");
    }
    else
    {
        printf("Você perdeu\n");

    }

    return 0;
}
