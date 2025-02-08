#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void solveWithSorting(vector<int>& a) {
    sort(a.begin(), a.end());  // Step 1: Sort the array
    vector<int> pairs;

    // Step 2: Find at least two pairs
    for (int i = 1; i < a.size(); i++) {
        if (a[i] == a[i - 1]) {  // Found a pair
            pairs.push_back(a[i]);
            i++;  // Skip the next one to avoid duplicates
        }
    }

    // Step 3: If we found two pairs, print the first two pairs
    if (pairs.size() >= 2) {
        cout << pairs[0] << " " << pairs[0] << " " << pairs[1] << " " << pairs[1] << "\n";
    } else {
        cout << "-1\n";  // No solution
    }
}
