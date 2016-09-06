#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define N 256

int main (){
char frase[N];
int i;
    printf("entre com uma frase, por favor:");
    gets(frase);

for (i = 0;frase [i] != '\o';i++)
    frase [i]= toupper(frase[i]);// transformou tudo em maiuscula

     printf("Tamanho: %u", strlen(frase) );
     if (strncmp(frase, "BOM DIA",7) ==0)
        printf("Bom dia pra voce tb! \n");
     else
        printf("voce quer dizer: %s?\n", frase);



return 0;

}
