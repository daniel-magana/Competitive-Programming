#include<bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char x[10010];
    int l,i;
    double D=1,M=1,C=1;
    int A,B,Ce,menor,mayor,a,b,ce,cifras,n,cont,lal;

    while (cin>>x)
    {
        D=1;M=1;C=1;
        A=1;B=1;Ce=1;
        l=strlen(x);
        for(i=0;i<l;i++){
            if(x[i]=='D'){
                D*=(4.0/3);
                if(int(D)/10>0){
                    A++;
                    D/=10;
                }
            }
            if(x[i]=='M'){
                M*=(4.0/3);
                if(int(M)/10>0){
                    B++;
                    M/=10;
                }
            }
            if(x[i]=='C'){
                C*=(4.0/3);
                if(int(C)/10>0){
                    Ce++;
                    C/=10;
                }
            }
        }
        if(A<B){
            mayor=B;
        }
        else{
            mayor=A;
        }
        if(Ce>mayor){
            mayor=Ce;
        }
        cifras=mayor;

        if(A<B){
            menor=A;
        }
        else{
            menor=B;
        }
        if(Ce<menor){
            menor=Ce;
        }

        if((mayor-A)>=7){
            a=0;
        }
        else{a=D*pow(10,A-(menor));}

        if((mayor-B)>=7){
            b=0;
        }
        else{b=M*pow(10,B-(menor));}

        if((mayor-Ce)>=7){
            ce=0;
        }
        else{ce=C*pow(10,Ce-(menor));}

        lal=mayor-(menor-1);

        n=a+b+ce;
        cont=1;
        while(n/10>0){
            n/=10;
            cont++;
        }
        if(cont>lal){
            cifras=mayor+1;
        }
        else{
            cifras=mayor;
        }
        
        cout<<A<<" "<<B<<" "<<Ce<<" "<<cifras<<'\n';
    }
        
    return 0;
}