#include<iostream>
#include<vector>
#include<queue>
using namespace std;


struct Point {
    int x;
    int y;
};


struct Qnode {
    Point pt;
    int dist;
};


bool isValid(int row, int col) {
    return (row >= 0) && (col >= 0) && (col < 10) && (row < 9);
}


int rowNum[] = {-1, 0, 0, 1};
int colNum[] = {0, -1, 1, 0};

int Bfs(Point src , Point dest, vector<vector<int>> arr)
{
    if (!arr[src.x][src.y] || !arr[dest.x][dest.y])
        return -1;

    int visited[9][10] = {0};
    visited[src.x][src.y] = 1;

    queue<Qnode> q;

    Qnode s = {src, 0};
    q.push(s);

    while (!q.empty())
    {
        Qnode curr = q.front();
        Point pt = curr.pt;

        if (pt.x == dest.x && pt.y == dest.y)
            return curr.dist;

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int row = pt.x + rowNum[i];
            int col = pt.y + colNum[i];

            if (isValid(row, col) && !visited[row][col] && arr[row][col])
            {
                visited[row][col] = 1;
                Qnode adj = { {row, col}, curr.dist + 1};
                q.push(adj);
            }
        }
    }
    return -1;
}


int main()
{
    vector<vector<int>> arr{
        { 1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
        { 1, 0, 1, 0, 1, 1, 1, 0, 1, 1 },
        { 1, 1, 1, 0, 1, 1, 0, 1, 0, 1 },
        { 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 },
        { 1, 1, 1, 0, 1, 1, 1, 0, 1, 0 },
        { 1, 0, 1, 1, 1, 1, 0, 1, 0, 0 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
        { 1, 1, 0, 0, 0, 0, 1, 0, 0, 1 }
    };

    Point src = {0, 0};
    Point dest = {3, 4};

    int dist = Bfs(src, dest, arr);
    cout << dist;
}
