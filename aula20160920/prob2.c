#include <stdio.h>

int main()
{
        int num,
            contador = 1;

        printf("Digite um numero: ");
        scanf("%d", &num);

        printf("PARES \n");
        printf(" IMPARES \n");
        while(contador <= num)
        {
            if(contador%2 == 1)
                printf("%d \t",contador);
            else
                printf("\t %d\n", contador);

            contador++;

        }
}
