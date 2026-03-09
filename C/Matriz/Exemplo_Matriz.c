#include <stdio.h>

int main () {
   
    int M, N, i, j;

    printf("Quantas linhas vai ter a matriz? ");
    scanf("%d", &M);
    printf("Quantas colunas vai ter a matriz? ");
    scanf("%d", &N);

    //dimenções da matriz 
    int mat[M] [N];

    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            //saida para o usuário 
            printf("Elemento [%d,%d]: ", i, j);
            
            //leitura de dados
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n MATRIZ DIGITADA: \n");
    //logica para percorrer os dados e seguida imprimi-los
    for (i = 0; i < M; i++){
        for (j = 0; j <N; j++){            
            printf("%d ", mat[i][j]);
        }
        //Quebra de linha 
        printf("\n");
    }
    
    return 0; 
} 