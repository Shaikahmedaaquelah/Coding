/* Brute Force Approach   TC:O(n)
   Optimal Approach       TC:O(sqrt(n))
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count++;
            if(i!=n/i)
            {
                count++;
            }
        }
    }
    if(count==2)  cout<<"Prime";
    else    cout<<"Not Prime";
}