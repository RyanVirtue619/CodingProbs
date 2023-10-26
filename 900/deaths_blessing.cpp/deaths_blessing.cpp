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
    //https://codeforces.com/problemset/problem/1849/B
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll total = 0;
        vll vec;
        for(int i = 0; i < n; i++) {
            ll b;
            cin >> b;
            total += b;
        }
        for(int i = 0; i < n; i++) {
            ll b;
            cin >> b;
            vec.pb(b);
        }
        ll r = n-1;
        ll l = 0;
        while(r != l) {
            if(vec[l] > vec[r]) {
                total += vec[r];
                r--;
            } else {
                total += vec[l];
                l++;
            }
        }
        cout << total << endl;
    }
    return 0;
}