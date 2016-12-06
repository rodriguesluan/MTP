#include<stdio.h>
int main (){
    float numero1, numero2;
    unsigned char * ponteiro = NULL;
    printf("Digite dois numeros reais: \n");
    scanf("%f %f", &numero1, &numero2);

    printf("%p: %u\n", &numero1, numero1);//
    ponteiro = (unsigned char*)& numero1;

    printf("%p: %u\n", &numero2, numero2);//
    ponteiro = (unsigned char*)& numero2;





return 0;
}

