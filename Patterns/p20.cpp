#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int start=2;
    int s=2*(n-1);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<s;k++)
        {
            cout<<" ";
        }
        s=s-2;
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=2;j<n-i+1;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<start;k++)
        {
            cout<<" ";
        }
        start=start+2;
        for(int j=2;j<n-i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}