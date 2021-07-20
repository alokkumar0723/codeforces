#include<iostream>
using namespace std;

int main()
{
    long long int a,d;
    cin>>a;
    if(a%2==0)
    {
        cout<<a/2;
    }
    else
    {
        d=-(a/2+1);
        cout<<d;
    }
}