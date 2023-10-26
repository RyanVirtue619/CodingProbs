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
    ll d;
    cin >> d;
    vll vec;
    for(int i = 0; i < n; i++) {
        ll b;
        cin >> b;
        vec.pb(b);
    }
    sort(vec.begin(), vec.end());
    ll teams = 0;
    ll plrs = 0;
    ll l = 0;
    ll r = n-1;
    ll req;
    while(true) {
        if(d%vec[r]==0) {
            req = ceil((long double) d/vec[r]) + 1;
        
        } else {
             req = ceil((long double) d/vec[r]);
        }
        if(req + plrs > n) {
            break;
        } else {
            r--;
            l += req-1;
            teams += 1;
            plrs += req;
        }
    }
    cout << teams;
    return 0;
}