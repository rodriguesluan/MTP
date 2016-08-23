#include<stdio.h>
#include<time.h>
int main (){
	srand(time(0));
	printf("%d\n",time(0)); //colocou %f para sair numero quebrado 
	return 0;
}
