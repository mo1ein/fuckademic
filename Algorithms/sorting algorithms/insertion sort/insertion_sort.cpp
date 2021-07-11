#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> arr;
    arr = {1, 6, 5, 0, 23, 11, 9};

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    cout << "\nafter sorting....\n";

    for (int i = 1; i < arr.size(); i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}
