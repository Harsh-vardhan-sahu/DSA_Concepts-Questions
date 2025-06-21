#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> mp;

        // Count frequencies of even numbers
        for (int n : nums) {
            if (n % 2 == 0) mp[n]++;
        }

        int ans = 0;
        int occur = 0;

        // Find the most frequent even number with smallest value in case of tie
        for (auto n : mp) {
            if (occur == n.second) {
                ans = min(ans, n.first);
            } else if (occur < n.second) {
                occur = n.second;
                ans = n.first;
            }
        }

        // If no even number was found
        return (occur == 0) ? -1 : ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2, 3, 4, 4, 4, 2};  // Example input

    int result = sol.mostFrequentEven(nums);
    cout << "Most frequent even number: " << result << endl;

    return 0;
}
