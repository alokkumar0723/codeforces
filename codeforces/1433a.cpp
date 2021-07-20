//alokkumar0723
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long sum=0;
        long long count=0;
        int x=n%10;
        while(n>0){
            n=n/10;
            count++;
        }
        sum=(x-1)*10+(count*(count+1)/2);
        cout<<sum<<endl;
    }
    return 0;
}