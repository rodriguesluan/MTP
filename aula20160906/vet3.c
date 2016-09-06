#include <stdio.h>
#include <stdlib.h>

#define N 10 //onde ocorrer MAX no código será atribuido o valor 8

int main (void)
{
    int vetor[N];
    int i, aux;

    for(i=0; i<N;i++)
        printf("%d  ", vetor[i]);

    for (i=0; i < N/2; i++) {
        aux = vetor[i];
        vetor[i] = vetor[N-i-1];
        vetor[N-i-1] = aux;
    }
    printf("\n");
    for(i=0; i<N;i++)
        printf("%d  ", vetor[i]);

    printf("\n");

    return 0;
}
