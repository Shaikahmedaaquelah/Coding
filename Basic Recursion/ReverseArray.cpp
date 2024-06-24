//  TC:O(n)  SC:O(1)

#include<bits/stdc++.h>
using namespace std;


void func(int a[],int start,int end)
{
    if(start<end)
    {
        swap(a[start],a[end]);
        func(a,start+1,end-1);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    func(a,0,n-1);
    cout<<"After Array reversing"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}