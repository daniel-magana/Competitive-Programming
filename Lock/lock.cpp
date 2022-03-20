#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tot;
    int in,a,b,c;
    while((cin>>in>>a>>b>>c)&&!(a==0&&b==0&&c==0)){
        tot=120;
        if(in<a){
            tot+=40+in-a;
        }
        else{
            tot+=in-a;
        }

        if(b<a){
            tot+=40+b-a;
        }
        else{
            tot+=b-a;
        }

        if(b<c){
            tot+=40+b-c;
        }
        else{
            tot+=b-c;
        }
        cout<<(tot*9)<<"\n";
    }
    return 0;
}