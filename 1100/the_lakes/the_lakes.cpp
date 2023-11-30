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

// init n, m, and grid globally
ll n, m;
// 1000 is max size
int grid[1000][1000];
bool seen[1000][1000];

int dfs(int r, int c) {
    seen[r][c] = true;
    // set sum equal to the item, add the results of other dfs to get totalgt
    int sum = grid[r][c];
    // check below square
    if(r > 0) {
        if(grid[r-1][c] > 0 && !seen[r-1][c]) {
            sum += dfs(r-1, c);
        }
    }
    // check left of square
    if(c > 0) {
        if(grid[r][c-1] > 0 && !seen[r][c-1]) {
            sum += dfs(r, c-1);
        }
    }
    // check above square
    if(r < n-1) {
        if(grid[r+1][c] > 0 && !seen[r+1][c]) {
            sum += dfs(r+1, c);
        }
    }
    // check below square
    if(c < m-1) {
        if(grid[r][c+1] > 0 && !seen[r][c+1]) {
            sum += dfs(r, c+1);
        }
    }
    return sum;
}

int32_t main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // Start coding
    ll t;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        // Fill with false values
        for(int i = 0; i < n-1; i++) {
            for(int j = 0; j < m-1; j++) {
                grid[i][j] = false;
                seen[i][j] = false;
            }
        }
        // Fill with inputs
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                ll a;
                cin >> a;
                grid[i][j] = a;
                seen[i][j] = false;
            }
        }
        // Run dfs on each square and save the max group
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(!seen[i][j] && grid[i][j] != 0) ans = max(dfs(i, j), ans);
            }
        }
        cout << ans << endl;
    }
}