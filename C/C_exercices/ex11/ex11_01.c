#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

const int N = 100;

void invert(char str[]);

int main(void)
{
    char str[N];
    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin);
    invert(str);
    printf("Inverso: %s\n", str);
    return 0;
}

void invert(char str[])
{
    int i = 0;
    int j = strlen(str) - 1;
    char temp;
    int diff = 0;

    while (i < j) // troca os caracteres do inicio para o fim até se encontrarem
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    while (j >= i) // Compara os caracteres da string original e invertida
    {
        if (str[i] >= str[j])
        diff++;
        i++;
        j--;
    }
    if (diff == 0) // Verifica se a string original é um palíndromo com base nas diferenças
    {
        printf("É um palindromo\n"); // Se não houver diferenças, é um palíndromo
    }
    else
    {
        printf("Não é um palindromo\n");
    }
}
