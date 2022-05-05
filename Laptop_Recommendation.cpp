#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> nums(n);
    for (ll i = 0; i < n; i++)
        cin >> nums[i];
    unordered_map<ll, ll> mp;
    for (auto a : nums)
        mp[a]++;
    ll ans;
    ll maxi = 0;
    int flag = 0;
    for (auto key : mp)
    {
        ll a = key.first;
        ll b = key.second;
        if (b > maxi)
        {
            maxi = b;
            ans = a;
            flag = 0;
        }
        else if (b == maxi)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        cout << "CONFUSED" << endl;
    }
    else
    {
        cout << ans << endl;
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