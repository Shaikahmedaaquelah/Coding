#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        char a='A';
        for(int j=1;j<=2*i+1;j++)
        {
            if(j<=((2*i+1)/2))
            {
                cout<<a++;
            }
            else{
                cout<<a--;
            }
        }
       
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}