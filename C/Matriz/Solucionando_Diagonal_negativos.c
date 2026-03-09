#include <stdio.h>

int main() {
    int N, qtdNegativo;
    
    printf("Qual a ordem da matriz (N x N)? ");
    scanf("%d", &N);
    
    int mat[N][N];  // Declara a matriz N x N

    // Leitura dos elementos
    printf("\n--- LEITURA DA MATRIZ ---\n");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("Elemento [%d, %d]: ", i, j);  // CORRIGIDO
            scanf("%d", &mat[i][j]);
        }
    }

    // Exibição da diagonal principal
    printf("\n--- DIAGONAL PRINCIPAL ---\n");
    for(int i = 0; i < N; i++) {
        printf("%d ", mat[i][i]);
    }
    printf("\n");

    // Contagem de números negativos
    qtdNegativo = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(mat[i][j] < 0) {
                qtdNegativo++;
            }
        }
    }

    // Exibindo a matriz completa (opcional - para visualização)
    printf("\n--- MATRIZ COMPLETA ---\n");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%4d ", mat[i][j]);  // %4d para alinhamento
        }
        printf("\n");
    }

    printf("\n--- RESULTADO ---\n");
    printf("Quantidade de números negativos: %d\n", qtdNegativo);

    return 0;
}