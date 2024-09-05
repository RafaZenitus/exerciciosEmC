#include <stdio.h>

const int N = 30;

void par(int X[N], int A[N]);
void impar(int X[N], int B[N]);

int main(void)
{
    int X[N] =
    {
        12, 67, 23, 56, 78, 34, 89, 10, 50, 34, 87, 21, 95, 62, 17, 43, 71, 28, 39, 51, 92, 16, 73, 37, 80, 59, 24, 64, 11, 10
    };

    int A[N] = {0};
    int B[N] = {0};

    par(X, A);
    impar(X, B);

    for(int i = 0; i < N; i++)
    {
        printf("%d ", X[i]);
    }
    printf("\n");
    for(int i = 0; i < N && A[i] != 0; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    for(int i = 0; i < N && B[i] != 0; i++)
    {
        printf("%d ", B[i]);
    }

    return 0;
}

void par(int X[N], int A[N])
{
    int num_par = 0;

    for(int i = 0; i < N; i++)
    {
        if(X[i] % 2 == 0)
        {
            A[num_par] = X[i];
            num_par++;
        }
    }
}

void impar(int X[N], int B[N])
{
    int num_impar = 0;

    for(int i = 0; i < N; i++)
    {
        if(X[i] % 2 != 0)
        {
            B[num_impar] = X[i];
            num_impar++;
        }
    }
}

