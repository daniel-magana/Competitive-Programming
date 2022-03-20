#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char o[500];
    char n[500];
    int b=0,indice=0;
    while(cin.getline(o,500)){
        indice=0;
        for(int i=0;i<(int)strlen(o);i++,indice++){
            if(o[i]=='"'){
                if(b==0){
                    b=1;
                    n[indice]='`';
                    indice++;
                    n[indice]='`';
                }
                else{
                    b=0;
                    n[indice]='\'';
                    indice++;
                    n[indice]='\'';
                }
            }
            else{
                n[indice]=o[i];
            }
        }
        for(int i=0;i<indice;i++){
            cout<<n[i];
        }
        cout<<"\n";
    }
    return 0;
}