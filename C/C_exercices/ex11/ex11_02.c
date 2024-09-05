#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

const int N = 100;

void tran(char str[]);

int main(void)
{
    char str[N];
    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin);
    tran(str);
}

void tran(char str[])
{
    for(int i = 0; i < strlen(str); i++)
    {
        if (islower(str[i]))
        {
            printf("%c", (str[i] - 32));
        }
        else
        {
        printf("%c", str[i]);
        }
    }
}