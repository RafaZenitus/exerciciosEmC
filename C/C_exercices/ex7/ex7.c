#include <stdio.h>
#include <stdlib.h>

int multiploDeTres(int multiplo, int achei);

const int N = 30;

 int main(void)
 {

    int multiplo = 0;
    int numeros[N];
    int achei = 0;

    for(int i = 0; i < 30; i++)
    {
        numeros[i] = multiploDeTres(multiplo, achei);
        printf("%d\n", numeros[i]);
    }
        return(0);
 }

 int multiploDeTres(int multiplo, int achei)
 {
    achei = 0;
    do
    {
      multiplo = rand()%100;
      if(multiplo == 0) continue;
      if ((multiplo % 3) == 0)
        {
            achei++;
        }
    }
    while (achei == 0 );
    return multiplo;
 }