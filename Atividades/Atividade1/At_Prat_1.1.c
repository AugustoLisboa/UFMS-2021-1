#include <stdio.h>
float conta,ptFelipe;
int ptCarlos,ptAndre;
int main(void){
    printf("Informe o valor da conta em decimais para divisão:\n");
    scanf("%f",&conta);
    ptCarlos=conta/3;
    ptAndre=conta/3;
    ptFelipe=conta-ptAndre-ptCarlos;
    printf("Carlos pagará: %d\n", ptCarlos);
    printf("André pagará: %d\n",ptAndre);
    printf("Felipe pagará: %.2f\n",ptFelipe); 
}