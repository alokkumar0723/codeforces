//alokkumar0723
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count=0;
    cin>>n;
    int arr[1000];
    cin>>arr[0];
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
            count=count+1;
        }
        if(arr[i]<min){
            min=arr[i];
            count=count+1;
        }
    }
    cout<<count<<endl;
    return 0;
}