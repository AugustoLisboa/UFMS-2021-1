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
    if(hi!=hf || mi!=mf || si != sf){
        if(si>sf){
            s=(sf+60)-si;
            mf=mf-1;
        }
        if(sf>si){
            s=sf-si;
        }
        if(mi>mf){
            m=(mf+60)-mi;
            hf=hf-1;
        }
        if(mf>mi){
            m=mf-mi;
        }
        if(hi>hf){
            h=(hf+24)-hi;
        }
        if(hf>hi){
            h=hf-hi;
        }
    }
      printf("%dh%dm%ds",h,m,s);
}