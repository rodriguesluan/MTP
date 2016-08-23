#include<stdio.h>
main (){
	float base, altura, area;
	printf("digite o valor da base do triângulo:");
	scanf("%f",&base);
	printf("digite o valor da altura do triangulo:");
	scanf("%f",&altura);
	area = (base*altura)/2.0;
    printf("a area do triangulo e: %f", area);
	return 0;
}
