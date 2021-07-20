#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int guy=0;
    cin>>n;
    int p[100];
    int q[100];
    for(int i=0;i<4;i++)
    {
        cin >> p[i];
    }
    for(int i=0;i<3;i++)
    {
        cin >> q[i];
    }
    for(int i=0;i<4;i++)
    {
        if(p[i]==n)
        {
            guy=guy+1;
        }
    }
    for(int i=0; i<3;i++)
    {
        if(q[i]==n)
        {
            guy=guy+1;
        }
    }
    if(guy>0)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
}