#include <stdio.h>
#include <string.h>

const int N = 2;

struct Data
{
    int dia;
    int mes;
    int ano;
};

struct Compromisso
{
    struct Data data;
    char texto[100];
};

int validarData(struct Data *data)
{
    if (data->mes < 1 || data->mes > 12)
    {
        printf("Erro: Mês inválido. Deve estar no intervalo de 1 a 12.\n");
        return 0;
    }

    if (data->dia < 1 || data->dia > 31) {
        printf("Erro: Dia inválido. Deve estar no intervalo de 1 a 31.\n");
        return 0;
    }

    return 1;
}

int main (void)
{
    struct Compromisso compromisso;

    do
    {
    printf("Dia: ");
    scanf("%d", &compromisso.data.dia);

    printf("Mês: ");
    scanf("%d", &compromisso.data.mes);

    printf("Ano: ");
    scanf("%d", &compromisso.data.ano);
    }
    while (!validarData(&compromisso.data));

    printf("Digite o compromisso:\n");
    scanf(" %[^\n]s", compromisso.texto);

    printf("Data: %02d/%02d/%d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
    printf("Compromisso: %s\n", compromisso.texto);

    return 0;
}

