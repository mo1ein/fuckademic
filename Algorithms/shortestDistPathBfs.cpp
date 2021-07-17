#include<iostream>
#include<unordered_map>
#include <algorithm>
#include<queue>
#include<vector>
using namespace std;


struct hash_pair {
    size_t operator()(const pair<int, int>& p) const
    {
        auto hash1 = hash<int>{}(p.first);
        auto hash2 = hash<int>{}(p.second);
        return hash1 ^ hash2;
    }
};


bool IsValid(pair<int, int> pt, int num) {
    return (pt.first < 0) || (pt.second < 0) || (pt.first >= num) || (pt.second >= num);
}


std::vector<pair<int, int>> directions{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};


vector<pair<int, int>> Bfs(vector<vector<int>> arr, pair<int, int> src, pair<int, int> dest)
{
    vector<pair<int, int>> path;

    if (!arr[src.first][src.second] || !arr[dest.first][dest.second])
        return path;

    unordered_map<pair<int, int>, pair<int, int>, hash_pair> visited;

    pair<int, int> node;

    queue<pair<int, int>> q;
    q.push(src);

    while (!q.empty())
    {
        node = q.front();

        if (node.first == dest.first && node.second == dest.second)
        {
            while (node != src)
            {
                path.push_back(node);
                node = visited[node];
            }
            return path;
        }

        q.pop();

        for (pair<int, int> direction: directions)
        {
            pair<int, int> neighbour = {direction.first + node.first, direction.second + node.second};

            if (IsValid(neighbour, arr.size()))
                continue;

            if (arr[neighbour.first][neighbour.second] == 0)
                continue;

            if (visited.find(neighbour) != visited.end())
                continue;

            visited[neighbour] = node;
            q.push(neighbour);
        }
    }

    return path;
}


int main()
{
    vector<vector<int>> arr {
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {1, 1, 1, 1},
        {1, 0, 1, 1},
    };

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
            cout << arr[i][j] << " ";

        cout << "\n";
    }

    pair<int, int> s = {0, 0};
    pair<int, int> d = {2, 3};

    vector<pair<int ,int>> path = Bfs(arr, s, d);

    reverse(path.begin(), path.end());

    cout << "path:\n";

    for (pair<int, int> i : path)
        cout << i.first << " " << i.second << "\n";

    cout << path.size();
}
