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
ll t, n, m, q;
int32_t main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //Start coding
    cin >> t;
    while(t--) {
        cin >> n >> m >> q;
        vll jelly;
        vll gelly;
        ll jsum = 0;
        ll jmin = INT32_MAX;
        ll gmax = 0;
        ll ji = 0;
        ll gi = 0;
        for(int i = 0; i < n; i++) {
            ll b;
            cin >> b;
            jelly.pb(b);
            if(b < jmin) {
                ji = i;
                jmin = b;
            }
        }
        for(int i = 0; i < m; i++) {
            ll b;
            cin >> b;
            gelly.pb(b);
            if(b > gmax) {
                gi = i;
                gmax = b;
            }
        }
        if(jmin < gmax) swap(jelly[ji], gelly[gi]);
        q--;
        sort(jelly.begin(), jelly.end());
        sort(gelly.begin(), gelly.end());
        if(q % 2 != 0) {
            swap(jelly[n-1], gelly[0]);
        }
        for(int i = 0; i < n; i++) jsum += jelly[i];
        cout << jsum << endl;
    }
}