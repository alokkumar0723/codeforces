#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        long long int a,b;
        cin>>a>>b;
        if(a%b==0)
        cout<<"0"<<endl;
        else
        cout<<b-(a%b)<<endl;
    }
}