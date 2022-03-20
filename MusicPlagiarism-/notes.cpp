#include<bits/stdc++.h>
using namespace std;

char nota[]={"CDEFGAB"};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M,T=1,i,j,cond,ind,c;
    while(cin>>M>>T){
        if(M==0&&T==0){
            break;
        }
        char oc[M][3];
        for (i = 0; i < M; i++)
        {
            cin>>oc[i];
        }
        char fk[T][3];
        for (i = 0; i < T; i++)
        {
            cin>>fk[i];
        }
        int o[M-1];
        for(i=0;i<M-1;i++){
            o[i]=-1;
            for(j=0;j<7;j++){
                if(o[i]>=0){
                    if(nota[j]=='F'||nota[j]=='C')o[i]++;
                    else o[i]+=2;
                    if(j==6&&nota[j]!=oc[i+1][0]){
                        j=0;
                    }
                    if(nota[j]==oc[i+1][0]){
                        j=7;}
                }
                else if(oc[i][0]==nota[j]){
                    o[i]=0;
                    if(oc[i+1][0]==nota[j])j=7;
                    }
            } 
            if(oc[i][1]=='b'){o[i]++;}
            if(oc[i+1][1]=='b'){o[i]--;}
            if(oc[i][1]=='#'){o[i]--;}
            if(oc[i+1][1]=='#'){o[i]++;}
            if(o[i]<0){o[i]=12+o[i];}
        }
        int f[T-1];
        for(i=0;i<T-1;i++){
            f[i]=-1;
            for(j=0;j<7;j++){
                if(f[i]>=0){
                    if(nota[j]=='F'||nota[j]=='C')f[i]++;
                    else f[i]+=2;
                    if(j==6&&nota[j]!=fk[i+1][0])j=0;
                    if(nota[j]==fk[i+1][0]){
                        j=7;
                    }
                }
                else if(fk[i][0]==nota[j]){
                    f[i]=0;
                    if(fk[i+1][0]==nota[j])j=7;
                }
            }
            if(fk[i][1]=='b')f[i]++;
            if(fk[i+1][1]=='b')f[i]--;
            if(fk[i][1]=='#')f[i]--;
            if(fk[i+1][1]=='#')f[i]++;
            if(f[i]<0)f[i]=12+f[i];
        }
        c=0;
        for(i=0;i<M-1;i++){
            cond=0;
            if(f[0]==o[i]){
                for(j=0;j<T-1;j++){
                    if(f[j]==o[i+j]){
                        cond++;
                    }
                }  
                if(cond==T-1){
                    c=1;
                }     
            }
        }
        if(c)cout<<"S\n";
        else cout<<"N\n";
    }
    return 0;
}