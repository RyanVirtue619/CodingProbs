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
        ll maxd = 0;
        ll temp2;
        ll maxnum;
        cin >> maxnum;
        for(int i = 1; i < n; i++) {
            cin >> temp2;
            maxd = max(maxd, maxnum - temp2);
            maxnum = max(temp2, maxnum);
        }
        if(maxd == 0) {
            cout << 0 << endl;
        } else {
            cout << floor(log2(maxd))+1 << endl;
        }
    }
}