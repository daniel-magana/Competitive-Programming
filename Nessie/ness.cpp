#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin>>c;
    int n,m,t1,t2;
    for(int i=0;i<c;i++){
        cin>>n>>m;
        n-=2;
        m-=2;
        if(n%3!=0){t1=(n/3)+1;}
        else{t1=n/3;}
        if(m%3!=0){t2=(m/3)+1;}
        else{t2=m/3;}
        cout<<t1*t2<<"\n";
    }
    return 0;
}