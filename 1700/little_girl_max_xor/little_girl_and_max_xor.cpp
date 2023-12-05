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
    ull a, b;
    cin >> a >> b;
    if(a == b) {
        cout << 0 << endl;
    } else if (b-a == 1){ 
        cout << (a ^ b) << endl;
    } else {
        for(ull k = 63; k >= 0; k--) {
            if(((a >> k) & 1LL) != ((b >> k) & 1LL)) {
                cout << (1LL << (k + 1LL)) - 1LL << endl; 
                break;
            }
        }
    }
}