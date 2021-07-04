#include<bits/stdc++.h>
using namespace std;


// rotate matrix to 90 degree left
int main()
{
    int n;
    cin >> n;

    int matrix[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < (n + 1) / 2; i++)
        for (int j = 0; j < n / 2; j++)
        {
            int d = matrix[n - 1 - i][n - 1 - j];
            matrix[n - 1 - i][n - 1 - j] = matrix[n - 1 - j][i];
            matrix[n - 1 - j][i] = matrix[i][j];
            matrix[i][j] = matrix[j][n - 1 - i];
            matrix[j][n - 1 - i] = d;
        }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
}
