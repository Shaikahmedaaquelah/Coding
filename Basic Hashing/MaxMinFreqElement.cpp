// TC: O(N+N);

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    int max=0,min=9;
    int ele1=0,ele2=0;
    for(auto it:mp)
    {
        if(it.second>max)
        {
            max=it.second;
            ele1=it.first;
        }
        if(it.second<max)
        {
            min=it.second;
            ele2=it.first;
        }
    }
    cout<<ele1<<" "<<ele2<<endl;
}