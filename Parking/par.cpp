#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin>>c;
    int min,max,n,num;
    for(int i=0;i<c;i++){
        min=100;
        max=0;
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>num;
            if(num<min){min=num;}
            if(num>max){max=num;}
        }
        cout<<(max-min)*2<<"\n";
    }
    return 0;
}