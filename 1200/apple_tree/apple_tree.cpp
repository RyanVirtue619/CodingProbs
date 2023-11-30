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

vll ans;

void dfs(vll vec[], int index, int parent) {
    if(vec[index].size() == 1 && vec[index][0] == parent) {
        ans[index] = 1;
    } else {
        for(int a : vec[index]) {   
            if(a != parent) {
                dfs(vec, a, index);
                ans[index] += ans[a];
            }
        }
    } 
}

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
        vll tree[n];
        for(int i = 0; i < n; i++) {
            ll u, v;
            cin >> u >> v;
            tree[u].pb(v);
            tree[v].pb(u);
        }
        ll q;
        cin >> q;
        ans.assign(n, 0);
        dfs(tree, 0, -1);
        for(int i = 0; i < q; i++) {
            ll a, b;
            cin >> a >> b;
            a--;
            b--;
            cout << ans[a] * ans[b] << endl;
        }
    }
    return 0;
}