#include <stdio.h>

int main() {

    int numero, maior, menor;
    printf("Digite o 1º número: "); // recebe o primeiro número
    scanf("%d", &numero);
    maior = menor = numero; // relaciona maior e menor com o primeiro número

    for (int i = 2; i <= 10; i++) // for loop para adcionar os 9 números restantes
    {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);

        if (numero > maior) // relação de comparação entre o numero adcionado e o número armazenado em maior
        {
            maior = numero;
        }

        if (numero < menor) // relação de comparação entre o numero adcionado e o número armazenado em menor
        {
            menor = numero;
        }
    }

    printf("Maior: %d\n", maior); //mostra o maior número
    printf("Menor: %d\n", menor); // mostra o menor numero

    return 0;
}
