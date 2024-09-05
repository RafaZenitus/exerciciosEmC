#include <stdio.h>

int main() {
    float horas_trabalhadas, salario_minimo, horas_extras;
    float valor_hora_trabalhada, valor_hora_extra, salario_bruto, salario_extra, salario_total;

    printf("Horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    printf("Salário mínimo: ");
    scanf("%f", &salario_minimo);

    printf("Horas extras trabalhadas: ");
    scanf("%f", &horas_extras);

    valor_hora_trabalhada = salario_minimo / 8.0;
    valor_hora_extra = salario_minimo / 4.0;

    salario_bruto = horas_trabalhadas * valor_hora_trabalhada;

    salario_extra = horas_extras * valor_hora_extra;


    salario_total = salario_bruto + salario_extra;

    printf("Salário: %.2f\n", salario_total);

    return 0;
}