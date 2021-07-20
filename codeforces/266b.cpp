#include<iostream>
using namespace std;

int main()
{
    int k,n,t;
    cin>>n>>t;
    char s[n];
    cin>>s;
    for(int i=0 ;i<t;i++)
    {
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                s[j]='G';
                s[j+1]='B';
                j++;
            }
        }
    }
    cout<<s;

    return 0;
}