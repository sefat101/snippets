#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

void solveWithHashmap(vector<int>& a) {
    unordered_map<int, int> freq;
    vector<int> pairs;

    // Step 1: Count frequency of each stick
    for (int num : a) {
        freq[num]++;
    }

    // Step 2: Find at least two different lengths that appear at least twice
    for (auto& it : freq) {
        if (it.second >= 2) {
            pairs.push_back(it.first);
        }
    }

    // Step 3: Check if we have enough pairs
    if (pairs.size() >= 2) {
        cout << pairs[0] << " " << pairs[0] << " " << pairs[1] << " " << pairs[1] << "\n";
    } else {
        cout << "-1\n";  // No solution found
    }
}
