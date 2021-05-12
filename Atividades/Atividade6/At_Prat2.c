#include <stdio.h>
float a,b,c,y,e,raiz1,raiz2,delta,xn,x0,func,funcd,cont=0;
int main(void){
    scanf("%d %d %d %d %d",&a,&b,&c,&y,&e);
    delta=b*b -(4*a*c);
    if(delta>0 || a==0){
        printf("Não há raizes reais.")
    }
    else{
        if(delta=0){
            raiz1=-b/2*a;
            printf("Há uma raiz real: %f.",raiz1);
        }
        else{
            //metodo newton
            do{
                x0=xn;
                func=(a*(x0*x0))+(b*x0)+c;
                funcd=((2*a)*x0)+(b*x0);
                xn=x0-(func/funcd);
                cont=cont+1;

            }while((xn-x0<=e ||x0-xn<=0)||(func<=e||-func<=e));


            printf("Há duas raízes reais: %f e %f.",raiz1,raiz2);
        }
    }
}