/* 

    ॐ हौं जूं सः ॐ भूर्भुवः स्वः 
    ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय मामृतात् 
    ॐ स्वः भुवः भूः ॐ सः जूं हौं ॐ

   @Author  : Akshat Madhavan
   @Country : INDIA 
   
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()

#ifdef AKSHAT
#include "debug.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif


template<class T>void output (vector<T> &a) {for (auto &x : a) {cout << x << ' ';}cout << '\n';}
template<typename T, typename TT> void chmin (T &a, TT b) {if (a > b) swap(a, b);}
template<typename T, typename TT> void chmax (T &a, TT b) {if (a < b) swap(a, b);}



void solve() {
    ll x, y, z, k;
    cin >> x >> y >> z >> k;

    if (x * y * z < k) {
        cout << "0\n";
        return;
    }

    vector<ll> cand;

    if (k < max({x, y, z}))
        cand.push_back(k);

    for (ll i = 1; i * i <= k; ++i) {
        if (k % i == 0) {
            cand.push_back(i);
            if ((k / i) <= max({x, y, z}))
                cand.push_back(k / i);
        }
    }

    auto upd = [&] (ll p, ll q, ll r) {
        vector<ll> perm = {p, q, r};
        vector<ll> ma = {x, y, z};
        sort(begin(perm), end(perm));
        sort(begin(ma), end(ma));
        ll max_ = 0;
        do {
            ll cur = 1;
            for (int i = 0; i < 3; ++i) {
                if (ma[i] < perm[i]) {
                    cur = 0;
                    break;
                }
                cur *= (ma[i] - perm[i] + 1);
            }
            max_ = max(max_, cur);
        } while (next_permutation(begin(perm), end(perm)));

        return max_;
    };

    ll ans = 0;
    for (auto &p : cand) {
        for (auto &q : cand) {
            if (k % (p * q) == 0) {
                ans = max(ans, upd(p, q, k / (p * q)));
            }
        }
    }

    cout << ans << '\n';
} 


int32_t main() {
    
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    #ifdef AKSHAT   
        freopen("error.txt", "w", stderr);  
    #endif  

    int tc = 1;
    cin >> tc;
    for (int cases = 1; cases <= tc; ++cases) {
        solve();
        // cout << (solve() ? "YES\n" : "NO\n");
        // cout << "Case # " << cases;
    } 

    #ifdef AKSHAT
        double timeTaken = 1000.0 * clock() / CLOCKS_PER_SEC;
        cout << "\n[Finished in " << timeTaken << "ms]";
        cerr << "\n[Finished in " << timeTaken << "ms]";
    #endif

    return 0;
}

//JAI SHREE RAM !!!!