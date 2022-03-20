#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int caso=1;
    char c[7];
    while(cin>>c&&strcmp(c,"*")!=0){
        cout<<"Case "<<caso<<": ";
        if(strcmp(c,"Hajj")==0)cout<<"Hajj-e-Akbar\n";
        else{cout<<"Hajj-e-Asghar\n";}
        caso++;
    }
    return 0;
}