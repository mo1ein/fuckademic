#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    vector<vector<int>> matrix {
        {0,0,0,1,5},
        {3,4,2,2,1},
        {3,4,2,2,1},
    };

    queue<pair<int, int>> q;
    int m = matrix.size();
    int n = matrix[0].size();

    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            if (matrix[i][j] == 0)
                q.push({i, j});

    while (!q.empty()) {
        pair<int ,int> pt = q.front();
        q.pop();

        for (int i = 0; i < m; ++i)
            matrix[i][pt.second] = 0;

        for (int j = 0; j < n; ++j)
            matrix[pt.first][j] = 0;
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
}
