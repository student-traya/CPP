#include <iostream>
#include <vector>

using namespace std;

int maxSubarraySum(const vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    // Example usage:
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; // Example input array
    cout << "Maximum subarray sum: " << maxSubarraySum(nums) << endl;
    return 0;
}