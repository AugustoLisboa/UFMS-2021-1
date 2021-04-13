#include <stdio.h>
char op;
float x1,x2,resultado;
float main (void){
scanf(" %f %f %c",&x1,&x2,&op);
if(op=='+'){
    resultado=x1+x2;
}
else if(op=='-'){
    resultado=x1-x2;
}
else if(op=='*'){
    resultado=x1*x2;
}
else{
    if(x2<=0){
        printf("Operação Inválida.");
    }
    else{
        resultado=x1/x2;
    }
}
printf("%f",resultado);
}