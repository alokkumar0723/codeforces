#include<iostream>
using namespace std;

int main()
{
    int n,d=0,a=0;
    cin>>n;
    char s[n];
    cin>>s;
    for(int i=0; s[i]!='\0';i++)
    {
        if(s[i]=='A')
        a++;
        else
        d++;
    }
    if(a>d)
    cout<<"Anton";
    else if (d>a)
    cout<<"Danik";
    else
    cout<<"Friendship";

    return 0;
}