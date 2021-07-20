#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    int sum=0;
    int max=-9999;
    int min=9999;
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<3;i++)
    {
        if(arr[i]>max)
        {
        max=arr[i];
        }
    }
    for(int i=0;i<3;i++)
    {
        if(arr[i]<min)
        {
        min=arr[i];
        }
    }
    for(int i=0;i<3;i++)
    {
        sum=sum+arr[i];
    }
    int mid=sum-(max+min);
    int travel=(max-mid)+(mid-min);
    cout<<travel<<endl;
    return 0;  
}