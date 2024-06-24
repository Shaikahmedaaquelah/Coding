#include<bits/stdc++.h>
using namespace std;


void func(int n,int count)
{
    if(count==n)
    {
        return;
    }
    cout<<"Aaquelah"<<endl;
    count++;
    func(n,count);
}

int main()
{
    int n;
    cin>>n;
    func(n,0);
}