#include <stdio.h>
#include <string.h>


int main () {
    int idade;
    double salario, altura;
   // char nome[50];
    //char sexo; 

    printf("Digite o valor da idade: ");
    scanf("%d", &idade);
    printf("Digite o valor do  salario: ");
    scanf("%lf", &salario);
    printf("Digite o valor da altura: ");
    scanf("%lf", &altura);
    
    
    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura); 
     

    //getchar(); 
    return 0; 
}