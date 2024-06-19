#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a='A'+n-1;
    char ch=a;
    for(int i=0;i<n;i++)
    {
        for(char j=ch-i;j<=a;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}