#include <stdio.h>

int main () {
    int M, N; 

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &M);
    printf("Qual a quantidade de colunas da matriz: ");
    scanf("%d", &N);

    double mat [M][N];
    //VETOR SOMA
    double vet[M];

    //LÓGICA PARA LER A MATRIZ 
    for (int i = 0; i < M; i++){
        printf("Digite os elementos da %da. linha: \n", i + 1);
        for (int j = 0; j < N; j++){
            scanf("%lf", &mat[i][j]);
        }
    }

    //LÓGICA PARA SOMAR E ARMAZENAR NO VETOR
    for (int i = 0; i < M; i++ ){
        vet[i] = 0;
        for (int j = 0; j < N; j++){
            vet[i] = vet[i] + mat[i] [j];            
        }
    }

    //Percorrer o vetor e imprimir a soma
    for (int i = 0; i < M; i++) {
        printf("%.1lf\n",vet[i] );
    }

    return 0;
}