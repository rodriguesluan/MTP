#include<stdio.h>
#include<conio.h>
main (){
    char conti;
    int a,b,c,maior,menor;
     double media;
    do{


     printf("Digite o primeiro numero: ");
     scanf("%d", & a);
     printf("Digite o segundo numero: ");
     scanf("%d", & b);
     printf("Digite o terceiro numero: ");
     scanf("%d", & c);


     maior = a;
     menor = a;
     if (b < menor)
        menor = b;
     if (b > maior)
        maior = b;
     if (c < menor)
        menor = c;
     if (c > maior)
        maior = c;
     media = (a + b + c) / 3;





     printf ("\n O maior numero e : %d \n", maior);
     printf ("\n O menor numero e : %d \n", menor);
     printf("\n A media dos numeros e %f \n", media);

    printf("deseja continuar?\n digite ( S ) para Sim e ( N ) para Não");
    scanf("%c", &conti);
    system("pause");
     getch();
     return 0;
    }
    while( conti!='N' || 'n');


     }




