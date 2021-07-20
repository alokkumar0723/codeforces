#include<iostream>
using namespace std;

int main()
{
    int k,n,w,r,cost=0;
    cin>>k>>n>>w;

    for(int i=1;i<=w;i++)
    {
        cost=cost+(i*k);
    }
    r=cost-n;
    if(r<0)
    cout<<0;
    else 
    cout<<r;

    return 0;

}