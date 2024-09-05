#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

const int N = 100;

void invert(char str1[]);

int main(void)
{
    char str[N];
    char str2[N];
    printf("Digite uma palavra: "); //pede ao usuario que escreva uma palavra
    fgets(str, sizeof(str), stdin); //armazena na string str
    fgets(str2, sizeof(str2), stdin);
    invert(str); // chama a função para inverter a string
    invert(str2);
    printf("Inverso: %s\n", str); // exibi a string invertida
    printf("inverso: %s\n", str2)
    return 0;
}

void invert(char str[], char str2[])
{
    int i = 0;
    int j = strlen(str) - 1;
    char temp;

    while (i < j) // troca os caracteres do inicio para o fim até se encontrarem
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}