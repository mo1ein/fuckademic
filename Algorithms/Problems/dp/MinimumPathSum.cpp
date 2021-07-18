#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<vector<int>> grid {
        {1, 3, 1},
        {1, 5, 1},
        {4, 2, 1}
    };

    int m = grid.size();
    int n = grid[0].size();
    int dp[m][n];
    // store sum in array dp approach
    dp[0][0] = grid[0][0];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
                continue;
            if (i == 0)
                dp[i][j] = grid[i][j] + dp[i][j - 1];
            else if (j == 0)
                dp[i][j] = grid[i][j] + dp[i - 1][j];
            else
                dp[i][j] = grid[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
        }

    cout << dp[m - 1][n - 1];
}
