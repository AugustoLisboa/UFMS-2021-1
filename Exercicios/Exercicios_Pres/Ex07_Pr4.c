#include <stdio.h>
int dia,mes,ano,diai=1,mesi=1,anoi,diat;
int main(void){
    scanf("%d / %d/ %d",&dia,&mes,&ano);
    switch(mes){
        case 1:
            diat=dia-1;
        break;
        case 2:
            diat=31+dia-1;
        break;
        case 3:
            diat=31+28+dia-1;
        break;
        case 4:
            diat=31+28+31+dia-1;
        break;
        case 5:
            diat=31+28+31+30+dia-1;
        break;
        case 6:
            diat=31+28+31+30+31+dia-1;
        break;
        case 7:
            diat=31+28+31+30+31+30+dia-1;
        break;
        case 8:
            diat=31+28+31+30+31+30+31+dia-1;
        break;
        case 9:
            diat=31+28+31+30+31+30+31+31+dia-1;
        break;
        case 10:
            diat=31+28+31+30+31+30+31+31+30+dia-1;
        break;
        case 11:
            diat=31+28+31+30+31+30+31+31+30+29+dia-1;
        break;
        case 12:
            diat=31+28+31+30+31+30+31+31+30+29+30+dia-1;
        break;
       
    }
    if (ano%400==0){
        diat=diat+1;
    }
    else if ((ano%4 == 0) && (ano%100!=0)){
        diat=diat+1;
    }
    printf("%d",diat);
}