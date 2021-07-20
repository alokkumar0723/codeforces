//alokkumar0723
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4);
    int z=arr[3]-arr[0];
    int y=arr[2]-z;
    int x=arr[3]-(y+z);

    cout<<x<<" "<<y<<" "<<z;
}