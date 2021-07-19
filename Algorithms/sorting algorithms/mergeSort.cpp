#include<iostream>
#include<vector>

using namespace std;


void merge(vector<int> &arr, int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int l[n1];
    int m[n2];

    for (int i = 0; i < n1; i++)
        l[i] = arr[i + start];

    for (int i = 0; i < n2; i++)
        m[i] = arr[i + mid + 1];

    int i = 0, j = 0, k = start;

    while (i < n1 && j < n2) {
        if (l[i] <= m[j]) {
            arr[k] = l[i];
            i++;
        }
        else {
            arr[k] = m[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = l[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = m[j];
        j++;
        k++;
    }
}


void mergeSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }

}


void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}


int main()
{
    vector<int> arr {3, 4, 6, 1, 0};
    mergeSort(arr, 0, arr.size() - 1);
    cout << "sorted array: \n";
    print(arr);
}
