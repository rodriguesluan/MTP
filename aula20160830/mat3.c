#include<stdio.h>
#include<math.h>
int main (){
    float Numero, Base, Log;

    printf("entre com um numero ");
    scanf("%f",&Numero);
    printf("entre com uma base ");
    scanf("%f",&Base);

    Log = (log(Numero))/(log(Base));
    printf("o log é: %f",Log);
    return 0;
}
