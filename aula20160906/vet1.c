#include<stdio.h>
#include<time.h>
#define N 10000
int main (){
srand(time(0));
int numero, i;
int vetor[N];

float soma = 0.0f;
  printf("entre com um numero inteiro nao negativo:");
  scanf("%d", &numero);

  for(i= 0; i<N; i++) vetor[i] = rand()%numero +1;
  for(i= 0; i<N; i++)soma= soma + vetor [i];

    printf("a media desses numeros eh:%g\n ", soma/N);


return 0;
}

