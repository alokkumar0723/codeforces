#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=a;i++)
    {
        if(i%2==1)
        {
            for(int j=0;j<b;j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else if(i%2==0 && i%4!=0)
        {
            for(int j=0;j<b-1;j++)
            {
                cout<<".";
            }
            cout<<"#";
            cout<<endl;
        }
        else if(i%2==0 && i%4==0)
        {
            cout<<"#";
            for(int j=0;j<b-1;j++)
            {
                cout<<".";
            }
            cout<<endl;
        }
    }
    return 0;
}

   