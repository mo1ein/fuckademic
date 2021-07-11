#include<bits/stdc++.h>
using namespace std;


int binarySearch(vector<int> &array, int &start, int &end, int &key)
{
    while (start <= end)
    {
        int middle = start + (end - start) / 2;

        if (array[middle] == key)
            return middle;

        if (key < array[middle])
            end = middle - 1 ;
        else
            start = middle + 1;
    }
    return -1;
}


int main()
{
    vector<int> array;
    array = {4, 1, 7, 2, 10, 5, 16};
    sort(array.begin(), array.end());

    int start = 0, end = array.size() - 1, key = 2;

    for (int i = 0; i < array.size(); i++)
        cout << array[i] << " ";

    int res = binarySearch(array, start, end, key);
    (res != -1) ? cout << "\n" << key << " is in index " << res
                : cout << "\nnot found!";
}
