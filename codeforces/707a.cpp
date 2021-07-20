//alokkumar0723
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char c;
    for(int i=0;i<n*m;i++){
        cin>>c;
        if(c=='C' || c=='M' || c=='Y'){
            cout<< "#Color";
            return 0;
        }
    }
    cout<< "#Black&White";
}