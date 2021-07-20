#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    if(a>b)
    {
        cout<<b;
        c=a-b;
    }
    else if(b>a)
    {
        cout<<a;
        c=b-a;
    }
    else
    {
        cout<<a;
        c=0;
    }
    cout<< " " <<c/2<<endl;
    return 0;
}