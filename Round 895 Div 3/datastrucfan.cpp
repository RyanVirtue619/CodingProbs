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
        string s;
        for(int i = 0; i < n; i++) {
            ll b;
            cin >> b;
            vec[i] = b;
        }
        cin >> s;
        ll qs;
        cin >> qs;
        for(int i = 0; i < qs; i++) {
            int aorb;
            cin >> aorb;
            if(aorb == 1) {
                ll l;
                ll r;
                cin >> l >> r;
                for(int j = l-1; j < r; j++) {
                    if(s[j] == '0') {
                        s[j] = '1';
                    } else {
                        s[j] = '0';
                    }
                }
            } else {
                char lookfor;
                cin >> lookfor;
                ll xors = 0;
                for(int j = 0; j < n; j++) {
                    if(s[j] == lookfor) {
                        xors = xors ^ vec[j];
                    }
                }
                cout << xors << " ";
            } 
        }
        cout << endl;
    }
}