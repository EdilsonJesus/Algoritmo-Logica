#include <stdio.h>

int main () {
    char nome1[50], nome2[50];
    int idade1, idade2; 
    double idadeMedia;

    printf("Dados da primeira pessoa: \n");
    scanf("Nome: ");
    gets(nome1); 
    printf("Idade: ");
    scanf("%d", &idade1);


    printf("Dados da segunda pessoa: \n");
    scanf("Nome: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome2); 
    printf("Idade: ");
    scanf("%d", &idade2);

    idadeMedia = (idade1 + idade2) / 2.0;

    printf("A Idade media de %s e %s é de %.1lf anos: ", idade1, idade2, idadeMedia);

    return 0;
}