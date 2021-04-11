#include <stdio.h>
int dia,mes,ano,diai=1,mesi=1,anoi,diat;
int main(void){
    scanf("%d/%d/%d",&dia,&mes,&ano);
    ano=anoi;
    if (mes==1){
        diat=dia-1;
    }
    if(mes==2){
        diat=31+dia-1;
    }
    if(mes==3){
        diat=31+28+dia-1;
    }
    if(mes==4){
        diat=31+28+31+dia-1;
    }
    if(mes==5){
        diat=31+28+31+30+dia-1;
    }
    if(mes==6){
        diat=31+28+31+30+31+dia-1;
    }
    if(mes==7){
        diat=31+28+31+30+31+30+dia-1;
    }
    if(mes==8){
        diat=31+28+31+30+31+30+30+dia-1;
    }
    if(mes==9){
        diat=31+28+31+30+31+30+30+31+dia-1;
    }
    if(mes==10){
        diat=31+28+31+30+31+30+30+31+30+dia-1;
    }
    if(mes==11){
        diat=31+28+31+30+31+30+30+31+30+29+dia-1;
    }
    if(mes==12) {
        diat=31+28+31+30+31+30+30+31+30+29+30+dia-1;
    }
    if((ano%4==0) && (ano%100!=0 || ano%400==0)){
        diat=diat+1;
    }
    if(ano%4!=0 || (ano%100!=0||ano%400!=0)){
        diat=diat;
    }
    printf("%d",diat);
}
