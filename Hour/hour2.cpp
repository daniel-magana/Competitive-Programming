#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int in,b;
    while(cin >> in){
        b=0;
        if(in%6==0){
            b=1;
        }
        if(b){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }
    return 0;
}