#include <stdio.h>
typedef struct
{
	int dia;
	int mes;
	int ano;
}data;

int anoBi(int mes, int ano);
int calculoDias(data d1, data d2);
int dataValida(data d);

int main (void)
{
    data d1, d2;

    printf("Primeira Data (DD/MM/AAAA): ");
    scanf("%d/%d/%d", &d1.dia, &d1.mes, &d1.ano);

    printf("Segunda Data (DD/MM/AAAA): ");
    scanf("%d/%d/%d", &d2.dia, &d2.mes, &d2.ano);

    if (calculoDias(d1, d2) >= 0)
    {
        printf("Passaram-se %d dias entre %d/%d/%d e %d/%d/%d\n", calculoDias(d1, d2), d1.dia, d1.mes, d1.ano, d2.dia, d2.mes, d2.ano);
    }

    return 0;
}

int numDias(int mes, int ano)
{
    if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12))
        return 31;
    else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11))
        return 30;
    else if ((mes == 2) && (ano % 4 == 0))
        return 29;
    else
        return 28;
}

int dataValida(data d)
{
    if (d.ano >= 0)
    {
        if (d.mes >= 1 && d.mes <= 12)
        {
            if (d.dia >= 1 && d.dia <= numDias(d.mes, d.ano))
                return 1;
        }
    }
    return 0;
}

int calculoDias(data d1, data d2)
{
    if (!dataValida(d1) || !dataValida(d2))
    {
        printf("Datas inválidas\n");
        return -1;
    }

    int dias = 0;

    while (d1.ano < d2.ano || (d1.ano == d2.ano && (d1.mes < d2.mes || (d1.mes == d2.mes && d1.dia < d2.dia))))
    {
        dias++;
        d1.dia++;

        if (d1.dia > numDias(d1.mes, d1.ano))
        {
            d1.dia = 1;
            d1.mes++;

            if (d1.mes > 12) {
                d1.mes = 1;
                d1.ano++;
            }
        }
    }

    return dias;
}
