#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char word[101];
    cin>>word;
    for(int i=0;i<n;i++)
    {
        word[i]=tolower(word[i]);
    }
    sort(word,word+n);
    int count=0;

    for(int i=0;i<n;i++)
    {
        if(word[i]!=word[i+1])
        {
            count++;
        }
    }
if(count==26)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

return 0;
}