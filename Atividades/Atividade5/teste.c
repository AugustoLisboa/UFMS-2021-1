#include <stdio.h>
int pali,checkpali,val1,val2,leitor;
int main(void){
    scanf("%d",&leitor);
pali=leitor;
checkpali=0;
while(pali!=0){
            checkpali = (checkpali*10)+(pali%10);
            pali=pali/10;

            if(checkpali!=leitor){
            val2=0;
            }
            else{
                val2=1;
            }

    }
    printf("%d",val2);  
}  
