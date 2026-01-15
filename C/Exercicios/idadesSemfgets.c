#include <stdio.h>

int main () {

    char nome1[50], nome2[50];
    int idade1, idade2; 
    double idadeMedia;

    printf("Dados da primeira pessoa: \n");
    scanf("Nome: ");
    scanf("%s", nome1); //Para uma palavra só (sem espaços)
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("\nDados da segunda pessoa:\n");
    printf("Nome: ");
    scanf("%s", nome2);
    printf("Idade: ");
    scanf("%d", &idade2);

    idadeMedia = (idade1 + idade2) / 2.0;

    printf("\n A idade media %s e %s é de %.1lf anos\n", nome1, nome2, idadeMedia);

    


    return 0;
}