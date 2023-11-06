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
    vll test[t];
    for(int i = 0; i < t; i++) {
        ll b;
        cin >> b;
        test[i].pb(b);
    }
    for(auto &t : test)  {
        cout << t[0] << endl;
    }
}