//  TC:O(n)  SC:O(1)

#include<bits/stdc++.h>
using namespace std;


bool func(string str,int start,int end)
{
    if(start>=end)
    {
        return true;
    }
    if(str[start]!=str[end])
    {
        return false;
    }
    return func(str,start+1,end-1);
}

int main()
{
    string str = "ACBBA";
    int n=str.length();
    if(func(str,0,n-1))
    {
        cout<<"Palindrome"<<endl;
    }
    else  
    {
        cout<<"Not Palindrome";
    }
}