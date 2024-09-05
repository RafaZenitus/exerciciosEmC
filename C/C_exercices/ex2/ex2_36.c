#include <stdio.h>

int main()
{

    float media_1 = 0, media_2 = 0, media_3 = 0, media_4 = 0; // Variáveis para calcular médias de peso em diferentes faixas etárias
    int counter_1 = 0, counter_2 = 0, counter_3 = 0, counter_4 = 0; // Variáveis de contador para contar pessoas em diferentes faixas etárias

    for (int i = 0; i < 20; i++) // loop para receber dados das 20 pessoas
    {
        int idade;
        float peso;

        printf("Idade %d: ", i + 1); // pede a idade da pessoa
        scanf("%d", &idade);
        printf("Peso %d: ", i + 1); // pede o peso da pessoa
        scanf("%f", &peso);

        // Determina a faixa etária da pessoa e atualiza as médias e contadores correspondentes
        if (idade >= 1 && idade <= 10) // Determina a faixa etária da pessoa (1 - 10 anos)
        {
            media_1 += peso; // atualiza a media_1 faznedo uma operação de acumulação em soma dos pesos
            counter_1++; // atualiza o contador com a faixa etária equivalente
        }
        else if (idade >= 11 && idade <= 20) // Determina a faixa etária da pessoa (11 - 20 anos)
        {
            media_2 += peso; // atualiza a media_2 faznedo uma operação de acumulação em soma dos pesos
            counter_2++; // atualiza o contador com a faixa etária equivalente
        }
        else if (idade >= 21 && idade <= 30) // Determina a faixa etária da pessoa (21 - 30 anos)
        {
            media_3 += peso; // atualiza a media_3 faznedo uma operação de acumulação em soma dos pesos
            counter_3++; // atualiza o contador com a faixa etária equivalente
        }
        else // Determina a faixa etária da pessoa +30 anos
        {
            media_4 += peso; // atualiza a media_4 faznedo uma operação de acumulação em soma dos pesos
            counter_4++; // atualiza o contador com a faixa etária equivalente
        }
    }
    // Calcula as médias dividindo a soma dos pesos pelo número de pessoas em cada faixa etária e imprime os resultados
    if (counter_1 > 0)
    {
        media_1 /= counter_1;
        printf("Média de pesos (1 a 10 anos): %.2f\n", media_1);
    }

    if (counter_2 > 0)
    {
        media_2 /= counter_2;
        printf("Média de pesos (11 a 20 anos): %.2f\n", media_2);
    }

    if (counter_3 > 0)
    {
        media_3 /= counter_3;
        printf("Média de pesos (21 a 30 anos): %.2f\n", media_3);
    }

    if (counter_4 > 0)
    {
        media_4 /= counter_4;
        printf("Média de pesos (30+ anos): %.2f\n", media_4);
    }

    return 0;
}
