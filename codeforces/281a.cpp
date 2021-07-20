#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    s[0]=towupper(s[0]);
    cout<<s<<endl;
    return 0;
}

/*
#include<iostream>
using namespace std;

int main()
{
    char s[100]
    cin>>s;
    if(s[0]>=97 && s[0]<=122)
    s[0]=s[0]-32;
    cout<<s;

    return0;
}
*/