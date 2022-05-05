#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    ll n, m, x;
    cin >> n >> m >> x;
    if (m == x)
    {
        cout << 0 << endl;
        return;
    }
    ll tot = n * x;
    ll ans = tot / (x + 1);
    cout << ans << endl;
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