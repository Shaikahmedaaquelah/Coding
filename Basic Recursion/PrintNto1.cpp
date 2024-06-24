#include<bits/stdc++.h>
using namespace std;

void func(int n,int count)
{
    if(count==0)
    {
        return;
    }
    cout<<count<<endl;
    count--;
    func(n,count);
}

int main()
{
    int n;
    cin>>n;
    func(1,n);
}