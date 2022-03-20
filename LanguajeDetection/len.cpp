#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c[100];
    int cont=1;
    while(cin>>c&&(strcmp(c,"#"))){
        if(!strcmp(c,"HALLO")){cout<<"Case "<<cont<<": GERMAN\n";}
        else if(!strcmp(c,"HELLO")){cout<<"Case "<<cont<<": ENGLISH\n";}
        else if(!strcmp(c,"HOLA")){cout<<"Case "<<cont<<": SPANISH\n";}
        else if(!strcmp(c,"BONJOUR")){cout<<"Case "<<cont<<": FRENCH\n";}
        else if(!strcmp(c,"CIAO")){cout<<"Case "<<cont<<": ITALIAN\n";}
        else if(!strcmp(c,"ZDRAVSTVUJTE")){cout<<"Case "<<cont<<": RUSSIAN\n";}
        else {cout<<"Case "<<cont<<": UNKNOWN\n";}
        cont++;
    }    
    return 0;
}