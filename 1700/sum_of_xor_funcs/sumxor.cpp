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

ll mod = 998244353;

int32_t main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //Start coding
    ll n;
    cin >> n;
    vll vec(n);
    for(int i = 0; i < n+1; i++) {
        ll b;
        cin >> b;
        vec[i] = b;
    }
    ll ans = 0;
    for(int k = 0; k < 30; k++) {
        ll sumbit = 0;
        ll sumfirst = 0;
        ll sumsecond = 0;
        ll countfirst = 0;
        ll countsecond = 0;
        for(int i = 0; i < n; i++){
            ll sumright = 0;
            ll bit = (vec[i] >> k) & 1;
            if(bit) {
                swap(sumfirst, sumsecond);
                swap(countfirst, countsecond);
                countfirst++;
            } else {
                countsecond++;
            }
            sumfirst += countfirst;
            sumsecond += countsecond;
            sumbit = (sumbit + sumfirst) % mod; 
        }
        // scale answer to current bit
        ans = (ans + (sumbit * (1 << k))) % mod;
    }
    cout << ans << endl;
}