#include <stdio.h>
#include <ctype.h>
int main (){
    int indice = 0;//primeiro carac da string
    char investigador;
    char frase[256];//aceita no máximo 256 carac
    printf("escreva uma frase, por favor: ");// usa gets pois é string
    gets(frase);
    investigador = frase[indice];// indice 0 vai ser o primeiro caracter da frase
    while(investigador != NULL){
        frase[indice] = tolower(investigador);
        indice ++;
        investigador = frase[indice];// novo caracter
    }
    printf("%s\n",frase);
    return 0;

}
