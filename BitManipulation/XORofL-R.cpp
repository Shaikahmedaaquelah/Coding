#include<bits/stdc++.h>
using namespace std;

int XOR(int n)
{
    if(n%4==0)
    {
        return n;
    }
    if(n%4==1)
    {
        return 1;
    }
    if(n%4==2)
    {
        return n+1;
    }
    if(n%4==3)
    {
        return 0;
    }
}

int main()
{
    int left,right;
    cin>>left>>right;
    int a=XOR(right);
    int b=XOR(left-1);
    int result=a^b;
    cout<<result;
}