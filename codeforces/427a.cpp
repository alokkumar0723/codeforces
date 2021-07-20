//alokkumar0723
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int police=0;
    int crime=0;
    int n,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(n>0)
        {
            police+=n;
        }
        else if(n<0)
        {
            if(police>0)
        {
            police-=1;
        }
        else
        {
            crime+=1;
        }
        }
    }
    cout<<crime<<endl;
    return 0;
}