#include <stdio.h>
float n1,n2,res;
char op;
int main(void){
    scanf("%f %f %c",&n1,&n2,&op);
    switch (op){
        case '-':
            res=n1-n2;
            printf("%.2f",res);
        break;
        case '+':
            res=n1+n2;
            printf("%.2f",res);
        break;
        case '*':
            res=n1*n2;
        break;
        case '/':
            if(n2==0){
                printf("Erro: tentativa de divisão por zero.");
            }
            else{
                res=n1/n2;
                printf("%.2f",res);
            }
        break;
        default:
        printf("Erro: operação inválida.");
        break;
    }
}