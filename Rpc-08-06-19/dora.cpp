#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long tot,c;
    long long x,y;
    while (cin>>x>>y && (x!=0&&y!=0))
    {
        c=x+y-1;
        tot=c*(c-1)/2;
        if(c%2==0){
            tot+=x;
        }
        else{
            tot+=y;
        }
        cout<<tot<<'\n';
    }
        
    return 0;
}