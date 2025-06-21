#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            int area = (right - left) * min(height[left], height[right]);
            ans = max(ans, area);

            // Move the pointer pointing to the shorter line
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};  // Example input

    int result = sol.maxArea(height);
    cout << "Maximum area: " << result << endl;

    return 0;
}
