#include<iostream>


int main()
{
    std::string s;
    std::cin >> s;
    int t;
    std::cin >> t;
    while (t--) {
        int a, b;
        std::cin >> a >> b;
        std::string ans = "";
        for (int i = 0; i <= s.size(); i++) {
            if (i == a)
                ans += '(';
            if (i == b)
                ans += ')';
            if (i != s.size())
                ans += s[i];
        }
        std::cout << ans << "\n";
        s = ans;
    }
}
