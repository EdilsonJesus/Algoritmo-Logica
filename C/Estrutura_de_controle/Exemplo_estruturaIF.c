#include <stdio.h>

int main () {
    int hora;
    printf("Informe que horas são: ");
    scanf("%d", &hora);

    if(hora < 12){
        printf("BOm dia \n");        
    }
    else {
        printf("Boa Tarde !\n");
    }

    return 0;
}