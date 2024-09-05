#include <stdio.h>

const int N = 50;
const int MAX = 2;

struct Time
{
    char nome[N];
    int gols;
};

int main(void)
{
    int num_times;
    printf("Quantos times você quer comparar (no máximo %d)? ", MAX);
    scanf("%d", &num_times);

    if (num_times <= 1 || num_times > MAX)
    {
        printf("Número de times inválido.\n");
        return 1;
    }

    struct Time times[MAX];

    for (int i = 0; i < num_times; i++)
    {
        printf("Qual o nome do %d° time: ", i + 1);
        scanf("%s", times[i].nome);

        printf("Quantos gols foram marcados pelo time %s: ", times[i].nome);
        scanf("%d", &times[i].gols);
    }

    int max_gols = times[0].gols;
    int time_vencedor = 0;

    for (int i = 1; i < num_times; i++)
    {
        if (times[i].gols > max_gols)
        {
            max_gols = times[i].gols;
            time_vencedor = i;
        }
    }

    int empate = 0;
    for (int i = 0; i < num_times; i++)
    {
        if (times[i].gols == max_gols)
        {
            empate++;
        }
    }

    if (empate > 1) {
        printf("Empate entre os times:\n");
        for (int i = 0; i < num_times; i++)
        {
            if (times[i].gols == max_gols)
            {
                printf("Time %s\n", times[i].nome);
            }
        }
    }

    else
    {
        printf("Time vencedor: %s\n", times[time_vencedor].nome);
    }

    return 0;
}