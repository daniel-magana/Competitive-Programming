#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int meses=1,inte,m;
    double pago,deu,aut,in;
    while(cin>>meses>>pago>>deu>>inte){
        if(meses>0){
            cin>>m>>in;
            inte--;
            aut=deu+pago;
            aut=aut-aut*in;
            cin>>m>>in;
            inte--;
            for(int j=1;j<meses;j++){
                if(aut>deu){
                    j=meses;
                    if(j==2){cout<<"1 month\n";}
                    else{cout<<j-1<<" months\n";}
                }
                if(inte>0&&j==m){
                    cin>>m>>in;
                }
                aut=aut-aut*in;
                deu=deu-pago;
            }
            for(int i=inte;i>0;i--){cin>>m>>in;}
            
        }
    }
    return 0;
}