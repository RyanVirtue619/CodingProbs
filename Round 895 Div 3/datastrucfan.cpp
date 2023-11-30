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
        ll vec[n];
        ll precomputed[n];
        string s;
        for(int i = 0; i < n; i++) {
            ll b;
            cin >> b;
            vec[i] = b;
        }
        precomputed[0] = vec[0];
        for(int i = 0; i < n; i++) {
            precomputed[n] = vec[i] ^ precomputed[n-1];
        }
        cin >> s;
        ll qs;
        cin >> qs;
        ll xor0 = 0;
        ll xor1 = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '0') {
                xor0 ^= vec[i];
            } else {
                xor1 ^= vec[i];
            }
        }
        for(int i = 0; i < qs; i++) {
            int aorb;
            cin >> aorb;
            if(aorb == 1) {
                ll l;
                ll r;
                cin >> l >> r;
                xor0 ^= precomputed[r] - precomputed[l-1];
                xor1 ^= precomputed[r] - precomputed[l-1];
            } else {
                char lookfor;
                cin >> lookfor;
                if(lookfor == 0) {
                    cout << xor0 << " ";
                } else {
                    cout << xor1 << " ";
                }
            } 
        }
        cout << endl;
    }
}