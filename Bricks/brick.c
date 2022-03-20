#include <stdio.h>
 
int main(){
    int cases,i,j,T;
    scanf("%d",&cases);
    int muro[cases][9][9];
    for(T=0;T<cases;T++){
        for(i=0;i<9;(i+=2)){
            for(j=0;j<i+1;(j+=2)){
                scanf("%d",&muro[T][i][j]);
            }
        }
        for(i=8;i>0;i--){
            if(i%2!=1){
                for(j=1;j<i;(j+=2)){
                    muro[T][i][j]=(muro[T][i-2][j-1]-muro[T][i][j-1]-muro[T][i][j+1])/2;
                }
            }
            else{
                for(j=0;j<=i;j++){
                    muro[T][i][j]=muro[T][i+1][j]+muro[T][i+1][j+1];
                }
            }
        }
    }
    for(T=0;T<cases;T++){
        for(i=0;i<9;i++){
            for(j=0;j<=i;j++){
                if(j==i){
                    printf("%d\n",muro[T][i][j]);
                }
                else{
                    printf("%d ",muro[T][i][j]);
                }
            }
        }
    }
    return 0;
}