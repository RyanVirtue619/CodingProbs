#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<string> vs;

int32_t main() 
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //Start coding
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        ll x;
        cin >> n >> x;
        vll v;
        for(int i = 0; i < n; i++) {
            ll b;
            cin >> b;
            v.pb(b);
        }
        ll l = 0;
        ll r = INT32_MAX;
        ll ans = 0;
        ll loopcheck = 0;
        while(l < r) {
            ll insum = 0;
            ans = l + (long double) (r - l + 1) / 2;
            for(int i = 0; i < n; i++) {
                if(ans - v[i] > 0) {
                    insum += ans - v[i];
                }
            }
            if(insum <= x) {
                l = ans;
            } else {
                r = ans - 1;
            }
        }
        cout << l << endl;
    }
}