#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k;
	cin>>n>>k;
	ll arr[n+1];
	for(int i=1;i<=n;i++)
	{   
		cin>>arr[i];
	}
	ll count=0;
	ll benchmark=arr[k];
	for(int i=1;i<=n;i++)
	{
		if(arr[i]>=arr[k] and arr[i]>0)
		{
			count++;
		}
	}
	cout<<count<<"\n";
	
}