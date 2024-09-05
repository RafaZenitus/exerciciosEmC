#include <stdio.h>
#include <stdlib.h>

const int N = 10;
const int O = 20;
const int P = 30;
const int Q = 30;

int main (void)
{
    int array_R[N];
     for (int i = 0; i < N; i++)
     {
        array_R[i] = (rand() % 20) + 50;
     }

     int array_S[O];
     for (int i = 0; i < N; i++)
     {
        array_S[i] = (rand() % 20) + 50;
     }
    int array_X[P];

   int i = 0, j = 0, k = 0;

   while(i < N && j < O)
   {
      if (array_R[N] < array_S[O])
      array_X[k++] = array_R[i++];
      else
      array_X[k++] = array_S[j++];
   }
   while (i < N)
        array_X[k++] = array_R[i++];

    while (j < O)
        array_X[k++] = array_S[j++];

printf("União:");
    for(int l = 0; l < P ; l++)
        printf(" %d ",array_X[l]);

    int array_Y[Q];
    int m = 0;

    for (int p = 0; p < N; p++)
    {
        for (int q = 0; q < O; q++)
        {
            if (array_R[i] == array_S[j])
            {
                array_Y[m++] = array_R[i];
                break;
            }
        }
    }

    printf("\nInterseção:");
    for (int l = 0; l < Q; l++)
    {
        printf(" %d ", array_Y[l]);
    }
    printf("\n");
}