#include <stdio.h>
#include <math.h>

int main(void){
    //prompt para pegar o numero
    int A;
    printf("Digite um número: \n");
    scanf("%d",&A);
    //código para fazer as comparações entre par e impar
    if (A % 2 == 0)
    {
        printf ("%d é Par \n", A);
    }
    else if (A % 2 != 0)
    {
        printf ("%d é Impar \n", A);
    }
    //código para fazer as comparações positivo e negativo
    if (A <= 0)
    {
        printf ("%d é Negativo \n", A);
    }
    else if (A >= 0)
    {
        printf ("%d é Positivo \n", A);
    }
    return 0;
}
