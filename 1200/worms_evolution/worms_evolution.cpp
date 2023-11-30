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
    ll n;
    cin >> n;
    vector<pll> worms;
    for(int i = 0; i < n; i++) {
        ll b;
        cin >> b;
        worms.pb(mp(b,i));
    }
    ll ans = -1;
    sort(worms.begin(), worms.end());
    for(int i = n-1; i >= 1; i--) {
        if(ans == 0) break;
        ll l = 0;
        ll r = i-1;
        while(l < r) {
            ll sum = worms[l].first + worms[r].first;
            ll req = worms[i].first;
            if(sum == req) {
                cout << worms[i].second + 1 << " " << worms[r].second + 1<< " " << worms[l].second + 1<< endl;
                ans = 0;
                break;
            } else if(sum < req) {
                l++;
            } else {
                r--;
            }
        }
    }
    if (ans == -1) {
        cout << ans << endl;
    }
    
}