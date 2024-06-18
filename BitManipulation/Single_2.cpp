#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[12]={1,1,2,5,3,2,3,9,4,7,4,9};
    int xr=0;
    for(int i=0;i<12;i++)
    {
        xr^=arr[i];
    }
    int count=0;
    while(xr)
    {
        if(xr&1)
        {
            break;
        }
        count++;
        xr=xr>>1;
    }
    int xr1=0;
    int xr2=0;
    for(int i=0;i<12;i++)
    {
        if(arr[i]&(1<<count))
        {
            xr1=xr1^arr[i];
        }
        else
        {
            xr2^=arr[i];
        }
    }
    cout<<xr1<<endl;
    cout<<xr2<<endl;

}