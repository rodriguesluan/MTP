#include<stdio.h>
main(){
	float nota_1, nota_2, nota_3, media ;
	
	printf("digite a nota 1 do aluno :");
	scanf("%f",&nota_1);
	printf("digite a nota 2 do aluno :");
	scanf("%f",&nota_2);
	printf("digite a nota 3 do aluno :");
	scanf("%f",&nota_3);
	media = ((nota_1*2)+(nota_2*3)+(nota_3*5))/(2.0+3.0+5.0);

	printf("a media do aluno X e: %f", media);
	 
	
	return 0;
}
