#include<stdio.h>
int main (){
int contagem = 0;
int vetor[] = {0,1,2,4,8};
int tamanho = sizeof (vetor)/sizeof(int);// 20 bytes para percorrer e contar quantos tem 0
unsigned char * ponteiro = NULL;// aponta pra lugar nenhum
ponteiro = (unsigned char*)&(vetor[0]);// endereço do primeiro cara que tiver no meu vetor



    for (;ponteiro < vetor + tamanho ;ponteiro ++) {
         printf("%p: %X\n", ponteiro, *ponteiro);
         if (*ponteiro == 0) contagem ++;

            }
        printf("sao %d os bytes de memoria com apenas 0's.\n", contagem);
return 0;
}

