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
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        cout<<mp[number]<<endl;
    }
}