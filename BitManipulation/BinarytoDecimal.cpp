#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(log₂(binary))
// Space Complexity: O(1)
void binaryToDecimal(int binary) 
{
    int decimal = 0;
    int base=1;
    while(binary)
    {
        int lastdigit=binary%10;
        decimal=decimal+lastdigit*base;
        base=base*2;
        binary=binary/10;
    }
    cout << decimal;
}

int main() {
    int binary;
    cin >> binary;
    binaryToDecimal(binary);
    return 0;
}
