// TC: O(2N) where N = size of the string. 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n=str.length();
    map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[str[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        char ch;    
        cin>>ch;
        cout<<mp[ch]<<endl;
    }
}