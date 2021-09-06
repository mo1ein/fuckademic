#include<iostream>


double Power(double x, int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    if (n == -1)
        return 1 / x;
    return Power(x * x, n / 2) * ((n & 1) == 0 ? 1 : n > 0 ? x : 1 / x);
}


int main()
{
    double x;
    int n;
    std::cin >> x >> n;
    std::cout << Power(x, n);
}
