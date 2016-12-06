#include<stdio.h>

union uniao{
    int i;
    float f;

};


int main (){
    union uniao numero;
    char opcao;

    do{
        printf("voce quer entrar com (i)nt ou (f)loat");
        scanf("%c",opcao);
        fflush(stdin);

    }

    while (opcao != 'i'&& opcao != 'i' &&opcao!= 'f' && opcao != 'f' );
    if (opcao ==  'i'|| opcao =='i'){
        printf("entre com o int:");
        scanf("%d",& numero.i);
        printf("como float: %e\n", numero.f);

    }
        else {

        printf ("ntre com o float");
        scanf("%f", &numero.f);
        printf("como int: %d\n", numero.i );
        }


return 0;
}
