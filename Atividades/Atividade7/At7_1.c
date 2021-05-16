#include <stdio.h>
int comp,num,contador,prim=0,prim2=0,val=0;
int main(void){
    scanf("%d",&comp);
    while (comp!=0){
        scanf("%d",&num);
        for (contador = 2; contador <= num/2; contador++){
                if(num%contador==0){
                    val=val+1;
                }
        }
        if(val<=0){
            prim=prim+1;
        }
        else {
            if (prim>prim2){
                prim2=prim;
            }
            prim=0;
        }
        comp=comp-1;
        val=0;
    }
    printf("%d",prim2);
}