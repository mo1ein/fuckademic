#include<iostream>
#include<vector>


int partition(std::vector<int> &arr, int low, int hight) {

    int pivot = arr[hight];
    int i = low - 1;

    for (int j = low; j <= hight - 1; ++j) {
        if (arr[j] < pivot) {
            ++i;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[hight]);
    return i + 1;
}


void quickSort(std::vector<int> &arr, int low, int hight) {
    if (low < hight) {
        int pi = partition(arr, low, hight);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, hight);
    }
}


int main () {
    std::vector<int> arr {1, 30, 2, 3, 34, 0};
    quickSort(arr, 0, arr.size() - 1);
    for (auto i: arr)
        std::cout << i << " ";
}
