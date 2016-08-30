#include <stdio.h>
int main()
{
int soma(int Numero)
{

    if(Numero == 1)
        return 1;
    else
        return (Numero+soma(Numero-1));
}

    int Numero;
    printf("Digite um numero inteiro positivo, por favor: ");
    scanf("%d", &Numero);

    printf("Soma sera: %d\n", soma(Numero));
    return 0;
}
