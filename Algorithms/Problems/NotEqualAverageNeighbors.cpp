#include<iostream>
#include<algorithm>
#include<vector>


int main()
{
    // can input data from user ...
    std::vector<int> nums {1,2,3,4,5};
    int n = nums.size();
    sort(nums.begin(), nums.end());
    std::vector<int> ans(n);

    int i, j = 0;
    for (i = 0; i < n && j < n; j += 2) {
        ans[j] = nums[i];
        i++;
    }

    for (j = 1; j < n && i < n; j += 2) {
        ans[j] = nums[i];
        i++;
    }

    for (int i: ans)
        std::cout << i << " ";
}
