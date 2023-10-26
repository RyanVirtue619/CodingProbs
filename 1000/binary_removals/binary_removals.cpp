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
    while(t--) {
        string bin;
        cin >> bin;
        ll n = bin.length();
        bool ones = false;
        bool zeros = false;
        for(int i = 0; i < n-1; i++) {
            if(bin[i] == '1') {
                if(bin[i+1] == '1') {
                    ones = true;
                }
            }
            if(ones) {
                if(bin[i] == '0') {
                    if(bin[i+1] == '0') {
                        zeros = true;
                    }
                }
            }
        }
        if(ones && zeros) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
 }