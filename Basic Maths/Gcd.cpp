/* Finding GCD of 2 numbers 
1.bruteforce             i.e normal loop                 TC:min(a,b)
2.better                 i.e reverse loop                TC:min(a,b)
3.Euclidean Algorithm    i.e gcd(a,b)=gcd(a%b,b) [a>b]   TC:logφ (min(a,b))   
LCM = (a*b)/gcd(a,b) */ 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int gcd=1;
    //bruteforce
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i==0 and b%i==0)
        {
            gcd=i;
        }
    }
    cout<<gcd<<endl;

    //Better
    for(int i=min(a,b);i>=1;i--)
    {
        if(a%i==0 and b%i==0)
        {
            cout<<i<<endl;
            break;
        }
    }

    //Euclidean Algorithm
    while(a>0 and b>0)
    {
        if(a>b)
        {
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0) cout<<b<<endl;
    else cout<<a<<endl;    
}