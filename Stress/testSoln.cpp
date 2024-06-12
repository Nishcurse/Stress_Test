/**
 * Author: Ankur Gupta
 * Created: 2024-06-11 22:51:05
 **/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

#ifndef ONLINE_JUDGE
#include "debugger.h"
#else
#define debug(...) 1;
#endif

void solve()
{
    ll h, n;
    cin >> h >> n;
    vector<ll> attacks(n), cooldown(n);
    for (int i = 0; i < n; i++)
    {
        cin >> attacks[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> cooldown[i];
    }
    ll ans = 1e18;
    ll low = 0, high = 1e12;

    auto check = [&](ll mid) -> bool
    {
        ll slay = 0;
        for (int i = 0; i < n; i++)
        {
            ll attack = (mid / (cooldown[i])) * attacks[i];
            ll rem = mid % (cooldown[i]);
            if (rem > 0)
            {
                attack += attacks[i];
            }
            slay += attack;
        }
        return slay >= h;
    };
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        if (check(mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    
    while (t--)
        solve();
    return 0;
}