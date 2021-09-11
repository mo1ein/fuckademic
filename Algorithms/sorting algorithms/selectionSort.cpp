#include<iostream>
#include<vector>


void selectionSort(std::vector<int> &arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++)
            if(arr[j] < arr[min])
                min = j;
        if (min != i)
            std::swap(arr[min], arr[i]);
    }
}


int main()
{
    std::vector<int> arr {2, 1, 6, 0, 9};
    selectionSort(arr);
    for (int i: arr)
        std::cout << i << " ";
}
