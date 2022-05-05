#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    ll x, h;
    cin >> x >> h;
    if (x >= h)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}