#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double out;
    cin >> n;
    int a;
    double sum;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }
    out=sum/n;
    cout<<out;

    return 0;
}