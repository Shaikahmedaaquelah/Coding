#include <iostream>
using namespace std;

int main() 
{
    int number;
    cin >> number;

    int position;
    cin >> position; 

    cout<<(number&(~(1<<position)));
}
