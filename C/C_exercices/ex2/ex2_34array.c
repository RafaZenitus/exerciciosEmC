#include <stdio.h>

const int N = 20; // define a constante N para 20

float media(int tamanho, int array[]); // declaração da função que caçcula média

int main (void)
{
    int num [N]; // declara uma array com o tamanho da constante N

    // for loop que recebe os números e os armazena numa array
    for (int i = 0; i < N; i++)
    {
        printf("Números: ");
        scanf("%d", &num[i]);
    }

    printf("Resultado: %f\n", media(N, num)); //chama a função média e exive o resultado

}

float media(int tamanho, int array[])
{
    int sum = 0;
    for (int i = 0; i < tamanho; i++) // loop para somar os elementos da array
    {
        sum += array[i];
    }
    return sum / (float) tamanho; // pega o valor da soma dos elementos da array e tira a média pelo tamanho da array 
}