#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> array;
    array = {2, 5, 1, 1, 2, 6, 9, 4, 4};

    sort(array.begin(), array.end());

    // create temp array with max size of number in main list
    vector<int> temp(array[array.size() - 1] + 1);

    // fill array with zero
    fill(temp.begin(), temp.end(), 0);

    // fill numbers(not missed) with 1
    for(int i = 0; i < array.size(); i++)
        temp[array[i]] = 1;

    // if any index is 0 that's the number is missed
    for(int i = array[0]; i < temp.size(); i++)
        if(temp[i] == 0)
            cout << i << " ";
}
