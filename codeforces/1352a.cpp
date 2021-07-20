//alokkumar0723
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n;
    cin>> t;
    int arr[100000];
    while(t--){
        int rem=0;
        int d=0;
        cin>>n;
        if(n>=1000){
            rem=n%1000;
            arr[d++]=n-rem;
            n=n%1000;
        }
        if(n>=100){
            rem=n%100;
            arr[d++]=n-rem;
            n=n%100;
        }
        if(n>=10){
            rem=n%10;
            arr[d++]=n-rem;
            n=n%10;
        }
        if(n<10&&n>0){
            arr[d++]=n;
        }
        vector<int>va;
        for(int i=0;i<d;i++){
            va.push_back(arr[i]);
        }
        cout << va.size() <<endl;
        for(int i=0;i<va.size();i++){
            cout << va[i];
        }
        cout << endl;
    }
}