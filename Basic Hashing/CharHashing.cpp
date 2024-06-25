// TC: O(Q*N) where N = size of the string. 

#include<bits/stdc++.h>
using namespace std;
int hashh[256];
int main()
{
    string str;
    cin>>str;
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        hashh[(str[i])]+=1;
    }
    int q;
    cin>>q;
    while(q--)
    {
        char ch;    
        cin>>ch;
        cout<<hashh[ch]<<endl;
    }
}