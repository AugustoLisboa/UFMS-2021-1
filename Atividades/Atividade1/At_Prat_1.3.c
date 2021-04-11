#include <stdio.h>
#include <math.h>
float lado1, lado2, lado3, ar1, ar2,arT,tinta,rolo,mao,lata,custo;
int main(void){
    printf("Informe respectivamente a medida das 3 dimensões da caixa:\n");
    scanf("%f %f %f", &lado1,&lado2,&lado3);
    arT=(2*(lado1*lado2))+(2*(lado2*lado3))+(2*(lado1*lado3));
    tinta=arT*3;
    rolo=arT/10;
    mao=ceil(arT)*20;
    lata=tinta/5;
    lata=ceil(lata);
    rolo=ceil(rolo);
    custo=(lata*45)+mao+(rolo*5);
    printf("Vão ser utilizados %.2f litros de tinta e custará %f",tinta,custo);
}