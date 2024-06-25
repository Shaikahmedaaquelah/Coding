#include<bits/stdc++.h>
using namespace std;
int hashh[1000000];
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        hashh[a[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        cout<<hashh[number]<<endl;
    }
}