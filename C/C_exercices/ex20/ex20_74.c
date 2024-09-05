#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherMatriz(int **matriz, int linhas, int colunas);

int encontrarMaiorElemento(int **matriz, int linhas, int colunas);

int main()
{

    srand(time(NULL));

    int linhas = 6;
    int colunas = 6;
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    preencherMatriz(matriz, linhas, colunas);

    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    int maiorElemento = encontrarMaiorElemento(matriz, linhas, colunas);

    printf("\nO maior elemento da matriz é: %d\n", maiorElemento);

    for (int i = 0; i < linhas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}


void preencherMatriz(int **matriz, int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }
}

int encontrarMaiorElemento(int **matriz, int linhas, int colunas)
{
    int maior = matriz[0][0];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }

    return maior;
}

