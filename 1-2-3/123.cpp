#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    char n[7];
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>n;
        if(strlen(n)==5)cout<<"3\n";
        else if((n[0]=='o'&&n[1]=='n')||(n[0]=='o'&&n[2]=='e')||(n[2]=='e'&&n[1]=='n'))cout<<"1\n";
        else{cout<<"2\n";}
    }
    return 0;
}