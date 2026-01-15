#include <stdio.h>
#include <string.h> // Para strcspn se quiser remover o \n

int main() {
    char nome1[50], nome2[50];
    int idade1, idade2; 
    double idadeMedia;

    printf("Dados da primeira pessoa:\n");
    
    printf("Nome: ");
    // Limpa o buffer antes (importante!)
    getchar();
    fgets(nome1, 50, stdin);
    // Remove o \n do final (opcional mas recomendado)
    nome1[strcspn(nome1, "\n")] = 0;
    
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("\nDados da segunda pessoa:\n");
    
    // Limpa o buffer do \n que ficou do scanf anterior
    getchar();
    
    printf("Nome: ");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = 0;
    
    printf("Idade: ");
    scanf("%d", &idade2);

    idadeMedia = (idade1 + idade2) / 2.0;

    // CORRIGIDO: %s para strings, %d para inteiros
    printf("\nA idade media de %s e %s é de %.1lf anos\n", nome1, nome2, idadeMedia);

    return 0;
}