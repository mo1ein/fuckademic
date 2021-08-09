#include<iostream>
#include<vector>

int main()
{
    int m, n;
    std::cin >> m >> n;

    // O(n) space complexity
    std::vector<int> pre(n, 1), cur(n, 1);
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            cur[j] = pre[j] + cur[j - 1];
        }
        std::swap(pre, cur);
    }
    std::cout << pre[n - 1];
}
