#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void testcase()
{
    string s;
    cin >> s;
    int len = s.length();
    stack<pair<char, int>> st;
    int rem = 0, sub = 0;

    bool flag = true;

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '(')
            st.push({s[i], i});
        else
        {
            if (st.empty())
                st.push({s[i], i});
            else if ((st.top()).first == '(')
                st.pop();
            else
                st.push({s[i], i});
        }
    }
    rem = st.size();

    int k = len - 1;
    while (!st.empty())
    {
        int ind = (st.top()).second;
        if (ind == k)
            k--;
        else
        {
            sub++;
            k = ind - 1;
        }
        st.pop();
    }

    if (k != -1)
        sub++;
    cout << rem << " " << sub << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        testcase();
    }
}
