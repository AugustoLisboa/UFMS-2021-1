#include <stdio.h>
int cont,cont2,var,n;
int main (void){
    scanf("%d",&n);
    for (cont=2;cont<=n/2;cont++){
            scanf("%d",&var);
            for (cont2=1;cont2<=var;cont2++){
                if(n%cont2==0){
                    printf("%d não é primo, o primo anterior é %d.\n",var,var-1);
                }
            }
            if(n%cont==1){
                printf("%d é primo.\n",var\n);
            }

    }
}