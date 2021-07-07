#include<bits/stdc++.h>
using namespace std;


int rand5() {
    srand ((time(NULL)));
    return rand() % 5 + 1;
}

int rand7()
{
    int res;
    while(true)
    {
        res = 5 * (rand5() - 1) + rand5();
        if (res <= 21)
            break;
    }
    return res % 7 + 1;
}


int main()
{
    cout << rand7();
}
