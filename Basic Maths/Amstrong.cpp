/*Armstrong number is also known as a narcissistic number*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dup=n;
    int res=0;
    int k=(int)(log10(n)+1);
    while(n>0)
    {
        int a=n%10;
        n=n/10;
        res=res+pow(a,k);
    }
    if(dup==res)  cout<<"YES";
    else cout<<"NO";
}