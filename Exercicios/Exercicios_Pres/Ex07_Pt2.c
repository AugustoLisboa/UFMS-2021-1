#include <stdio.h>
float peso,coef;
int seletor;
int main (void){
    scanf("%f %d",&peso,&seletor);
    switch (seletor)
    {
        case 1:
            peso=peso*0.037;
            printf("Peso no planeta Mercúrio: %.6f",peso);
        break;
        case 2:
            peso=peso*0.088;
            printf("Peso no planeta Vênus: %.6f",peso);
        break;
        case 3:
            peso=peso*0.038;
            printf("Peso no planeta Marte: %.6f",peso);
        break;
        case 4:
            peso=peso*0.264;
            printf("Peso no planeta Júpiter: %.6f",peso);
        break;
        case 5:
            peso=peso*0.115;
            printf("Peso no planeta Saturno: %.6f",peso);
        break;
        case 6:
            peso=peso*0.117;
            printf("Peso no planeta Urano: %.6f",peso);
        break;
    }

}