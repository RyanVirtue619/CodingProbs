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
        long double n;
        cin >> n;
        
        ll l = 0;
        ll r = INT_MAX;
        ll mid;
        ll temp = 0;
        while(l <= r) {
            mid = l + (r - l) / 2;
            temp = ((mid-1)/3) * ((mid-1)/3) * 3;
            for(int i = 0; i <= (mid-1)%3; i++) {
                temp += ((mid-1)/3) * 2 + i;
            }
            temp *= 2;
            if(temp < n) {
                l = mid+1;
            } else {
                r = mid-1;
            }
        }
        cout << l << endl;
    }
}