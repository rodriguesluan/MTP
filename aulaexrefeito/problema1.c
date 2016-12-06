#include <stdio.h>
#include<stdlib.h>// biblioteca rand
#include <time.h>
void fala();
int main (){
    srand(time(0));
    char msg[256];
    printf("## oi, quer conversar?\n");
    do{
        fgets(msg, sizeof(msg),stdin);
        fala();

    }while (strncmp(msg, "tchau", 5) != 0);
    printf("## que pena, estava gostando de voce...\n");

return 0;
}


void fala(){// sem nenhum argumento, seleciona uma frase aleatoria e imprime na tela
    int qualfala = rand ()%7;
    switch (qualfala) {
        case 0: printf("#tudo bem?\n"); break;
        case 1: printf("#ok\n"); break;
        case 2: printf("#hueheueheuheuehBRBRBR\n"); break;
        case 3: printf("#que legal\n"); break;
        case 4: printf("#que chato\n"); break;
        case 5: printf("#fale mais sobre isso\n"); break;
        case 6: printf("#sobre o que quer falar?\n"); break;






  }
}
