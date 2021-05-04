#include <stdio.h>
#include <math.h>
int n,k,cont,div=1,mod=1,sum,n1,n2,n3,n4,n5,n6,n7,n8,n9,n0;
int main(void){
    scanf("%d %d",&n,&k);
        for (cont=1;cont<=n;cont++){
            div=div*10;
            mod=mod*10;
        }
        div=div/10;
        for (cont=1;cont<=n;cont++){
            sum=(k%mod)/div;
            switch (sum){
                case 0:
                n0=n0+1;
                break;
                case 1:
                n1=n1+1;
                break;
                case 2:
                n2=n2+1;
                break;
                case 3:
                n3=n3+1;
                break;
                case 4:
                n4=n4+1;
                break;
                case 5:
                n5=n5+1;
                break;
                case 6:
                n6=n6+1;
                break;
                case 7:
                n7=n7+1;
                break;
                case 8:
                n8=n8+1;
                break;
                case 9:
                n9=n9+1;
                break;

            }
            mod=mod/10;
            div=div/10;
        }
        sum=0;
        if (n1>0){
            sum=sum+n1;
        }
        if(n2>0){
            sum=sum+2;
        }
        if(n3>0){
            sum=sum+3;
        }
        if(n4>0){
            sum=sum+4;
        }
        if(n5>0){
            sum=sum+5;
        }
        if(n6>0){
            sum=sum+6;
        }
        if(n7>0){
            sum=sum+7;
        }
        if(n8>0){
            sum=sum+8;
        }
        if(n9>0){
            sum=sum+9;
        }
    printf("%d",sum);
        
}