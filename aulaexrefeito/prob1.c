 #include<stdio.h>
int main (){
unsigned int numero =  0xFACA8421;////usar 4 bytes pra salvar o numero

unsigned char * ponteiro = NULL;// aponta pra lugar nenhum
    printf("%p: %u\n", &numero, numero);// & quer o endere�o onde foi armazenado na memoria
    ponteiro = (unsigned char*)& numero;// inicializou ponteiro



    for (;ponteiro < &numero + 1 ;ponteiro ++) // 1 carrega o 4 por causa que � int
        printf("%p: %X\n", ponteiro, *ponteiro);

return 0;
}

