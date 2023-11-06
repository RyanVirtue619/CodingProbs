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
    int t;
    cin >> t;
    while(t--) {
        ll x;
        cin >> x;
        if(x % 14 <= 6 && x % 14 >= 1 && x > 14) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}