#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[3] = {3, 2, 1};
    vector<vector<int>> powerSet;
    int n = 3;

    // Generate all possible subsets
    for (int mask = 0; mask < (1 << n); mask++) {
        vector<int> subset;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                subset.push_back(arr[i]);
            }
        }
        powerSet.push_back(subset);
    }

    // Print all subsets
    for (auto subset : powerSet) {
        for (auto element : subset) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}


//Timecomplexity:O((2^n)*n))