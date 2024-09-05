#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int N = 100;
const int P = 3;

void caesar(char str[]);

int main(void)
{
    char str[N];
    printf("Texto: ");
    fgets(str, sizeof(str), stdin);
    printf("Texto criptografado: ");
    caesar(str);
    return 0;
}

void caesar(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (isupper(str[i]))
        {
            printf("%c", (str[i] - 65 + P) % 26 + 65);
        }
        else if (islower(str[i]))
        {
            printf("%c", (str[i] - 97 + P) % 26 + 97);
        }
        else
        {
            printf("%c", str[i]);
        }
    }
}
