#include<bits/stdc++.h>
using namespace std;


bool saddlePoint(vector<vector<int>> &matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_row = matrix[i][0], col_id = 0;

        for (int j = 1; j < n; j++)
            if (min_row > matrix[i][j])
            {
                min_row = matrix[i][j];
                col_id = j;
            }

        int k;
        for (k = 0; k < n; k++)
            if (min_row < matrix[k][col_id])
                break;

        if (k == n)
        {
            cout << min_row;
            return true;
        }
    }

    return false;
}


int main()
{
    int n = 3;
    vector<vector<int>> matrix
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    if (saddlePoint(matrix, n) == false)
        cout << "No saddle point";
}
