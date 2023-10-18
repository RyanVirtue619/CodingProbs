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
    //https://codeforces.com/problemset/problem/1879/B
    ll t;
    cin >> t;
    for(ll i = 0; i < t; i++) {
        ll n;
        cin >> n;
        vll rows;
        vll cols;
        ll rowsum = 0;
        ll colsum = 0;
        for(ll i = 0; i < n; i++) {
            ll item;
            cin >> item;
            rowsum += item;
            rows.pb(item);
        }
        for(ll i = 0; i < n; i++) {
            ll item;
            cin >> item;
            colsum += item;
            cols.pb(item);
        }
        sort(rows.begin(), rows.end());
        sort(cols.begin(), cols.end());
        ll solution = min((rows[0]*n) + colsum,(cols[0]*n) + rowsum);
        cout << solution << endl;
    }
    return 0;
}