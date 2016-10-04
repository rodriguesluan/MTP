#include<stdio.h>
#define N 2
#define M 4
void recebeMatriz(float matriz [N][M]);
void imprimeMatriz(float matriz [N][M]);
void transporMatriz(float matriz [N][M], float matriz[M][N]);
void imprimeTransposta(float[M][N]);


int main (){
    float matriz [N][M], transposta [M][N];
    recebeMatriz(matriz);
    imprimeMatriz(matriz);
    transporMatriz(matriz,transposta);
    printf("a transposta e:\n");
    imprimeTransposta(transposta);

return 0;
}


void recebaMatriz (float matriz[N][M]){ // referencia
    int i, j;
    for (i = 0; i<N; i++)
        for (j= 0; j<M; j++)
        printf("entre com o elemento (%d %d):",i,j);
        scanf("%f", &matriz[i][j]);


}
void imprimeMatriz(float matriz [N][M]){
 int i, j;
 printf("Matriz %dx%d:\n",N,M);
 for (i = 0; i< N; i++)
    for (j = 0; j<M; j++)
    printf("%g%g", matriz[i][j], (j != m-1)? 't': '\n');



                }
void transporMatriz(float matriz [N][M], float transposta [M][N]){
    int i, j;
    for(i= 0; i<N;i++)
            for(j= 0; j<M;j++)
            transposta [j][i]= matriz [i][j];



                   }
void imprimeTransposta(float transposta [M][N]){
    int i, j;
    printf("\n Matriz %d%d:\n"M,N);
    for(i= 0; i<M;i++)
            for(j= 0; j<N;j++)
                    printf("%g%c"transposta[i][j],(j !=N-1)? 't': '\n');

            transposta [j][i]= matriz [i][j];
}
