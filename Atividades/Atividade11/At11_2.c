#include <stdio.h>
int main(void){
    int matriz[16][16],n,val,posi,posj,i,j,m=1,middle=0;
    scanf(" %d",&n);
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1;j++){
            scanf(" %d",&matriz[i][j]);
        }
    }
    for(i=0;i<=(n-1)/2;i++){
        for(j=0+m;j<=(n-1)-m;j++){
            if(middle<matriz[i][j]){
                middle=matriz[i][j];
            }
        }
        m=m+1;
    }
    m=1;
    for(i=(n-1);i>=(n-1)/2;i--){
        for(j=n-1-m;j>=0+m;j--){
            if(middle<matriz[i][j]){
                middle=matriz[i][j];
            }
        }
        m=m+1;
    }
    printf("Maior elemento da área A: %d\n",middle);
    m=0;
    middle=0;
    for(i=0;i<=(n-1)/2;i++){
        for(j=0+m;j<=(n-1)-m;j++){
            middle=middle+matriz[j][i];
        }
        m=m+1;
    }
    m=0;
    for(i=(n-1);i>=(n-1)/2;i--){
        for(j=n-1-m;j>=0+m;j--){
            middle=middle+matriz[j][i];
        }
        m=m+1;
    }
    printf("Soma dos elementos da área B: %d\n",middle);
}