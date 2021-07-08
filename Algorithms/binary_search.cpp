#include<bits/stdc++.h>
using namespace std;


// add more implemations
int main()
{
    vector<int> array;
    array = {4, 1, 7, 2, 10, 5, 16};
    int key = 10;

    sort(array.begin(), array.end());

    for(int i = 0; i < array.size(); i++)
        cout << array[i] << " ";

    int avg;
    int sum = 0;
    int start = 0, end = array.size() - 1;

    do {
        for(int i = start; i <= end; i++)
            sum += i;

        avg = sum / ((end - start) + 1);

        if(key > array[avg])
            start = avg;
        else if(key < array[avg])
            end = avg;
        else
        {
            cout << "found: " << array[avg];
            break;
        }

        sum = 0;

    } while(key != array[avg]);
}
