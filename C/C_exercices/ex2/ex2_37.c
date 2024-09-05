#include <stdio.h>

int main (void)
{
    float S = 0;
    int ad_sub = 1; // ad_sub faz a troca entre adição e subtração
    int denominador = 1;

    for (int i = 1; i <= 10; i++)
    {
        float fracao = (float) i / denominador; //calcula o termo atual

        S += ad_sub * fracao; //adciona ou subtrai o termo de acordo com o sinal

        //atualiza o sinal e o denominador para o próximo termo
        ad_sub = -ad_sub;
        denominador = (i + 1) * (i + 1);
    }

    printf("S = %.2f\n", S); //mostra o resultado de S

    return 0;
}
