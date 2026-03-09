#include <stdio.h>
#include <string.h>  // Para funções de string

int main() {
    int N, nmenores;
    double soma, media, percentualmenores;

    printf("Quantas pessoas serão digitadas? ");
    scanf("%d", &N);
    
    // Limpar o buffer do teclado após o scanf
    getchar();

    // Declaração dos vetores
    char nomes[N][50];
    int idades[N];
    double alturas[N];

    // Loop para entrada dos dados
    for (int i = 0; i < N; i++) {
        printf("\nDados da %da pessoa:\n", i + 1);
        
        printf("Nome: ");
        fgets(nomes[i], 50, stdin);  // fgets é mais seguro que gets
        nomes[i][strcspn(nomes[i], "\n")] = 0; // Remove o \n do final
        
        printf("Idade: ");
        scanf("%d", &idades[i]);
        
        printf("Altura: ");
        scanf("%lf", &alturas[i]);  // CORRIGIDO: agora com índice [i]
        
        // Limpa o buffer para a próxima iteração
        getchar();
    }

    // Cálculo da média das alturas
    soma = 0;
    for(int i = 0; i < N; i++) {
        soma = soma + alturas[i];
    }
    media = soma / N;
    printf("\nAltura media: %.2lf\n", media);

    // Cálculo do percentual de menores de 16 anos
    nmenores = 0;
    for (int i = 0; i < N; i++) {
        if(idades[i] < 16) {
            nmenores++;
            // Mostrando os nomes das pessoas com menos de 16 anos
             printf("Menor de 16: %s\n", nomes[i]);
        }
    }
    
    percentualmenores = (double)nmenores * 100.0 / N;
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", percentualmenores);

    return 0;
}