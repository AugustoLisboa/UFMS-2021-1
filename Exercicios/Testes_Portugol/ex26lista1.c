#include <stdio.h>
int numero,d1,d2,d3,d4,cont;
int main (void){
    scanf("%d",&numero);
    d4=numero%10000/1000;
    d3=(numero%1000)/100;
    d2=(numero%100)/10;
    d1=numero%10;
    printf("%d%d%d%d",d1,d2,d3,d4);
