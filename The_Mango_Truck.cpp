#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    ll x, y, z;
    cin >> x >> y >> z;
    ll n = z - y;
    cout << n / x << endl;
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