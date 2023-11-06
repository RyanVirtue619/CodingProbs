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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //Start coding
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll mind = INT_MAX;
        for(int i = 0; i < n; i++) {
            ll l, s;
            cin >> l >> s;
            ll rooms = l + ceil((long double)s/2) - 1;
            if(rooms < mind) {
                mind = rooms;
            }
        }
        cout << mind << endl;
    }
}