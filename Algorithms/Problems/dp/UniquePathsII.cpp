#include<iostream>
#include<vector>


int main()
{
    std::vector<std::vector<int>> dp {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 0}
    };

    int m = dp.size();
    int n = dp[0].size();

    if (dp[0][0] == 1) {
        std::cout << 0;
        return 0;
    }

    dp[0][0] = 1;

    for (int i = 1; i < m; i++)
        dp[i][0] = (dp[i][0] == 0 && dp[i - 1][0] == 1);

    for (int j = 1; j < n; j++)
        dp[0][j] = (dp[0][j] == 0 && dp[0][j - 1] == 1);

    for (int i = 1; i < m; i++)
        for (int j = 1; j < n; j++)
            if (dp[i][j] == 0)
                dp[i][j] = dp[i][j - 1] + dp [i - 1][j];
            else
                dp[i][j] = 0;

    std::cout << dp[m - 1][n - 1];
    return 0;
}
