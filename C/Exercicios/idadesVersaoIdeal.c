#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char nome1[50], nome2[50];
    char temp[10]; // buffer temporário
    int idade1, idade2; 
    double idadeMedia;

    printf("Dados da primeira pessoa:\n");
    
    printf("Nome: ");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = 0; // Remove \n
    
    printf("Idade: ");
    fgets(temp, 10, stdin);
    idade1 = atoi(temp); // Converte string para int

    printf("\nDados da segunda pessoa:\n");
    
    printf("Nome: ");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = 0;
    
    printf("Idade: ");
    fgets(temp, 10, stdin);
    idade2 = atoi(temp);

    idadeMedia = (idade1 + idade2) / 2.0;

    printf("\nA idade media de %s e %s é de %.1lf anos\n", nome1, nome2, idadeMedia);

    return 0;

    //Explicação dos erros:

    //1°gets() é perigoso: Pode causar buffer overflow. Use fgets().

    //2°scanf("Nome: "): Isso não captura input, só imprime "Nome:".

    //3°Problema de buffer: Quando você digita idade e pressiona Enter, o \n fica no buffer e o próximo gets()/fgets() captura ele vazio.

    //4°printf com tipos errados: %s espera string, mas você passou int.
}