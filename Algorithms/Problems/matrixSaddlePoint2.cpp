#include<bits/stdc++.h>
using namespace std;


int saddlePoint(vector<vector<int>> &arr, int &n)
{
    for (int i = 0; i < n; i++)
    {
        int min_row = arr[i][0], col_id = 0;

        for (int j = 1; j < n; j ++)
        {
            if (min_row < arr[i][j])
            {
                min_row = arr[i][j];
                col_id = j;
            }
        }

        int k;
        for (k = 0; k < n; k++)
            if (min_row > arr[k][col_id])
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
    vector<vector<int>> arr {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    if (saddlePoint(arr, n) == false)
        cout << "No saddle point";
}
