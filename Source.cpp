#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool bracketsChek(string str)
{
    int i;
    char c;
    int n = str.length();
    stack <char> st;

    for (i = 0; i < n; i++)
    {
        c = str.at(i);

        if (st.empty())
        {
            st.push(c);
        }
        else if (st.top() == '(' and c == ')' or st.top() == '{' and c == '}' or st.top() == '[' and c == ']')
        {
            st.pop();
        }
        else
            st.push(c);
    }

    if (st.empty())
        return true;
    else
        return false;
}

int main() {
    string str;
    getline(cin, str);
    cout << bracketsChek(str);
    return 0;
}