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
        int n;
        cin >> n;
        string str;
        cin >> str;
        vector<char> specials;
        int s;
        cin >> s;
        for(int i = 0; i < s; i++) {
            char spec;
            cin >> spec;
            specials.pb(spec);
        }
        ll ans = 0;
        ll temp = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < s; j++) {
                if(str[i] == specials[j]) {
                    ans = max(ans, temp);
                    temp = 0;
                }
            }
            temp++;
        }
        cout << ans << endl;
    }
}