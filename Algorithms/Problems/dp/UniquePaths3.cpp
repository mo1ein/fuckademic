#include<iostream>
#include<vector>


int main()
{
    int m, n;
    std::cin >> m >> n;

    // ~ O(1) space complexity
    std::vector<int> cur(n, 1);
    for (int i = 1; i < m; i++)
        for (int j = 1; j < n; j++)
            cur[j] += cur[j - 1];

    std::cout << cur[n - 1];
}
