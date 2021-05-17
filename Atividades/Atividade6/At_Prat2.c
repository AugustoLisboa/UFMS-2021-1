#include <stdio.h>
float a,b,c,chute,erro,delta,raiz,raiz1,raiz2,teste;
int main(void){
    scanf("%f %f %f %f %f",&a,&b,&c,&chute,&erro);
    if(a==0){
        printf("Não há raizes reais.");
    }
    else{
        delta=(b*b)-(4*a*c);
        if(delta<0){
            printf("Não há raizes reais.!");
        }
        else{
            if(delta==0){
                raiz=-b/2*a;
                printf("Há uma raiz real: %f.",raiz);
            }
            else{
                raiz=0;
                teste=9999;
                while(teste>erro){
                
                raiz=(chute+(delta/chute))/2;
                teste=raiz-chute;
                if(teste<0){
                    teste=teste*-1;
                }
                chute=raiz;
                }

                raiz1=(-b-raiz)/(2*a);
                raiz2=(-b+raiz)/(2*a);
                printf("Há duas raízes reais: %f e %f.",raiz2,raiz1);
            }
        }
    }  
}