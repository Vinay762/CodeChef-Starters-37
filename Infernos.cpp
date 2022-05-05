#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> nums(n);
    for (ll i = 0; i < n; i++)
        cin >> nums[i];
    ll op1 = *max_element(nums.begin(), nums.end());
    ll op2 = 0;
    for (ll i = 0; i < n; i++)
    {
        nums[i] = nums[i] + x - 1;
        op2 += nums[i] / x;
    }
    cout << min(op1, op2) << endl;
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