#include <stdio.h>
int hora,min,sec;
int main(void){
    printf("Entre com valor inteiro de horas, minutos e segundos respectivamente:\n");
    scanf("%d %d %d",&hora,&min,&sec);
    hora=hora*60*60;
    min=min*60;
    sec=sec+hora+min;
    printf("%d segundos", sec);
}