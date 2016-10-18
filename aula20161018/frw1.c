#include<stdio.h>
#define NCHAR 256
int main (){


    int opcao;
    do{
      printf("1-receber dados\n");
      printf("2-recuperar dados\n");
      printf("0-sair \n");
      printf("entre com a opcao:");
      fscanf(stdin, "%d", &opcao); getchar();// para consumir o ENTER do stdin
      if (opcao==1)receberDados();
      if (opcao==2)recuperarDados();

          }while(opcao);

return 0;
}

void receberDados(){
    FILE * arquivo;
    char nome[NCHAR];
    int idade;
    float altura_m;
    printf("entre com seu nome:");
    fgets(nome, NCHAR, stdin);
    printf("entre com sua idade:");
    fscanf(stdin, "%d",&idade);
    printf("entre com sua altura:");
    fscanf(stdin, "%f",&altura_m);
    arquivo = fopen ("info.txt","w");
    fprintf(arquivo, "%s\n%d\n%f\n", nome, idade, altura_m);
    fclose(arquivo);

}
void recuperarDados(){
    FILE * arquivo;
    char nome[NCHAR];
    int idade;
    float altura_m;
    arquivo = fopen ("info.txt","r");
    fscanf(arquivo, "%s\n%d\n%f\n", nome, &idade, &altura_m);
    fclose(arquivo);
    fprintf(stdout, "Nome: %s\n", nome);
    fprintf(stdout, "Idade: %d\n", idade);
    fprintf(stdout, "Altura: %f\n", altura_m);


    fclose(arquivo);

}
