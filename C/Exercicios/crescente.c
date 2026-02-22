#include <stdio.h>

int main () {
  
    int X, Y;

    printf("Digite dois números: \n");
    scanf("%d", &X);
    scanf("%d", &Y);

    while (X != Y) {
        if (X < Y){
            printf("CRESCENTE\n");
        }
        else{
            printf("DECRECENTE\n");
        }
        printf("Digite outros dois números: \n");
        scanf("%d", &X);
        scanf("%d", &Y);

    }
    

}