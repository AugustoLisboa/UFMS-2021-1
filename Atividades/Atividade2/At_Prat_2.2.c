#include <stdio.h>
int hi,mi,si,hf,mf,sf,h,m,s,diai,diaf,dia;
int main(void){
    scanf("%d",&diai);
    scanf("%dh %dm %ds",&hi,&mi,&si);
    scanf("%d",&diaf);
    scanf("%dh %dm %ds",&hf,&mf,&sf); 
    if(hi==hf && mi==mf && si==sf){
        dia=diaf-diai;
        h=0;
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
            diaf=diaf-1;
        }
        if(hf>hi){
            h=hf-hi;
        }
        dia=diaf-diai;
    }
    printf("%d d %d h %d m %d s",dia,h,m,s);
}