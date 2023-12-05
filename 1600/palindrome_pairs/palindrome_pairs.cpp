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

ll string2bin(string s) {
    ll bin = 0;
    for(char c : s) {
        bin ^= (1LL << (c - 'a'));
    }
    return bin;
}

int32_t main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //Start coding
    ll n;
    cin >> n;
    unordered_map<ll, ll> nums;
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        ll mask = string2bin(s);
        for(int k = 0; k < 26; k++) {
            ans += nums[mask ^ (1LL << k)];
        }
        ans += nums[mask];
        nums[mask]++;
    }
    cout << ans;
}