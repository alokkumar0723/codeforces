//alokkumar0723
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0,b=0,ch,mi;
    while(n--){
        cin>>mi>>ch;
        if(mi>ch){
            a++;
        }
        else if(ch>mi){
            b++;
        }
    }
    if(a>b){
            cout<<"Mishka"<<endl;
        }
        else if(b>a){
            cout<<"Chris"<<endl;
        }
        else{
            cout<<"Friendship is magic!^^"<<endl;
        }
        return 0;
}