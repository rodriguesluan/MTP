#include<stdio.h>
int main (){
int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
int contagem = 0;
int tamanho = sizeof (vetor)/sizeof(int);// 20 bytes para percorrer e contar quantos tem 0
unsigned char * ponteiro = NULL;// aponta pra lugar nenhum
ponteiro = (unsigned char*)&(vetor[0]);// endereço do primeiro cara que tiver no meu vetor
for (;ponteiro < vetor + tamanho ;ponteiro ++) {
         printf("%p: %X\n", ponteiro, *ponteiro);
         if (*ponteiro != 0) contagem ++;

            }
        printf("sao %d os bytes de memoria com apenas 1's.\n", contagem);

return 0;
}

