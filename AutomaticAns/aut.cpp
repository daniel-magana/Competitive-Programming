#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string num;
    int c;
    long int n;
    cin>>c;
    for(int i=0;i<c;i++){
        cin>>n;
        n=(((n*567)/9+7492)*235)/47-498;
        num=to_string(n);
        cout<<num[num.size()-2]<<"\n";
    }
    return 0;
}