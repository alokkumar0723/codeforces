#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    cin>>str;
    set<char>s;
    for(int i=0;i<str.length();i++)
    {
        s.insert(str[i]);
    }
    if((s.size())%2!=0)
    {
        cout<<"IGNORE HIM!"<<"\n";
    }
    else
    {
        cout<<"CHAT WITH HER!"<<"\n";
    }
}
