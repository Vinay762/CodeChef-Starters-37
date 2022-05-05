#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    ll zero = 0, one = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        if (a)
            one++;
        else
            zero++;
    }
    if (one > zero)
    {
        cout << 1 << endl;
    }
    else if (one == zero)
    {
        cout << 1 << endl;
    }
    else if (zero > one)
    {
        if (abs(zero - one) == 1)
        {
            if ((n - 1) % 2)
                cout << "1" << endl;
            else
                cout << 0 << endl;
        }
        else
        {
            cout << "0" << endl;
        }
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