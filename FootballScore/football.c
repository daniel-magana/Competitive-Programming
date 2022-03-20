#include <stdio.h>

int main(){
    int T,i,sum,ab,temp;
    scanf("%d",&T);
    int cases[T][2];
    for(i=0;i<T;i++){
        scanf("%d %d",&sum,&ab);
        if(ab>sum||(sum-ab)%2!=0){
            cases[i][0]=-1;
        }
        else if(ab==sum){
            cases[i][0]=sum;
            cases[i][1]=0;
        }
        else{
            temp=(sum-ab)/2;
            cases[i][0]=ab+temp;
            cases[i][1]=temp;
        }
    }
    for(i=0;i<T;i++){
        if(cases[i][0]==-1){
            printf("impossible\n");
        }
        else{
            printf("%d %d\n",cases[i][0],cases[i][1]);
        }
    }
    return 0;
}