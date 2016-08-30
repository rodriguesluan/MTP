#include <stdio.h>
#include <ctype.h>
int main (){
  int indice;
  char investigador;
  char frase[256];
  printf("digite uma frase, por favor: ");
  gets(frase);
  investigador = frase[indice];
  while(investigador != NULL)
    {
      frase[indice]= toupper(investigador);
      indice ++;
      investigador = frase[indice];



  }
  printf("%s",frase);


return 0;
}
