#include <stdio.h> 

int main () {
    int soma, idade, cont;
    double media; 

    printf("Digide as idade \n");
    scanf("%d", &idade);

    soma = 0;
    cont = 0;
    while (idade >= 0) {
        soma = soma + idade;
        cont = cont + 1; 
        scanf("%d", &idade);

    }

    if(cont == 0) {
        printf("IMPOSSÍVEL CALCULAR"); 
    }
    else {
        media = (double)soma / cont;
        printf("MEDIA = %.2lf\n", media);
    }

    return 0;
}