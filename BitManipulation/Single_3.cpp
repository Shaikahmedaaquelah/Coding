//timecomplexity:o(n);
//Concepts of buckets
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7]={5,5,5,2,4,4,4};
    int ones=0;
    int twos=0;
    for(int i=0;i<7;i++)
    {
        ones=(ones^arr[i])&(~twos);
        twos=(twos^arr[i])&(~ones);
    }
    cout<<ones;
}




