#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<vector<int>> mat {
        {2, 3, 1},
        {4, 3, 1},
        {4, 1, 0}
    };

    vector<vector<int>> temp;
    int m = mat.size();
    int n = mat[0].size();

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << "\n";
    }
    cout << "\n";

    for (int i = m - 2; i >= 0; i--) {
        int j = 0, tj = 0;
        vector<int> col;
        for (int ii = i; ii < m && j < n; ii++) {
            col.push_back(mat[ii][j]);
            j++;
        }
        temp.push_back(col);
    }

    for (int j = 1; j < n - 1; j++) {
        int i = 0;
        vector<int> col;
        for (int jj = j; jj < n && i < m; jj++) {
            col.push_back(mat[i][jj]);
            i++;
        }
        temp.push_back(col);
    }

    for (int i = 0; i < temp.size(); i++) {
        sort(temp[i].begin(), temp[i].end());
    }

    int ti = 0;
    for (int i = m - 2; i >= 0; i--) {
        int j = 0, tj = 0;
        for (int ii = i; ii < m && j < n; ii++) {
            mat[ii][j] = temp[ti][tj];
            j++;
            tj++;
        }
        ti++;
    }

    for (int j = 1; j < n - 1; j++) {
        int i = 0, tj = 0;
        for (int jj = j; jj < n && i < m; jj++) {
            mat[i][jj] = temp[ti][tj];
            i++;
            tj++;
        }
        ti++;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << "\n";
    }
}
