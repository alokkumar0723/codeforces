#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    int count=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            int sub=0;
            sub=arr[i+1]-arr[i];
            if(sub>1){
                count=count+1;
            }
            else
            {
                count=count+0;
            }
        }
        if(count>0){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
        count=0;
        cout<<endl;
        cout<<endl;
        cout<<endl;
    }
    return 0;
}