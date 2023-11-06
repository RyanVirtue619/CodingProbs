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

ll grid[1001][1001];
bool seen[1001][1001];
ll n, m;

int dfs(ll i, ll j) {
    seen[i][j] == true;
    ll sum = grid[i][j];
    if(i-1 != 0 && !seen[i-1][j] && grid[i-1][j] != 0) {
        sum += dfs(i-1, j);
    }
    if(j-1 != 0 && !seen[i][j-1] && grid[i][j-1] != 0) {
        sum += dfs(i, j-1);
    }
    if(i+1 != n-1 && !seen[i+1][j] && grid[i+1][j] != 0) {
        sum += dfs(i+1, j);
    }
    if(j+1 != m-1 && !seen[i][j+1] && grid[i][j+1] != 0) {
        sum += dfs(i, j+1);
    }
    return sum;
}

int32_t main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //Start coding
    ll t;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> grid[i][j];
                seen[i][j] = false;
            }
        }
        ll s = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(!seen[i][j] && grid[i][j] != 0) {
                    ll temp = dfs(i, j);
                    s = max(temp, s);
                }
            }
        }
        cout << s << endl;
    }
}