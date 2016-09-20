
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

int dados[5];
system("pause");
srand ( time(NULL) );
dados[0] = rand() % 6 + 1;
dados[1] = rand() % 6 + 1;
dados[2] = rand() % 6 + 1;
dados[3] = rand() % 6 + 1;
dados[4] = rand() % 6 + 1;




if(dados[0]+dados[1]+dados[2]+dados[3]+dados[4]<21)
printf("\nperdeu\n");
else
printf("\nganhou\n");
printf("\a soma deu %d\n",dados[0]+dados[1]+dados[2]+dados[3]+dados[4]);

system("pause");

 }
