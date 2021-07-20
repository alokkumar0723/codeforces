//alokkumar0723
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        int j=1;
        cout<<s[0];
        int l=s.length();
        while(j<l)
        {
            cout<<s[j];
            j=j+2;
        }
        cout<<endl;
    }
    return 0;
}