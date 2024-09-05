#include <stdio.h>
#include <string.h>

const int N = 2;

void verific(char str[]);

int main(void)
{
    char str[N];
    printf("Digite uma letra: ");
    fgets(str, sizeof(str), stdin);
    verific(str);
}

void verific(char str[])
{
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            printf("O carctere digitado está entre A - Z\n");
        }
        else if(str[i] >= 97 && str[i] <= 122)
        {
            printf("O caractere digitado esta entre a - z\n");
        }
        else
        {
            printf("O caractere digitado não está entre a - z ou A - Z\n");
        }

    }
}
