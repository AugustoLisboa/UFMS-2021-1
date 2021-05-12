#include <stdio.h>
int n,soma;
int main(void){
    soma=0;
    scanf("%d",&n);
    while (n!=0){
        soma=soma+n;
        n=n-1;
    }
    printf("%d",soma);
}