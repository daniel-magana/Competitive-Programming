#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    char l[2000];
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>l;
        if(strcmp(l,"1")==0||strcmp(l,"4")==0||strcmp(l,"78")==0)cout<<"+\n";
        else if(string(1,l[strlen(l)-1])=="5"&&string(1,l[strlen(l)-2])=="3")cout<<"-\n";
        else if(string(1,l[0])=="9"&&string(1,l[strlen(l)-1])=="4")cout<<"*\n";
        else cout<<"?\n";
        //else if(string(1,l[0])=="1"&&string(1,l[1])=="9"&&string(1,l[2])=="0")cout<<"?\n";
    }
    return 0;
}