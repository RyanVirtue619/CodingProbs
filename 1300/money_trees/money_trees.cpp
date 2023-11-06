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
    return a.second < b.second;
}

int32_t main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //Start coding
    ll t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        vector<pll> vec;
        vll fruit;
        vll height;
        for(int i = 0; i < n; i++) {
            ll b;
            cin >> b;
            fruit.pb(b);
        }
        for(int i = 0; i < n; i++) {
            ll b;
            cin >> b;
            height.pb(b);
        }
        for(int i = 0; i < n; i++) {
            vec.pb(mp(fruit[i],height[i]));
        }
        sort(vec.begin(), vec.end(), sorte);
        vll lens(n);
        lens[n-1] = 1;
        for(int i = n - 2; i >= 0; i--) {
            
        }
    }
}