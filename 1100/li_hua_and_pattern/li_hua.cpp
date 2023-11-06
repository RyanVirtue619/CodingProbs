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
        vvll arr;
        ll n;
        ll k;
        cin >> n >> k;
        ll difs = 0;
        for(int i = 0; i < n; i++) {
            vll vec;
            for(int j = 0; j < n; j++) {
                int b;
                cin >> b;
                vec.pb(b);
            }
            arr.pb(vec);
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(arr[i][j] != arr[n-i-1][n-j-1]) {
                    difs++;
                }
            }
        }
        difs /= 2;
        if(difs > k) {
            cout << "NO" << endl;
        } else {
            if(n%2 != 0) {
                cout << "YES" << endl;
            } else if((k-difs)%2) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
}
