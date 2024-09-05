#include <stdio.h>

const int N = 100; // define uma constante N com valor 100, representando o número máximo de funcionários.

float aum (int tamanho, int array[]); // declaração da função para calcular o aumento de salário.
int num (int tamanho, int array[]); // declaração da função para contar o número de funcionários com salário superior a 2000.
float sum (int tamanho, int array[]); // declaração da função para calcular a soma total dos salários.


int main (void)
{
    int salario [N];
    for (int i = 0; i < N; i++)
    {
        salario [i] = printf("Salário: ");
                      scanf("%d", &salario[i]);
	}

    // chama as funções correspondesntes e printa o resultado
	printf("Número de funcionários que recebem mais de 2000: %d\n", num(N, salario));
    printf("A empresa gasta %.2f com seus funcionários\n", sum(N, salario));
	printf("Total gasto aumentando em 7,5 porcento o salario dos que recebm menos de 2000: %.2f\n", aum(N, salario));
	return 0;
}

// função que retorna o número de funcionários com salário superior a 2000.
int num(int tamanho, int array[])
{
	int num = 0;
	for (int i = 0; i < N; i++)
	{
		if (array[i] > 2000 )
		{
			num++;
		}
	}
	return num;
}

//função que retorna a soma de todos os salários
float sum(int tamanho, int array[])
{
    int sum = 0;
    for (int i = 0; i < N; i ++)
    {
        sum += array[i];
    }
    return sum;
}

// função que retorna o aumento de 7,5% no salário dos funcionários que ganham menos de 2000.
float aum(int tamanho, int array[])
{
    float aum = 0;
    for (int i = 0; i < N; i++)
    {
        if (array[i] < 2000)
        {
            aum += array[i] * 0.075;
        }
    }
    return aum;
}
