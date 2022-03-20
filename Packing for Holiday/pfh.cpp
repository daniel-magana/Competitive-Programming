#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    int l,w,h,caso;
    cin>>T;
    caso=1;
    for(int i=0;i<T;i++){
        cin>>l>>w>>h;
        cout<<"Case "<<caso<<": ";
        if(l>20||w>20||h>20)cout<<"bad\n";
        else{cout<<"good\n";}
        caso++;
    }
    return 0;
}