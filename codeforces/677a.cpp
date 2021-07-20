#include<iostream>
using namespace std;

int main()
{
    int n,h,i,w=0,temp;
    cin>>n>>h;
    w=n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        if(temp>h)
        w++;
    }
    cout<<w;

    return 0;
}