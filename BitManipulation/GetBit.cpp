#include <iostream>
using namespace std;

bool getBit(int num, int i) 
{
    return ((num & (1 << i)) != 0);
}

int main() {
    int number;
    cin >> number;

    int position;
    cin >> position; 

    cout<<getBit(number,position);
}
