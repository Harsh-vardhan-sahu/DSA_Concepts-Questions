#include <iostream>
#include <vector>
using namespace std;
//greedy approach
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0;
        int currentGas = 0;
        int startIndex = 0;
        int n = gas.size();

        for (int i = 0; i < n; i++) {
            int diff = gas[i] - cost[i];
            totalGas += diff;
            currentGas += diff;

            // If at any point currentGas drops below 0, reset starting point
            if (currentGas < 0) {
                startIndex = i + 1;
                currentGas = 0;
            }
        }

        // If totalGas is negative, journey is not possible
        return (totalGas >= 0) ? startIndex : -1;
    }
};

int main() {
    Solution sol;

    // Sample test case
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    int result = sol.canCompleteCircuit(gas, cost);
    if (result != -1) {
        cout << "Start at gas station: " << result << endl;
    } else {
        cout << "It is not possible to complete the circuit." << endl;
    }

    return 0;
}
