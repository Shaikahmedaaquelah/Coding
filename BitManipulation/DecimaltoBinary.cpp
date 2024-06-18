#include<bits/stdc++.h>
using namespace std;

//TimeComplexity: O(n)
//SpaceComplexity: O(n)
void binarytodecimal(int decimal)
{
    string binary="";
    while(decimal!=0)
    {
        binary=to_string(decimal%2)+binary;
        decimal = decimal / 2;
    }
    cout<<binary<<endl;
}
int main()
{
    int decimal;
    cin>>decimal;

    binarytodecimal(decimal);

    //using inbuilt function
    //TimeComplexity= O(1)
    //SpaceComplexity: O(n)
    bitset<sizeof(int) * 8> binary(decimal);
    cout<<binary;

    return 0;
}