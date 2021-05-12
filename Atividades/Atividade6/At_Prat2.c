#include <stdio.h>
float a,b,c,chute,erro,delta,raiz,raiz1,raiz2,teste;
int main(void){
    scanf("%f %f %f %f %f",&a,&b,&c,&chute,&erro);
    if(a==0){
        printf("Não há raizes reais.");
    }
    else{
        delta=(b*b)-(-4*a*b);
        if(delta>0){
            printf("Não há raizes reais.!");
        }
        else{
            if(delta==0){
                raiz=-b/2*a;
                printf("Há uma raiz real: %f.",raiz);
            }
            else{
                do{
                raiz=(chute+(delta/chute))/2;
                chute=raiz;
                }while(raiz/delta>erro);
                
                raiz1=(-b-raiz)/(2*a);
                raiz2=(-b+raiz)/(2*a);
                printf("Há Duas raízes reais: %f e %f.",raiz2,raiz1);
            }
        }
    }  
}