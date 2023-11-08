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

ll n;
bool grid[1000][1000];
bool seen[1000][1000];

void dfs(int x, int y) {
    seen[x][y] = true;
    for(int i = 0; i < 1000; i++) {
        if(!seen[i][y] && grid[i][y]) {
            dfs(i, y);
        }
        if(!seen[x][i] && grid[x][i]) {
            dfs(x, i);
        }
    }
}

int32_t main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //Start coding
    cin >> n;
    for(int i = 0; i < 1000; i++) {
        for(int j = 0; j < 1000; j++) {
            grid[i][j] = false;
            seen[i][j] = false;
        }
    }
    for(int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        grid[a-1][b-1] = true;
    }
    int groups = 0;
    for(int i = 0; i < 1000; i++) {
        for(int j = 0; j < 1000; j++) {
            if(!seen[i][j] && grid[i][j]) {
                dfs(i,j);
                groups++;
            }
        }
    }
    cout << groups - 1 << endl;
}