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
    cin.tie(0); 
    cout.tie(0);
    //Start coding
    //https://codeforces.com/problemset/problem/71/A
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> s;
        int size = len(s);
        if (size > 10) {
            cout << s[0] << size-2 << s[size-1] << endl;
        } else {
            cout << s << endl;
        }
    }
    return 0;
}