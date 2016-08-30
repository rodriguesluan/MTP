#include<stdio.h>
#include<math.h>
int main (){
    float Lado_1, Lado_2, Lado_3, angulo  ;

    printf("digite o valor do lado 1");
    scanf("%f",&Lado_1);
    printf("digite o valor do lado 2");
    scanf("%f",&Lado_2);
    printf("digite o angulo");
    scanf("%f",&angulo);

   Lado_3 = sqrt((pow(Lado_1,2.)+ pow(Lado_2,2.))-2*(Lado_1*Lado_2*Cos(angulo)));

   printf("O valor do lado 3 será: %f",Lado_3);


return 0;
}
