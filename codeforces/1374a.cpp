//alokkumar0723
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[3];
    for(int i=0;i<t;i++){
        
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
    int max=0;
    for(int i=0;i<3;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int k=0;
    for(int i=0;i<=max;i++){
        if(i<=arr[2] && i%arr[0]==arr[1]){
        k=i;
        }
    }
    cout<<k<<endl;
    }
    return 0;
}