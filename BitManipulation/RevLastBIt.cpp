#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    //After Reversing the Last Set Bit the result is:
    cout<<(a&(a-1));
}