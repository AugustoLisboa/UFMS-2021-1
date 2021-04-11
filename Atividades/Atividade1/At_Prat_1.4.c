#include <stdio.h>
int sec,hora,resto,min,tempo;
int main(void){
    printf("Entre com a quantidades de segundos:\n");
    scanf("%d",&tempo);
    hora = tempo/3600;
    resto = tempo % 3600;
    min = resto / 60;
    sec = resto % 60;
    printf("%dh%dmin%ds",hora,min,sec);
}