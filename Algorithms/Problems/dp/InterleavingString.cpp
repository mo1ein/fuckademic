#include<iostream>


int main() {
    std::string s1, s2, s3;
    std::cin >> s1 >> s2 >> s3;

    if (s3.size() != s1.size() + s2.size()) {
        std::cout << "false";
        return false;
    }

    int n = s1.size(), m = s2.size();
    bool dp[n + 1][m + 1];

    for (int i = 0; i < n + 1; ++i) {
        for (int j = 0; j < m + 1; ++j) {
            if (i == 0 && j == 0)
                dp[i][j] = true;

            else if (i == 0)
                dp[i][j] = dp[i][j - 1] && s2[j - 1] == s3[j - 1 + i];

            else if (j == 0)
                dp[i][j] = dp[i - 1][j] && s1[i - 1] == s3[i - 1 + j];

            else
                dp[i][j] = (dp[i][j - 1] && s2[j - 1] == s3[j - 1 + i]) || (dp[i - 1][j] && s1[i - 1] == s3[i - 1 + j]);
        }
    }
    std::cout << (dp[n][m] ? "true" : "false");
}
