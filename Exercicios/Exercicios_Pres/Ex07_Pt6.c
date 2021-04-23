#include <stdio.h>
int main(void){
    float n1,n2,n3,n4,med,ex;
    scanf("%2f %2f %2f %2f",&n1,&n2,&n3,&n4);
    med=((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    if(med>=7){
        printf("Média: %f\nO aluno foi aprovado.",med);

    }
    else{
        printf("Média: %f\nO aluno deve fazer o exame.",med);
        scanf("%f",&ex);
        med=(med+ex)/2;
        if(med>=7){
            printf("O aluno foi aprovado com média final %f.",med);
        }
        else{
            printf("O aluno foi reprovado com média final %f.",med);
        }

    }
}