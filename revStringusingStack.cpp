#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sh = "Vivek";
    stack<char> ch;
    for (auto i : sh)
    {
        ch.push(i);
    }
    string ans = "";
    while (!ch.empty())
    {
        char c = ch.top();
        ans.push_back(c);
        ch.pop();
    }
    cout << ans << endl;
}