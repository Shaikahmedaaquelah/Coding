/* Brute Force Approach   TC:O(n)
   Optimal Approach       TC:O(sqrt(n))
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //Brute force Approach
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    //Optimal Approcah
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            if (i!=n/i) 
            {
                cout<<n/i<<" ";
            }
        }
        
    }
}