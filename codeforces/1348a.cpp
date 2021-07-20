//alokkumar
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int sum1=0,sum2=0;
        for(int i=1;i<(n/2);i++)
        {
            sum1=sum1+pow(2,i);
        }
        sum1=sum1+pow(2,n);
        for(int i=(n/2);i<n;i++){
            sum2=sum2+pow(2,i);
        }
        cout<<abs(sum1-sum2)<<endl;
    }
    return 0;
}