#include <stdio.h>
int main (void){
    int hi,hf,mi,mf,si,sf,h,m,s;
    while (hi!=-1 && mi!=-1 && si!=-1){
        scanf(" %dh%dm%ds",&hi,&mi,&si);
        if(hi==-1){
            printf("1h1m1s");
            break;
        }
        scanf(" %dh%dm%ds",&hf,&mf,&sf);
        
        if(hi==hf && mi==mf && si==sf){
            h=24;
            m=0;
            s=0;
        }
        else{
            if(si>sf){
                s=(sf+60)-si;
                mf=mf-1;
            }
            else{
                s=sf-si;
            }
            if(mi>mf){
                m=(mf+60)-mi;
                hf=hf-1;
            }
            else{
                m=mf-mi;
            }
            if(hi>hf){
                h=(hf+24)-hi;
            }
            else{
                h=hf-hi;
            }
        }
        printf("%dh%dm%ds\n",h,m,s);
    }

}