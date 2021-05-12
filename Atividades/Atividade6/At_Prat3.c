#include <stdio.h>
float x,n,contador,expo,fat,soma,ver,teste;
int main(void){
    do{
        ver=99999999999999999;//achar uma solução melhor pra isso
        contador=1;
        expo=1;
        fat=1;
        soma=1;
        scanf("%f %f",&x,&n);
        while (ver>n){
            expo=expo*x;
            fat=fat*contador;
            ver=expo/fat;
            soma=soma+ver;
            contador=contador+1;
        }
        soma=soma-ver;
        printf("%f\n",soma);
    }while(x!=-999);
}