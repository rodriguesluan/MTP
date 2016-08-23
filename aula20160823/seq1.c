#include<stdio.h>
int main (){
	float lado_quadrado, area; // declarando o que é lado do quadrado e area
	printf("favor entrar com o lado do qadrado:"); // usuario  entra com os dados
	scanf("%f",&lado_quadrado); //armazenar o lado do quadrado	
	area = lado_quadrado*lado_quadrado;
	
	printf("a area do quadrado e: %f", area);
	return 0;
}
