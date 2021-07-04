#include<bits/stdc++.h>
using namespace std;


int pow(int &base, int &exponent)
{
    if(exponent == 0)
        return 1;
    else if(exponent % 2 == 0)
        return pow(base * base, exponent / 2);
    else
        return base * pow(base * base, (exponent - 1) / 2);
}


int main()
{
    int base, exponent;
    cin >> base >> exponent;
    cout << pow(base, exponent);
}
