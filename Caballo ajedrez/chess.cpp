#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char ca,cb;
    int ia,ib,a,b,dis,idis,moves;

    while(cin >>ca>>ia>>cb>>ib){
        a=(int)ca-96;
        b=(int)cb-96;
        dis=abs(a-b);
        idis=abs(ia-ib);
        if(dis==0&&idis==0)moves=0;
        else if(dis==7&&idis==7)moves=6;
        else if((dis==1&&idis==2)||(dis==2&&idis==1))moves=1;
        else if(((dis<7&&idis<7) && (dis+idis)!=11) && ((dis%2==1&&idis%2==0) || (dis%2==0&&idis%2==1)))moves=3;
        else if((dis%2==1&&idis%2==0) || (dis%2==0&&idis%2==1))moves=5;
        else if(((dis<5&&idis<5) && (dis+idis)!=8) && ((dis%2==0&&idis%2==0) || (dis%2==1&&idis%2==1))){
            if((dis==1&&idis==1) || (dis==2&&idis==2)){
                if(dis==1&&idis==1){
                    if(((a==1&&ia==1)||(a==8&&ia==1)||(a==1&&ia==8)||(a==8&&ia==8))||((b==1&&ib==1)||(b==8&&ib==1)||(b==1&&ib==8)||(b==8&&ib==8)))moves=4;
                    else moves=2;
                }
                else moves=4;
            }
            else moves=2;
        }
        else moves=4;

        cout<<"To get from "<<ca<<ia<<" to "<<cb<<ib<<" takes "<<moves<<" knight moves."<<"\n";
    }
    return 0;
}