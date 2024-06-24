#include<bits/stdc++.h>
using namespace std;


int func(int n,int count,int fact)
{
    if(count>n)
    {
        return fact;
    }
    fact=fact*count;
    count++;
    func(n,count,fact);
}

int main()
{
    int n;
    cin>>n;
    cout<<func(n,1,1);
}