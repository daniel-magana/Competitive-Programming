#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,T,emo,cas=1;
    while(cin>>T&&T!=0){
        emo=0;
        for(int i=0;i<T;i++){
            cin>>n;
            if(n!=0)emo++;
            else {emo--;}
        }
        cout<<"Case "<<cas<<": "<<emo<<"\n";
        cas++;
    } 
    return 0;
}