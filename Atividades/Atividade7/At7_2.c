#include <stdio.h>
int main (void){
char leitor;
int num,contador,part,partotal,comprimento=0,pow10=1;
    while (leitor!='x'){
        scanf(" %c",&leitor);
        if(leitor=='x'){
            break;
        }
        scanf(" %d %d",&contador,&num);
        //determina o comprimento do numero
        partotal = num;
        do{
            comprimento=comprimento+1;
            partotal=partotal/10;
        
        }while (partotal>0);
        comprimento=comprimento-1;
        //Calculo exponencial 
        while (comprimento!=0){
            pow10=pow10*10;
            comprimento=comprimento-1;
        }
        
        //Estrutura de decisão de operação
        switch (leitor){
            case '>':
                while (contador!=0){
                    part=num%10;
                    num=num/10;
                    num=num+(pow10*part);
                    contador=contador-1;
                }
                pow10=1;
                printf("%d\n",num);
            break;
            case '<':
                while(contador!=0){
                    part=num/pow10;
                    num=num-(pow10*part);
                    num=(num*10)+part;
                    contador=contador-1;
                }
                pow10=1;
                printf("%d\n",num);
            break;
            default:
            break;
        }
    }
}
