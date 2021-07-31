#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> ans {
        {10, 20},
        {1, 4},
        {0, 4}
    };

    sort(ans.begin(),ans.end());

    vector<vector<int>> merged;
    for (auto i : ans) {
        if (merged.empty() || merged.back()[1] < i[0])
            merged.push_back(i);
        else
            merged.back()[1] = max(merged.back()[1], i[1]);
    }

    for (int i = 0; i < merged.size(); i++) {
        for (int j = 0; j < merged[0].size(); j++) {
            cout << merged[i][j] << " ";
        }
            cout << "\n";
    }
}
