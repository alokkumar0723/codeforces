#include<iostream>
using namespace std;

int main()
{
    int n,x=0;
    char s[4];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s[1]=='+')
        x++;
        else
        x--;
    }
    cout<<x;
    return 0;
}