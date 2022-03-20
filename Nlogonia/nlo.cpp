#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c,X,Y,x,y;
    while(cin>>c&&c!=0){
        cin>>X>>Y;
        for(int i=0;i<c;i++){
            cin>>x>>y;
            if(x==X||y==Y){cout<<"divisa\n";}
            else if (x>X){
                if(y>Y){cout<<"NE\n";}
                else{cout<<"SE\n";}
            }
            else{
                if(y>Y){cout<<"NO\n";}
                else{cout<<"SO\n";}
            }
        }
    }
    return 0;
}