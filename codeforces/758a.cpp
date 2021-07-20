//alokkumar0723
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<(arr[n-1]*n-sum);
    return 0;
}