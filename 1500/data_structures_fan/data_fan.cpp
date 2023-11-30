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
        vll vec(n+1);
        vec[0] = 0;
        vll nums(n);
        ll xorsum = 0;
        for(int i = 1; i < n+1; i++) {
            ll b;
            cin >> b;
            xorsum ^= b;
            vec[i] = xorsum;
            nums[i-1] = b;
        }
        string s;
        cin >> s;
        ll xoroff = 0;
        ll xoron = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '0') {
                xoroff ^= nums[i];
            } else {
                xoron ^= nums[i];
            }
        }
        ll q;
        cin >> q;
        for(int i = 0; i < q; i++) {
            ll type;
            cin >> type;
            if(type == 1) {
                ll l, r;
                cin >> l >> r;
                xorsum = vec[r] ^ vec[l-1];
                xoroff ^= xorsum;
                xoron ^= xorsum;
            } else {
                ll bitty;
                cin >> bitty;
                if(bitty) {
                    cout << xoron << " ";
                } else {
                    cout << xoroff << " ";
                }
            }
        }
        cout << endl;
    }
}