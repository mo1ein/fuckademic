#include<iostream>
#include<unordered_map>


int main()
{
    std::string s;
    std::cin >> s;

    std::unordered_map<char,int> map;
    for(int i=0; i<s.length(); i++)
        map[s[i]]++;

    for(int i=0; i<s.length(); i++)
        if(map[s[i]] == 1) {
            std::cout << i;
            return i;
        }

    std::cout << -1;
    return -1;
}
