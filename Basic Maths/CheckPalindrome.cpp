#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dup=n;
    int rev=0;
    while(n)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(dup==rev)
    {
        cout<<true;
    }
    else{
        cout<<false;
    }
}