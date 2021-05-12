#include <stdio.h>
int leitor,checkprim,soma,pali,checkpali,val1,val2,inter,val;
int main(void){
    leitor=1;
    val=0;
    val1=0;
    val2=0;
    soma=0;
    if(leitor!=0){
        while (leitor!=0){
            val=0;
            scanf("%d",&leitor);
            inter=leitor;
            //soma digitos
            while(inter!=0){
                soma=soma+(inter%10);
                inter=inter/10;
            }
        
            //check de numero primo
            for (checkprim = 2; checkprim <= leitor/2; checkprim++){
                if(leitor%checkprim==0){
                    val=val+1;
                }
            }
            if(val>0){
                val1=0;
            }
            else{
                val1=1;
            }
            //check palindrome
            pali=leitor;
            checkpali=0;
            while(pali!=0){
                checkpali = (checkpali*10)+(pali%10);
                pali=pali/10;
            }
                if(checkpali==leitor){
                    val2=1;
                }
                else{
                    val2=0;
                }
            if(val1==1 && val2==1 && leitor!=0){
                printf("%d\n",leitor);
            }
            val1=0;
            val2=0;
        }
    }
    printf("%d",soma);
}