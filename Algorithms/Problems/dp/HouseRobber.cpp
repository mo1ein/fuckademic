#include<iostream>
#include<vector>
using namespace std;


int rob(vector<int>& nums) {

    int n = nums.size();

    if (n == 1)
        return nums[0];
    if (n == 2)
        return max(nums[0], nums[1]);

    int dp[n];
    dp[0] = nums[0];
    dp[1] = max(nums[1], dp[0]);

    for (int i = 2; i < n; i++)
        dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);

    return dp[n - 1];
}


int main() {
    vector<int> nums {2, 1, 1, 2};
    int res = rob(nums);
    cout << res;
}
