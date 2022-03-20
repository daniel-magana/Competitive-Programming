#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T,k,tot;
    char n[8];
    cin>>T;
    tot=0;
    for(int i=0;i<T;i++){
        cin>>n;
        if(strcmp(n,"report")==0){
            cout<<tot<<"\n";
        }
        else{
            cin>>k;
            tot+=k;
        }
    }
    return 0;
}