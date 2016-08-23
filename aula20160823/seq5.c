#include<stdio.h>
#include<time.h>
int main(){
	
srand(time(0));
int dado;

printf("digite um numero: ");
scanf("%d",&dado);


dado = dado+ rand ()%2;
if (dado%2 == 0)
printf ("o numero e par %d", dado);
else  
printf ("o numero e impar %d", dado);

	
return 0;
}

