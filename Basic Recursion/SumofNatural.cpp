#include<bits/stdc++.h>
using namespace std;


int func(int n,int count,int sum)
{
    if(count>n)
    {
        return sum;
    }
    sum=sum+count;
    count++;
    func(n,count,sum);
}

int main()
{
    int n;
    cin>>n;
    cout<<func(n,1,0);
}