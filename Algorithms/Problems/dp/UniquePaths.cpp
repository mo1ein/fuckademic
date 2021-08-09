#include<iostream>
#include<vector>


int main()
{
    int m, n;
    std::cin >> m >> n;

    std::vector<std::vector<int>> dp(m, std::vector<int>(n, 1));
    for (int i = 1; i < m; i++)
        for (int j = 1; j < n; j++)
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];

    std::cout << dp[m - 1][n - 1];
}
