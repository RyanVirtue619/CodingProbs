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
    //https://codeforces.com/problemset/problem/1869/A
    ll t; 
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        if(n%2 == 0) {
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        } else {
            cout << 4 << endl;
            cout << 1 << " " << n << endl;
            cout << 2 << " " << n << endl;
            cout << 1 << " " << 2 << endl;
            cout << 1 << " " << 2 << endl;
        }
        ll b;
        for(int i = 0; i < n; i++) {
            cin >> b;
        }
    }
}
