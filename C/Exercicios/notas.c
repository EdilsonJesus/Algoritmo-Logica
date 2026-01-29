#include <stdio.h> 

int main () {

    double nota1, nota2, notafinal;

    printf("Digite a primeira nota: \n");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%lf", &nota2);

    notafinal = nota1 + nota2; 

    printf("Soma das notas é %1.lf \n ", notafinal);

    if (notafinal < 60.0 ) {
        printf("Reprovado \n");
    }


    return 0; 
}