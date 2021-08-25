#include<iostream>
#include<vector>


int main() {
    std::vector<int> nums {4,3,2,7,8,2,3,1};
    std::vector<int> res;
    for (int i = 0; i < nums.size(); i++) {
        nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
        if (nums[abs(nums[i]) - 1] > 0)
            res.push_back(abs(nums[i]));
    }

    for (auto i: res)
        std::cout << i << " ";
}
