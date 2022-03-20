#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,k,c,d;
    cin>>n>>k;
    cin>>c;
    int a[c];
    for(int i=0;i<c;i++){
        cin>>a[i];
    }
    cin>>d;
    int b[d];
    for(int i=0;i<d;i++){
        cin>>b[i];
    }
    long long auxsum[c+d];
    long long auxmult[c+d];
    long long rota[c];
    long long menora=n;
    long long menorb=n;
    long long rotb[d];
    int sum=0,mult=0,s=0,m=0;
    for(int i=0,j=0;i+j<c+d;){
        if(abs(b[j])==abs(a[i])){
            sum++;
            mult++;
            if(((b[j]+a[i])/2)!=0){
                auxsum[s]=(b[j]+a[i])/2;
                s++;
            }

            rota[i]=(abs(a[i])-k);
            if(rota[i]<=0){
                rota[i]=(n-abs(rota[i]))*(abs(a[i])/a[i]);
            }
            else{rota[i]*=(abs(a[i])/a[i]);}
            


            rotb[j]=(abs(b[j])-k);
            if(rotb[j]<=0){
                rotb[j]=(n-abs(rotb[j]))*(abs(b[j])/b[j]);
            }
            else{rotb[j]*=(abs(b[j])/b[j]);}

            auxmult[m]=(abs(b[j])/b[j])*(abs(a[i])/a[i])*abs(a[i]);
            m++;
            i++;
            j++;
        }
        else{
            if(i<c&&j<d){
                if(abs(a[i])<abs(b[j])){
                    auxsum[s]=a[i];
                    rota[i]=(abs(a[i])-k);
                    if(rota[i]<=0){
                        rota[i]=(n-abs(rota[i]))*(abs(a[i])/a[i]);
                    }
                    else{rota[i]*=(abs(a[i])/a[i]);}
                    s++;
                    i++;
                }
                else{
                    auxsum[s]=b[j];
                    rotb[j]=(abs(b[j])-k);
                    if(rotb[j]<=0){
                        rotb[j]=(n-abs(rotb[j]))*(abs(b[j])/b[j]);
                    }
                    else{rotb[j]*=(abs(b[j])/b[j]);}
                    s++;
                    j++;
                }
            }
            else if(i<c){
                auxsum[s]=a[i];
                rota[i]=(abs(a[i])-k);
                if(rota[i]<=0){
                    rota[i]=(n-abs(rota[i]))*(abs(a[i])/a[i]);
                }
                else{rota[i]*=(abs(a[i])/a[i]);}
                s++;
                i++;
            }
            else{
                auxsum[s]=b[j];
                rotb[j]=(abs(b[j])-k);
                if(rotb[j]<=0){
                    rotb[j]=(n-abs(rotb[j]))*(abs(b[j])/b[j]);
                }
                else{rotb[j]*=(abs(b[j])/b[j]);}
                s++;
                j++;
            }
        }
    }


    cout<<s<<" ";
    for(int i=0;i<s;i++){
        if(i==s-1){
            cout<<auxsum[i]<<"\n";
        }
        else{
            cout<<auxsum[i]<<" ";
        }
    }
    cout<<m<<" ";
    for(int i=0;i<m;i++){
        if(i==m-1){
            cout<<auxmult[i]<<"\n";
        }
        else{
            cout<<auxmult[i]<<" ";
        }
    }
    cout<<c<<" ";
    menora=abs(rota[0]);
    int x=0;
    int z=0;
    for(int i=0,j=0;j<c;i++){
        if(abs(rota[i])<menora){
            cout<<rota[i]<<" ";
            j++;
        }
        if(i==c-1)x=1;
        if(x==1){
            i=0;
            x=0;
            z=1;
        }
        if(z==1){
            if(j==c-1){cout<<rota[i]<<"\n";}
            else{cout<<rota[i]<<" ";}
            j++;
        }
    }
    cout<<d<<" ";
    menorb=abs(rotb[0]);
    x=0;
    z=0;
    for(int i=0,j=0;j<d;i++){
        if(abs(rotb[i])<menorb){
            cout<<rotb[i]<<" ";
            j++;
        }
        if(i==d-1)x=1;
        if(x==1){
            i=0;
            x=0;
            z=1;
        }
        if(z==1){
            if(j==d-1){cout<<rotb[i]<<"\n";}
            else{cout<<rotb[i]<<" ";}
            j++;
        }
    }
    
    return 0;
}