#include <stdio.h>
int main(void){
int var1,var2,var,prova;
    while(prova!=-1){
            scanf("%d %d",&var1,&var2);  
            prova=var1;
        if(prova!=-1){
            //conversão de var1 para decimal
            int pot8=1,var1dec=0;
            while(var1!=0){
                var1dec=var1dec+(var1%10)*pot8;
                pot8=pot8*8;
                var1=var1/10;
            }
            printf("%d ",var1dec);

            //conversão da segunda entrada (var2) para decimal
            int var2dec=0;
            pot8=1;
            while(var2!=0){
                var2dec=var2dec+(var2%10)*pot8;
                pot8=pot8*8;
                var2=var2/10;
            }
            pot8=1;
            printf("%d ",var2dec);

            //conversão da primeira entrada (var1dec) para binario
            int var1bin=0,inter1=0,pot10=1;
            while(var1dec!=0){
                inter1=var1dec%2;
                var1dec=var1dec/2;
                var1bin=var1bin+inter1*pot10;
                pot10=pot10*10;
            }
            printf("%d ",var1bin);

            //conversão da segunda entrada(var2dec) para binario
            int var2bin=0,inter2=0;
            pot10=1;
            while(var2dec!=0){
                inter2=var2dec%2;
                var2dec=var2dec/2;
                var2bin=var2bin+inter2*pot10;
                pot10=pot10*10;
            }
            pot10=1;
            printf("%d ",var2bin);

            //aplicando OU lógico nos 2 binarios
            int oubin=1,num=1,meio;
            inter1=0;
            inter2=0;
            if(var1bin>var2bin){
                while(var1bin>0){
                    inter1=var1bin%10;
                    var1bin=var1bin/10;
                    inter2=var2bin%10;
                    var2bin=var2bin/10;
                    if(inter2+inter1==0){
                        num=num*10;
                    }
                    else{
                        num=num*10+1;
                    }
                    pot10=pot10*10;
                }
                num=num/10;
                while(num!=0){
                    meio=num%10;
                    oubin=oubin*10+meio;
                    num=num/10;
                }
                oubin=oubin/10;
                printf("%d ",oubin);
                
            }
            else{
                while(var2bin>0){
                    inter1=var1bin%10;
                    var1bin=var1bin/10;
                    inter2=var2bin%10;
                    var2bin=var2bin/10;
                    if(inter2+inter1==0){
                        num=num*10;
                    }
                    else{
                        num=num*10+1;
                    }
                    pot10=pot10*10;
                }
                num=num/10;
                while(num!=0){
                    meio=num%10;
                    oubin=oubin*10+meio;
                    num=num/10;
                }
                oubin=oubin/10;
                printf("%d ",oubin); 
            }

            //conversão de oubin para decimal
            int pot2=1,inter=0,varbin=0;
            while(oubin!=0){
                inter=oubin%10;
                oubin=oubin/10;
                varbin=varbin+inter*pot2;
                pot2=pot2*2;
            }
            printf("%d ",varbin);
            pot2=1;

            //conversão de varbin para octal
            int varoc=0;
            pot10=1;
            if(varbin<=8){
                varoc=varbin;
            }
            else{
                while(varbin!=0){
                    varoc=varoc+(varbin%8)*pot10;
                    varbin=varbin/8;
                    pot10=pot10*10;
                }
            }
            printf("%d\n",varoc);
        }
    }
}