#include<iostream>
#include<vector>


int main()
{
    std::vector<int> arr {1, 3, 4, 8};
    std::vector<std::vector<int>> queries {
        {0,1},
        {1,2},
        {0,3},
        {3,3}
    };
    std::vector<int> res;

    for (int i = 1; i < arr.size(); i++)
        arr[i] ^= arr[i - 1];

    for (auto q: queries)
       res.push_back(q[0] > 0 ? arr[q[0] - 1] ^ arr[q[1]] : arr[q[1]]);

    for (int i = 0; i < res.size(); i++)
        std::cout << res[i] << " ";
}
