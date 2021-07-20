//alokkumar0723
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans=(abs(a-b)+9)/10;
        cout<<ans<<endl;
    }
    return 0;
}