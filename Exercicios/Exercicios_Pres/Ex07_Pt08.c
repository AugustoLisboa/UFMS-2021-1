#include <stdio.h>
int dia1,mes1,ano1,dJu,dia2,mes2,ano2,dJu2;
int main (void){
    scanf("%d/%d/%d",&dia1,&mes1,&ano1);
    scanf("%d/%d/%d",&dia2,&mes2,&ano2);
    dJu = 1461*(ano1+4800+(mes1-14)/12)/4+(367*(mes1-2-12*((mes1-14)/12)))/12-(3*((ano1+4900+(mes1-14)/12)/100))/4+dia1-32075;
    dJu2 = 1461*(ano2+4800+(mes2-14)/12)/4+(367*(mes2-2-12*((mes2-14)/12)))/12-(3*((ano2+4900+(mes2-14)/12)/100))/4+dia2-32075;
    dJu= dJu%7;
    dJu2=dJu2%7;
    if(dJu==dJu2){
       printf("Os dias da semana são iguais.\n");
       switch (dJu){
            case 0:
                printf("segunda-feira");
            break;
            case 1:
                printf("terça-feira");
            break;
            case 2:
                printf("quarta-feira");
            break;
            case 3:
                printf("quinta-feira");
            break;
            case 4:
                printf("sexta-feira");
            break;
            case 5:
                printf("sábado");
            break;
            case 6:
                printf("domingo");
            break;
            }
    }
    else{
        printf("Os dias da semana são diferentes.");
    }

}