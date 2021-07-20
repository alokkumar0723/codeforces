#include<iostream>
using namespace std;

int main()
{
    int n,k,count=0,c_minute=0;
    int all_minute=60*4;
    cin>>n;
    cin>>k;
    int minute=all_minute-k;
    for(int i=1;i<=n;i++)
    {
        c_minute=c_minute+i*5;
        if(c_minute<=minute)
        {
            count=count+1;
        }
    }
    cout<<count<<endl;
    return 0;
}