#include <stdio.h>

int main () {

    int N; 
    double soma, media; 

    printf("Informe a quantidade de numeros digitados: ");
    scanf("%d", &N);

    double vet [N];

    // Ler e armazer NO VETOR OS VALORES DIGITADOS
    for(int i = 0; i < N; i++) {
        printf("Digite um número: ");
        scanf("%lf", &vet[i]);
    }

    //Imprimir os valores digitados
    printf("\nValores ");
    for(int i = 0; i < N; i++){
        printf("%.1lf ", vet[i]);
    }

    printf("\n");

    //VARRER O VETOR E SOMA-LO
    for(int i = 0; i < N; i++){
        soma = soma + vet[i];        
    }

    printf("Soma = %.2lf\n", soma);

    media = soma / N;
    printf("Media = %.2lf\n", media);


}