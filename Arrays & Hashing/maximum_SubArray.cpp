#include <bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int> &nums)
{
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        currentSum += nums[i];
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
        // edge case: if currentSum drops below 0, reset it to 0
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum subarray sum: " << maxSubArray(nums) << endl;
    return 0;
}