#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
char * texto = malloc (sizeof(char));
texto [0] = '0';
printf("entre com um texto: \n");
recebeTexto(texto);

return 0;
}

void recebeTexto(char *texto){

    int c, tamanho = strlen (texto);
do {
    c = getchar();
    if (c!= 27){
        texto [tamanho]= c;
        tamanho ++;
        texto = realloc(texto,(tamanho +1)* sizeof(char));
        texto [tamanho] = '\0';
    }

} while (c!=27);
}
