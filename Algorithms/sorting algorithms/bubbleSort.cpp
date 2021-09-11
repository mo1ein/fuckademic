#include<iostream>
#include<vector>


void bubbleSort(std::vector<int> &arr) {
    int len = arr.size();
    for (int i = 0; i < len - 1; i++) {
        bool swaped = false;
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swaped = true;
            }
        }
        if (!swaped)
            break;
    }
}


int main()
{
    std::vector<int> arr {3, 4, 1, 0, 9, 2};
    bubbleSort(arr);
    for (int i: arr)
        std::cout << i << " ";
}
