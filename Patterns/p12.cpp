#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int start=2*(n-1);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=1;j<=start;j++)
        {
            cout<<" ";
        }
        start=start-2;
        for(int k=i;k>=1;k--)
        {
            cout<<k;
        }
        cout<<endl;
    }

}