#include <stdio.h>
int hi,mi,si,hf,mf,sf,h,m,s;
int main(void){
    scanf("%ih %im %is",&hi,&mi,&si);
    scanf("%ih %im %is",&hf,&mf,&sf); 
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
    printf("%dh%dm%ds",h,m,s);
}