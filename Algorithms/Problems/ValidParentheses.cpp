#include<iostream>
#include<stack>
using namespace std;


bool bracket(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
            continue;
        }

        if (st.empty()) {
            return false;
        }

        char x;
        if (s[i] == ')') {
            x = st.top();
            st.pop();
            if (x == '[' || x == '{') {
                return false;
            }
        } else if (s[i] == ']') {
            x = st.top();
            st.pop();
            if (x == '(' || x == '{') {
                return false;
            }
        } else if (s[i] == '}') {
            x = st.top();
            st.pop();
            if (x == '[' || x == '(') {
                return false;
            }
        }
    }
    return (st.empty()) ? true : false;
}


int main()
{
    string s = "()]";
    cin >> s;
    cout << (bracket(s) ? "valid": "not valid");
}
