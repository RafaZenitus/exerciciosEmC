#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

const int N = 100;

void transforma(char str[]); //declara a função transforma

int main(void)
{
    char str[N];
    printf("Digite uma palavra: "); //pede ao usuario que escreva uma palavra
    fgets(str, sizeof(str), stdin); //armazena na string str a palavra do usuario
    printf("Resultado: ");
    transforma(str); //chama a função transforma
    return 0;
}

void transforma(char str[])
{
    int j = 0; //contador j
    for(int i = 0; i < strlen(str); i++) // Loop que percorre cada caractere da string str
    {
        if (str[i] == 'e') //verifica se um dos caracteres é a letra 'e'
        {
            printf("%c", str[i] + 16); //se for, imprime o caractere 16 posições depois dele
            j++; //ao fazer a substituição aumenta 1 em j
        }
        else if (str[i] == 'E') //verifica se um dos caracteres é a letra 'E'
        {
            printf("%c", str[i] + 16); //se for, imprime o caractere 16 posições depois dele
            j++; //ao fazer a substituição aumenta 1 em j
        }
        else
        {
            printf("%c", str[i]); //se não for 'e' nem 'E', imprime o caractere original
        }
    }
    printf ("Número de trocas: %d\n", j); //mostra o número total de trocas feitas 
}