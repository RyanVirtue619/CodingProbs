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

bool sorte(const pll& a, const pll& b) {
    if(a.first != b.first) {
        return (a.first > b.first);
    } else {
        return (a.second < b.second);
    }
}

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
        vector<pll> vec;
        ll n;
        ll b;
        ll s;
        cin >> n >> s;
        for(int i = 0; i < n; i++) {
            cin >> b;
            ll mod = b % s;
            if(mod == 0) {
                mod = s;
            }
            vec.pb(mp(mod, i+1));
        }
        sort(vec.begin(), vec.end(), sorte);
        for(pll pair : vec) {
            cout << pair.second << " ";
        }
        cout << endl;
    }
    return 0;
}