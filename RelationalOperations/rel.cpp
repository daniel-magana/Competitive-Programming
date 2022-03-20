#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin>>c;
    long int n,m;
    for(int i=0;i<c;i++){
        cin>>n>>m;
        if(n==m){cout<<"="<<"\n";}
        else if(n>m){cout<<">"<<"\n";}
        else{cout<<"<"<<"\n";}
    }
    return 0;
}