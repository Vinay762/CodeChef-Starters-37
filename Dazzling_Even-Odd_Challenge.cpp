#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        sum += a;
    }
    ll a = n / 2;
    ll b = sum / a;
    if (sum % a == 0 && b % 2 == 1)
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